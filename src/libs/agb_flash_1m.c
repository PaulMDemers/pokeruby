#include "gba/gba.h"
#include "gba/flash_internal.h"

#if SRAM_SAVE
static const char AgbLibFlashVersion[] = "SRAM_V113";
#else
static const char AgbLibFlashVersion[] = "FLASH1M_V103";
#endif

const struct FlashSetupInfo * const sSetupInfos[] =
{
    &MX29L010,
    &LE26FV10N1TS,
    &DefaultFlash
};

u16 IdentifyFlash(void)
{
#if SRAM_SAVE
    static const u16 sSramMaxTime[] =
    {
        0, 0, 0,
        0, 0, 0,
        0, 0, 0,
        0, 0, 0,
    };
    static const struct FlashType sSramFlashType =
    {
        0, // Do not use Flash bank switching on SRAM carts.
        {
            4096,
              12,
              32,
               0
        },
        { 3, 1 },
        { { 0x00, 0x00 } }
    };

    ProgramFlashByte = ProgramFlashByte_SRAM;
    ProgramFlashSector = ProgramFlashSector_SRAM;
    EraseFlashChip = EraseFlashChip_SRAM;
    EraseFlashSector = EraseFlashSector_SRAM;
    WaitForFlashWrite = WaitForFlashWrite_Common;
    gFlashMaxTime = sSramMaxTime;
    gFlash = &sSramFlashType;

    return 0;
#else
    u16 result;
    u16 flashId;
    const struct FlashSetupInfo * const *setupInfo;

    REG_WAITCNT = (REG_WAITCNT & ~WAITCNT_SRAM_MASK) | WAITCNT_SRAM_8;

    flashId = ReadFlashId();

    setupInfo = sSetupInfos;
    result = 1;

    for (;;)
    {
        if ((*setupInfo)->type.ids.separate.makerId == 0)
            break;

        if (flashId == (*setupInfo)->type.ids.joined)
        {
            result = 0;
            break;
        }

        setupInfo++;
    }

    ProgramFlashByte = (*setupInfo)->programFlashByte;
    ProgramFlashSector = (*setupInfo)->programFlashSector;
    EraseFlashChip = (*setupInfo)->eraseFlashChip;
    EraseFlashSector = (*setupInfo)->eraseFlashSector;
    WaitForFlashWrite = (*setupInfo)->WaitForFlashWrite;
    gFlashMaxTime = (*setupInfo)->maxTime;
    gFlash = &(*setupInfo)->type;

    return result;
#endif
}

u16 WaitForFlashWrite_Common(u8 phase, u8 *addr, u8 lastData)
{
    u16 result = 0;
    u8 status;

    StartFlashTimer(phase);

    while ((status = PollFlashStatus(addr)) != lastData)
    {
        if (status & 0x20)
        {
            // The write operation exceeded the flash chip's time limit.

            if (PollFlashStatus(addr) == lastData)
                break;

            FLASH_WRITE(0x5555, 0xF0);
            result = phase | 0xA000u;
            break;
        }

        if (gFlashTimeoutFlag)
        {
            if (PollFlashStatus(addr) == lastData)
                break;

            FLASH_WRITE(0x5555, 0xF0);
            result = phase | 0xC000u;
            break;
        }
    }

    StopFlashTimer();

    return result;
}
