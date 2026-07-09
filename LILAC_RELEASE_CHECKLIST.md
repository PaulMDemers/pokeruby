# Pokemon Lilac Version Release Checklist

## Release

- Version: `v1.2`
- Branch: `pokemon-lilac-baseline`
- Source commit: `6d7d67c`
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
| `pokemon-lilac-ruby-v1.2-sram.gba` | `DA09690EC6A17074C4F7D142D9E0C57D5AAA89009CF0D44BB85221D95D0264B9` |
| `pokemon-lilac-ruby-v1.2-sram.ips` | `B5C5EFB6E437DC2341177A98AB7F8B3FF9F13BF9C591F25B5EA609E0264A49B4` |
| `pokemon-lilac-ruby-v1.2.gba` | `1984DDFD9424E9FB9E43DA9FCE0CC48414BFCF4D5DF7C526434D1A8E65A3643F` |
| `pokemon-lilac-ruby-v1.2.ips` | `55C25FD16E62D66789A87BF747A34057F058D79BD66560294832DD75D212F299` |

## Smoke Test

1. Boot `pokemon-lilac-ruby-v1.2-sram.gba` on the flashcart.
2. Confirm the title screen shows Pokemon Lilac Version with the Jigglypuff and music-note background.
3. Start a new game and confirm the Birch intro uses the lilac spotlight.
4. Let the intro movie play long enough to confirm the bike rider is May/Lizzy, not Brendan.
5. Confirm the player route goes directly to the girl character/name selection.
6. Confirm default names include `Lizzy`, `Liz`, `Lilac`, and `May`.
7. Confirm the starter is Jigglypuff with `Sing` and `Pound`.
8. Save once gameplay allows it, power cycle the cart, and confirm the save reloads.
9. After the Pokedex sequence, confirm the lab gift grants the `Puzzle Piece`.
10. Use the `Puzzle Piece` and confirm it says, `It fits perfectly.`
11. Optional polish check: read the book in May's room and confirm it shows the custom story excerpt.

