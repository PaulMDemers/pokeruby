# Pokemon Lilac Version Release Checklist

## Release

- Version: `v1.2`
- Branch: `pokemon-lilac-baseline`
- Source commit: `5396c82`
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
| `pokemon-lilac-ruby-v1.2-sram.gba` | `C8436CEB26963117413DA3A08911954304B0D41F3BF23ED1219F849390B377D5` |
| `pokemon-lilac-ruby-v1.2-sram.ips` | `9A4DAA09993EAC5CCE84DAF38FDF662CEB02614BDBE844636A3E54FCEC46E5AA` |
| `pokemon-lilac-ruby-v1.2.gba` | `3E8C3BB218D3E6054B9F1BE6FA2207BE79258528DB215652713523A11844561E` |
| `pokemon-lilac-ruby-v1.2.ips` | `7B7E062C130727C64911AD56E198865C48C3A79930EB596311C8F03C7A523AF6` |

## Smoke Test

1. Boot `pokemon-lilac-ruby-v1.2-sram.gba` on the flashcart.
2. Confirm the title screen shows Pokemon Lilac Version with the Jigglypuff and music-note background.
3. Start a new game and confirm the Birch intro uses the lilac spotlight.
4. Let the intro movie play long enough to confirm the bike rider is May/Lizzy, not Brendan.
5. Let the intro movie reach the battle sequence and confirm Jigglypuff/Igglybuff appear with lilac music-note attack effects.
6. Confirm the player route goes directly to the girl character/name selection.
7. Confirm default names include `Lizzy`, `Liz`, `Lilac`, and `Carlena`.
8. Confirm the starter is Jigglypuff with `Sing`, `Pound`, and a held `Oran Berry`.
9. Confirm the opening TV sequence is about Mom being excited by a gardening show with lilacs.
10. Save once gameplay allows it, power cycle the cart, and confirm the save reloads.
11. After the Pokedex sequence, confirm the lab gift grants the `Puzzle Piece`.
12. Use the `Puzzle Piece` and confirm it says, `It fits perfectly.`
13. Optional polish check: read the book in May's room and confirm it shows the custom story excerpt.
14. Optional polish check: confirm the player starts with one `Potion`.
15. Optional polish check: confirm the GameCube says it is loaded with `Super Mario Sunshine`.
16. Optional polish check: confirm Brendan-facing text and battles now call him `Paul`.
17. Optional polish check: read Paul's notebook in his room and confirm it mentions comic drafts with a red-haired, purple-outfit hero who looks like Liz, maybe by coincidence.
18. Optional encounter check: Route 101 and Route 103 grass encounters are level 2-3 `Butterfree` and `Beautifly`.
