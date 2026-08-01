# Pokemon Lilac Version Release Checklist

## Release

- Version: `v1.2`
- Branch: `pokemon-lilac-baseline`
- Source commit: `4d3c734`
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
| `pokemon-lilac-ruby-v1.2-sram.gba` | `1D52AF507A6C87C191FC6262F33748A9C5F90EA8D13F2FA8169BF2630B25B1F4` |
| `pokemon-lilac-ruby-v1.2-sram.ips` | `DAB32D165023E320D1C650FC7F949590597BE1D2249F0F23DB6974B9946E4E0F` |
| `pokemon-lilac-ruby-v1.2.gba` | `57330C3DE42E92C96CA6AAAF1E848E17820DB76F522FFB0132D44ECAD9ACF516` |
| `pokemon-lilac-ruby-v1.2.ips` | `AB211FAECDFE24910F02115EDF9AC8BF6EF62A0A677E3E55C8198BFC77EE1EEE` |

## Smoke Test

1. Boot `pokemon-lilac-ruby-v1.2-sram.gba` on the flashcart.
2. Confirm the title screen shows Pokemon Lilac Version with the Jigglypuff and music-note background.
3. Start a new game and confirm the Birch intro uses the lilac spotlight.
4. Let the intro movie play long enough to confirm the bike rider is May/Lizzy, not Brendan.
5. Let the intro movie reach the battle sequence and confirm Jigglypuff/Igglybuff appear with lilac music-note attack effects.
6. Confirm the player route goes directly to the girl character/name selection.
7. Confirm default names include `Lizzy`, `Liz`, `Lilac`, and `Carlena`.
8. Confirm the starter is Jigglypuff with `Sing`, `Pound`, and a held `Oran Berry`.
9. Save once gameplay allows it, power cycle the cart, and confirm the save reloads.
10. After the Pokedex sequence, confirm the lab gift grants the `Puzzle Piece`.
11. Use the `Puzzle Piece` and confirm it says, `It fits perfectly.`
12. Optional polish check: read the book in May's room and confirm it shows the custom story excerpt.
13. Optional polish check: confirm the player starts with one `Potion`.
14. Optional polish check: confirm the GameCube says it is loaded with `Super Mario Sunshine`.
15. Optional polish check: confirm Brendan-facing text and battles now call him `Paul`.
16. Optional polish check: read Paul's notebook in his room and confirm it mentions comic drafts with a red-haired, purple-outfit hero who looks like Liz.
17. Optional encounter check: Route 101 and Route 103 grass encounters are level 2-3 `Butterfree` and `Beautifly`.
