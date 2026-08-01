# Pokemon Lilac Version Release Checklist

## Release

- Version: `v1.2`
- Branch: `pokemon-lilac-baseline`
- Source commit: `5fd92f9`
- Output folder: `C:\Users\Paul\Documents\Codex\2026-07-04\we\outputs`

## Flash This For The Cartridge

Use this ROM for the physical birthday cartridge:

- `pokemon-lilac-ruby-v1.2-sram.gba`

Target cart profile:

- Profile: `2006_TSOP_64BALL_6106`
- Flash chip: `W29GL128SH9B`
- ROM size: `16 MiB`
- Save type: `Unlicensed 1M SRAM (128KiB)`

Verification:

- SRAM build contains `SRAM_V`
- SRAM build does not contain `FLASH1M`

Do not flash the normal `pokemon-lilac-ruby-v1.2.gba` build to this cart. That build keeps the stock Flash save signature for emulator and patch testing.

## Artifacts

| File | SHA256 |
| --- | --- |
| `pokemon-lilac-ruby-v1.2-sram.gba` | `7AEEEB8EA52199162E0F49E86FE4BBC6D6C4C98190F0280167FB1DDE702913A0` |
| `pokemon-lilac-ruby-v1.2-sram.ips` | `C23BFE1D2597BE3853DCEA4BF0082E022316FAA8AEED5A793851F9B65DB735E9` |
| `pokemon-lilac-ruby-v1.2.gba` | `576EF6529CE63C29358E4365D15345B8FCB68FDD03450274166339C773644ED6` |
| `pokemon-lilac-ruby-v1.2.ips` | `8745D4F331B69E0BB64AFFD018707CFE2C5D67CF06D81F2DD8558AF7765E50B7` |

## Smoke Test

1. Boot `pokemon-lilac-ruby-v1.2-sram.gba` on the flashcart.
2. Confirm the title screen shows Pokemon Lilac Version with the Jigglypuff and music-note background.
3. Start a new game and confirm the Birch intro uses the lilac spotlight.
4. Let the intro movie play long enough to confirm the bike rider is May/Lizzy, not Brendan.
5. Let the intro movie reach the battle sequence and confirm Jigglypuff/Igglybuff appear with lilac music-note attack effects.
6. Confirm the player route goes directly to the girl character/name selection.
7. Confirm default names include `Lizzy`, `Liz`, `Lilac`, and `Carlena`.
8. Confirm the starter is Jigglypuff with `Sing` and `Pound`.
9. Save once gameplay allows it, power cycle the cart, and confirm the save reloads.
10. After the Pokedex sequence, confirm the lab gift grants the `Puzzle Piece`.
11. Use the `Puzzle Piece` and confirm it says, `It fits perfectly.`
12. Optional polish check: read the book in May's room and confirm it shows the custom story excerpt.
13. Optional encounter check: Route 101 and Route 102 grass encounters are level 2-3 `Butterfree` and `Beautifly`.
