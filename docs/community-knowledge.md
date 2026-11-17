# What the community already knows

What players, wikis, preservation sites and earlier projects said about Disney's PK: Out of the Shadows (PS2, Ubi Soft Casablanca, 2002; EU "Disney's Donald Duck PK", IT "Disney Paperino: Chi è PK?") before this project read the code for itself, gathered on 2026-11-17. Status: "data" means read in the disc files or the executable by an earlier project or measured by this one; "observed" means players or the press report seeing it in play; "rumour" means told without proof; "official" means the developer or publisher said it. A claim goes in only when its source could be opened. The open questions drawn from the gaps are in [mysteries.md](mysteries.md).

## Builds and versions

| Topic | Known | Status | Source |
|---|---|---|---|
| Build dates | NTSC executable built 2002-07-16, version 1.00; PAL 2002-08-22, version 1.01 (version from SYSTEM.CNF) | data | [TCRF, archived 2026-09-23](https://web.archive.org/web/20260923002328/https://tcrf.net/Disney%27s_PK:_Out_of_the_Shadows_(PlayStation_2)); Redump [26896](http://redump.org/disc/26896/) and [4515](http://redump.org/disc/4515/) give the same EXE dates |
| Release order | Europe got it first (2002-10-04) though its build is about a month later than the US one (US release 2002-11-01) | official | [TCRF](https://web.archive.org/web/20260923002328/https://tcrf.net/Disney%27s_PK:_Out_of_the_Shadows_(PlayStation_2)) |
| PAL death sounds | The PAL build adds death sounds for enemies, as the North American and European GameCube versions have | observed | [TCRF](https://web.archive.org/web/20260923002328/https://tcrf.net/Disney%27s_PK:_Out_of_the_Shadows_(PlayStation_2)) |
| Hidden dev text | TCRF tags the game "hidden development-related text" but its page lists none beyond the build date; the regional section is marked "needs investigation" | data | [TCRF](https://web.archive.org/web/20260923002328/https://tcrf.net/Disney%27s_PK:_Out_of_the_Shadows_(PlayStation_2)) |
| Discs | Both retail discs are CDs, one MODE2 track: US SLUS-20478 (284,473 sectors, voices EN FR DE IT), EU SLES-50773 (294,271 sectors, voices EN FR DE IT ES, Italian title on the same disc) | data | Redump [26896](http://redump.org/disc/26896/), [4515](http://redump.org/disc/4515/) |
| Sneak Peak prototype | An NTSC-U "Sneak Peak" CD-R built 2002-05-02 16:16:55, released by Hidden Palace in 2021 (Project Deluge). It boots into a level select (MAP1 leads to the main menu); R1+R2 opens a menu in play; L2+R2 opens a graphics test menu, closed with Select | observed | [Hidden Palace, archived 2024-05-12](https://web.archive.org/web/20240512082002/https://hiddenpalace.org/PK:_Out_of_the_Shadows_(May_2,_2002_prototype)), [Internet Archive](https://archive.org/details/PKOutoftheShadowsMay22002prototype) |
| Prototype boot name | The prototype boots `SLES_502.65`, VER 1.01, though Hidden Palace calls it NTSC-U | data | this project, from the prototype's SYSTEM.CNF |
| Engine | The GameCube version loads in Raymap, the viewer for Ubi Soft's OpenSpace engine (Rayman 2, Donald Duck: Goin' Quackers), as "Donald Duck: PK (GC)" | data | [raymap Settings.cs](https://github.com/byvar/raymap/blob/master/Assets/Scripts/OpenSpace/General/Settings.cs) |

## Game content

| Topic | Known | Status | Source |
|---|---|---|---|
| Scientists | Six captured scientists per level (none in boss fights or on the Evronian Mothership), each lost if the timer runs out; 40 rescued open the final Mothership levels | observed | [Wikipedia](https://en.wikipedia.org/wiki/PK:_Out_of_the_Shadows) |
| Cheat mode | While being shot, press X, Square, Up, Down, Left, Right, Left, Right, X, Square; after dying PK resumes with unlimited health and a super gun | rumour | [Neoseeker, 2006, archived 2018](https://web.archive.org/web/20181125001920/http://www.neoseeker.com/disney-pk-shadows/cheats/ps2/) |
| Music storage | PS2 music is ADPCM loops in DATA.HST; the `M_*.HXD` files hold the play orders, unused orders included (the intro is one of them) | data | [RaymanPC forum, DeeDyne, 2017-06-16](https://web.archive.org/web/20240322204454/https://raymanpc.com/forum/viewtopic.php?t=25384) |
| Unused music | The PS2 data holds loops and parts the GameCube files lack ("bonus tracks/unused/other added parts"); the Area 52 track is the one discussed most | observed | [RaymanPC forum, A1020nt and DeeDyne, 2017](https://web.archive.org/web/20240322204454/https://raymanpc.com/forum/viewtopic.php?t=25384) |
