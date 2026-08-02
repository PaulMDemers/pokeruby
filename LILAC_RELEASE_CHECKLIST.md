# Pokemon Lilac Version Release Checklist

## Release

- Version: `v1.2`
- Branch: `pokemon-lilac-baseline`
- Source commit: `fc8820a`
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
| `pokemon-lilac-ruby-v1.2-sram.gba` | `3D465D1864568E6026ACB0676D140E370EC40338FE0997BAFAF96834DA5609BC` |
| `pokemon-lilac-ruby-v1.2-sram.ips` | `C82ED0215E91C941B878D7666EE2B3D310D0899B8E01C0ABA42E6AB4F9661262` |
| `pokemon-lilac-ruby-v1.2.gba` | `079DA64910EAC9BEEFAF20AFECD696D54164170FB55E8DE43D40E38ADCAA8498` |
| `pokemon-lilac-ruby-v1.2.ips` | `019176B651CA44720D776B3682332141A6029C023FEDAC3FB97105AD1244D632` |

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
18. Optional polish check: interact with the Jigglypuff doll in May's room and confirm it looks proud of the room.
19. Optional polish check: talk to Mom after the TV sequence and confirm she mentions whether Lilacs can handle the soil.
20. Optional polish check: confirm Paul's mom says he has been working on something all week.
21. Optional polish check: confirm Birch's Puzzle Piece line says some things only make sense when they find where they belong.
22. Optional route flavor check: Route 101 and Route 103 mention butterflies, and their grass encounters are level 2-3 `Butterfree` and `Beautifly`.
