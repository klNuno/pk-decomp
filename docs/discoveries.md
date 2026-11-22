# Discoveries

What reading the code and rebuilding the executable taught us about Disney's PK: Out of the Shadows. Each finding starts with what it tells us about the game. The details give the functions, counts and checks behind it. [Open questions](mysteries.md) · [Community findings](community-knowledge.md)

Status marks:

- 📖 Read in the code. Evidence comes from the executable, its assembly or the GameCube symbol table.
- 🔧 Measured on the build. Evidence comes from compiling and comparing code with the retail executable.

The findings have no in-game checks. 🧩 Known in part means an earlier source documented part of the finding. [Community findings](community-knowledge.md)

## The findings at a glance

Versions and engine

- The GameCube release kept the symbols that help name functions in the PS2 executable. [The PS2 and GameCube versions share a code base](#-the-ps2-and-gamecube-versions-share-a-code-base)
- The game's engine is mainly C, and its sound engine is C++. [The engine is mostly C, with a C++ sound engine](#-the-engine-is-mostly-c-with-a-c-sound-engine)

Compiler and build

- Retail code matches three builds of CodeWarrior PS2. [Three compiler builds in one executable](#-three-compiler-builds-in-one-executable)
- The compiler adds instructions to short loops to work around a PS2 processor bug. [Short loops are padded](#-short-loops-are-padded)
- A speed setting changed the layout of unoptimised code. [Unoptimised code was still built for speed](#-unoptimised-code-was-still-built-for-speed)
- Some sound engine code matches only with C++ exceptions switched off. [Some C++ objects were built without exception support](#-some-c-objects-were-built-without-exception-support)

Debug text

- A dozen debug messages preserve the names of the functions that print them. [Debug messages name the functions that print them](#-debug-messages-name-the-functions-that-print-them)

## Versions and engine

### 🧩 The PS2 and GameCube versions share a code base

The two console releases share much of their engine. The names left in the GameCube release help us identify the same functions in the PS2 code.

Status: 📖 Read in the code. 🧩 Known in part. Raymap already lists a GameCube preset for Ubi Soft's OpenSpace engine. [Community findings](community-knowledge.md#builds-and-versions)

<details><summary>Technical details</summary>

The US GameCube release (Redump 6831) keeps its game code in a separate ELF with a symbol table. It contains 7,757 named functions and 617 source file names (442 C, 173 C++, 2 assembly). Eighteen of those files also have DWARF 1 debug data, including code for memory card saves, video and the HVQM4 player.

The cross-reference run produced 1,154 proposals, including 793 low-confidence ones. Shared strings and call graphs directly produced 737 proposals (73 from strings and 664 from call graphs). The other passes used self-naming messages, function tables, constants and link order.

For each proposed match, we took the nearest other proposal within `0x1000` bytes on PS2 and checked whether their GameCube addresses were within `0x2000` bytes. They were in 55 of 64 cases found from shared strings and 596 of 649 found from call graphs. That proximity supports a similar link order. Each name still needs evidence connecting its PS2 function to its GameCube counterpart. [Cross-reference tool](../tools/gcxref.py) · [European symbol list](../config/eu/symbol_addrs.txt)

</details>

### 📖 The engine is mostly C, with a C++ sound engine

The game and its engine account for most of the functions in the executable. The rest belong to Sony's libraries and the C runtime.

Status: 📖 Read in the code.

<details><summary>Technical details</summary>

The split finds 7,762 functions. Of those, 6,550 are counted as game and engine code and 1,212 fall in the estimated Sony SDK 2.3 and C runtime ranges. The ranges use 8-byte alignment (game code typically uses 16-byte alignment), Sony SDK tags and syscall stubs. Three stubs in those ranges are reconstructed in C, at `0x31A960`, `0x31A968` and `0x31A970`. [Progress counts](progress/progress.json) · [Counting tool](../tools/progress.py)

The engine uses OpenSpace's C naming style. `SAV2_fn_bSaveAllOnDisk` and `WPG_fn_lShortestPath` each use a module prefix, `fn_` and a type letter. The C++ sound engine uses the `usnd` namespace and Metrowerks-mangled names such as `fs_vConstrString__Q24usnd11CProgInstrsFRQ24usnd16CProgExecContext`. [European symbol list](../config/eu/symbol_addrs.txt)

</details>

## Compiler and build

### 🔧 Three compiler builds in one executable

The matching sources mostly use full optimisation, and some compile without it. Some matches require older builds of the same compiler.

Status: 🔧 Measured on the build.

<details><summary>Technical details</summary>

Most of the reconstructed code matches with CodeWarrior PS2 3.0.3 (July 2002). At `0x2BC5F0`, only 3.0.3 matches the inlined float-to-integer conversion (`trunc.w.s`). Some optimised functions match only the November 2001 build (3.0), which fills branch delay slots that 3.0.3 leaves empty.

Unoptimised code stores every argument to the stack on entry and reads it back. Some of these functions match only the January 2002 build (3.0.1), which moves register arguments twice. The mix suggests each object file was rebuilt only when its source changed, leaving older compiler output in unchanged objects. [Calibration function](../src/text_2a1120/func_002BC5F0.c) · [Compiler profiles](../config/mwcc_profiles.txt)

</details>

### 🔧 Short loops are padded

The PS2 processor has a bug involving very short loops. The compiler adds instructions to avoid it. Older and newer compiler builds pad those loops to different lengths.

Status: 🔧 Measured on the build and counted in the retail code.

<details><summary>Technical details</summary>

The R5900 erratum affects loops of six instructions or fewer. GNU `as` works around it with `-mfix-r5900`. CodeWarrior adds `nop`s before the closing branch. Versions 3.0 and 3.0.1 pad a short loop to eight instructions, measured from the first instruction through the delay slot. Version 3.0.3 pads it to seven.

A scan of the retail assembly looked for backward branches in seven- or eight-instruction loops with a `nop` just before the branch and another in the delay slot. It found 121 eight-instruction candidates and 37 seven-instruction candidates. An earlier tally listed 124 padded loops (88 at eight instructions and 36 at seven). The filter used for that tally is undocumented. [Compiler profiles](../config/mwcc_profiles.txt)

</details>

### 🔧 Unoptimised code was still built for speed

The speed setting still mattered when optimisation was off. It made the compiler align code inside loops.

Status: 🔧 Measured on the build and counted in the retail code.

<details><summary>Technical details</summary>

With the "optimise for speed" switch (`,p`), CodeWarrior inserts a single `nop` at a label inside a loop statement when the label falls at an address that is 4 modulo 8. This aligns the next instruction to eight bytes. The same switch aligns loop labels in optimised code.

The retail scan classified a function as likely unoptimised if it stored an argument register to the stack in its first 14 instructions. Between `0x129B40` and `0x319F00`, 2,087 functions met that test and their branch targets included 1,084 label `nop`s at addresses 4 modulo 8. An earlier tally recorded one of the first 443 unoptimised matches as built without the speed switch. [Compiler profiles](../config/mwcc_profiles.txt)

</details>

### 🔧 Some C++ objects were built without exception support

Parts of the sound engine were compiled with C++ exceptions switched off. The executable also shows that at least one class hierarchy uses virtual inheritance.

Status: 🔧 Measured on the build for exception settings. 📖 Read in the code for virtual inheritance.

<details><summary>Technical details</summary>

Most C++ functions keep a virtual call as a call (`jalr`) followed by a return, which is what CodeWarrior emits with exception handling on. A few use a tail jump (`jr`) for the same call. These compile byte for byte only with `-Cpp_exceptions off`, so the executable mixes C++ objects with and without exception tables. One example is `func_002EC950` at `0x2EC950`. [Matched function](../src/text_2e1730/func_002EC950.cpp) · [Compiler profiles](../config/mwcc_profiles.txt)

The executable also contains virtual-base thunks. These load an offset from the object, adjust `this` and jump, showing that at least one class hierarchy uses virtual inheritance.

</details>

## Debug text

### 🧩 Debug messages name the functions that print them

Some debug messages survived into the PS2 release with the names programmers gave the functions that print them.

Status: 📖 Read in the code. 🧩 Known in part. The Cutting Room Floor already flagged development text in the PS2 release. [Community findings](community-knowledge.md#builds-and-versions)

<details><summary>Technical details</summary>

The PS2 symbol list records 12 functions named from their own debug messages. The names also occur in the GameCube symbol table. One PS2 message starts with `fn_vSetUnusedTextures`, the function at `0x16FF60` on PS2 and `0x8011D970` on GameCube. [Matched function](../src/text_160390/fn_vSetUnusedTextures.c) · [European symbol list](../config/eu/symbol_addrs.txt)

Finding the other development text flagged by The Cutting Room Floor remains [an open question](mysteries.md#question-2).

</details>
