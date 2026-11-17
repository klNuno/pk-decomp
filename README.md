# pk-decomp

A matching decompilation of Disney's PK: Out of the Shadows (PlayStation 2, Ubi Soft Casablanca, 2002), known in Europe as Disney's Donald Duck PK and in Italy as Disney Paperino: Chi è PK?. The goal is C and C++ that rebuild the retail executable byte for byte, then readable names and findings about the game.

No game data is in this repository: build it from your own disc (`disks/README.md`).

## Status
The EU executable (SLES_507.73) rebuilds byte for byte from a mix of C and assembly. Each function written in C is compiled with CodeWarrior PS2 3.0.3 and linked at its retail address; `make check` compares the whole file with the retail one.

![Map of the executable: functions in C against assembly](docs/progress/codemap.svg)

The map is regenerated after each green `make check` (`tools/progress.py --map docs/progress`); the numbers are in [progress.json](docs/progress/progress.json). Library code (Sony SDK, C runtime) is shown apart and stays as shipped for now.

## Build
```sh
tools/setup.sh                          # pinned toolchain into tools/ and .venv/
git config core.hooksPath tools/hooks   # once per clone
make check-disk                         # disc against Redump, extract, executable sha1
make split                              # splat, alone
make check                              # rebuild and compare
```
The compiler, Metrowerks CodeWarrior for PS2 ("MW MIPS C Compiler (2.4.1.01)" in the executable, written by both the 2.4 and the 3.0.x builds), is commercial. `tools/setup.sh` fetches decomp.me's compiler kits into `tools/mwcc/<kit>/` for local use; they are never committed. Compiler flags live in `config/mwcc_profiles.txt` (kit `mwcps2-3.0.3-020716`); a source picks its profile with a `/* profile: NAME */` first line.

## Matching a function
```sh
.venv/bin/python -I tools/fmatch.py asm func_0029B920        # its assembly
.venv/bin/python -I tools/fmatch.py m2c func_0029B920        # a first draft
.venv/bin/python -I tools/fmatch.py diff func_0029B920 my.c  # compile, link at its address, compare
.venv/bin/python -I tools/integrate.py my/func_0029B920.c    # into src/, then make check
```
`tools/autopass.py` tries m2c drafts as they are on a list of functions and keeps the ones that match. `tools/names.py` gives names with their evidence (`config/eu/symbol_addrs.txt`).

## Docs
- [What the community already knows](docs/community-knowledge.md)
- [Open questions](docs/mysteries.md)
- [What the code shows](docs/discoveries.md)
