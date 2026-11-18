# What the code shows

Findings from the decompilation itself: how the executable is built and what it says about the game. Each one names its evidence. Open questions live in [mysteries.md](mysteries.md); what players already documented, in [community-knowledge.md](community-knowledge.md). Screenshots, when a finding needs one, are small PNGs in `img/game/`.

## How the game was built

### 1. The PS2 and GameCube versions share one code base, linked in the same order
The GameCube release (USA, Redump 6831) keeps its game code in a separate ELF with its symbol table: 7,757 named functions, 617 source file names (442 C, 173 C++, 2 assembly) and DWARF 1 debug data for 18 of them (memory card saves, video, the HVQM4 player). Matching the two builds by shared strings and call graphs pairs about a thousand PS2 functions with a GameCube function, and paired neighbours stay neighbours in 90 to 100 % of cases: both linkers placed the engine's object files in nearly the same order. That makes the GameCube names usable as evidence for the PS2 code, one function at a time.

### 2. The PS2 executable is mostly engine and C, with a C++ sound engine
About 6,800 of the 7,754 functions are game and engine code; the rest is Sony's SDK 2.3 libraries and the C runtime, recognisable by their 8-byte alignment against 16 for the compiled game code. The engine side is plain C named in the OpenSpace style (module prefix, `fn_` and a type letter: `SAV2_fn_bSaveAllOnDisk`, `WPG_fn_lShortestPath`), while the sound engine is C++ (namespace `usnd`, Metrowerks-mangled names such as `fs_vConstrString__Q24usnd11CProgInstrsFRQ24usnd16CProgExecContext`).

### 3. Two optimisation levels and three compiler builds in one executable
Most of the game was built at full optimisation, but some units were not optimised at all (every argument stored to the stack on entry and read back). The compiler build changes too: most code matches CodeWarrior PS2 3.0.3 (July 2002), but some optimised functions only match the November 2001 build, which fills branch delay slots that 3.0.3 leaves empty, and some unoptimised ones only match the January 2002 build, which moves register arguments twice. Each object file was apparently rebuilt only when its source changed, so older objects kept their older code. Profiles in `config/mwcc_profiles.txt`.

### 4. Short loops are padded, and the padding dates each object file
Almost no loop in the game code is shorter than 7 instructions: short loops carry extra `nop`s before their closing branch. The R5900 has a known erratum with loops of six instructions or fewer (GNU as works around it with `-mfix-r5900`), and CodeWarrior pads them itself: the 3.0 and 3.0.1 builds pad a short loop to 8 instructions, from its first instruction to its delay slot, and 3.0.3 to 7. Of the 124 padded loops in the game code, 88 have 8 instructions and 36 have 7, interleaved across the whole executable: about two thirds of the units with a short loop were compiled with a build older than 3.0.3 (July 2002).

### 5. Some PS2 debug messages name the function that prints them
A dozen messages left in the PS2 executable start with the name of their own function, and those names exist in the GameCube symbol table: the strings were written by hand, not by a macro, and survived into the release build.
