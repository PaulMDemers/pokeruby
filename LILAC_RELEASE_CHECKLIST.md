# Pokemon Lilac Version Release Checklist

## Release

- Version: `v1.2`
- Branch: `pokemon-lilac-baseline`
- Source commit: `fc41dff`
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
| `pokemon-lilac-ruby-v1.2-sram.gba` | `02658C7C3AF68B006325A348AD90F2BB2BCF93D8DDC3D0D131A6C158351BC382` |
| `pokemon-lilac-ruby-v1.2-sram.ips` | `5E03148353E2EF7ED867428667D0AB0884B706CB686110D73D351FA57F8229BA` |
| `pokemon-lilac-ruby-v1.2.gba` | `AD5A92386F57C7480D301F4C8BE44602EA059DE35B552D8A0844BE01AAB1E5DB` |
| `pokemon-lilac-ruby-v1.2.ips` | `B9724C9E30D1562F3A280C7CB27369AEEA9791D68AB7FCA0F5CAF02CE24A8438` |

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
