# pk-decomp

A matching decompilation of Disney's PK: Out of the Shadows (PlayStation 2, Ubi Soft Casablanca, 2002), known in Europe as Disney's Donald Duck PK and in Italy as Disney Paperino: Chi è PK?. The goal is C and C++ that rebuild the retail executable byte for byte, then readable names and findings about the game.

No game data is in this repository: build it from your own disc (`disks/README.md`).

## Status
Phase 0: tooling and research. No executable split yet.

## Build
```sh
tools/setup.sh                          # pinned toolchain into tools/ and .venv/
git config core.hooksPath tools/hooks   # once per clone
make check-disk                         # disc against Redump, extract, executable sha1
make split                              # splat, alone
make check                              # rebuild and compare
```
The compiler, Metrowerks CodeWarrior for PS2 ("MW MIPS C Compiler (2.4.1.01)" in the executable, written by both the 2.4 and the 3.0.x builds), is commercial. `tools/setup.sh` fetches decomp.me's compiler kits into `tools/mwcc/<kit>/` for local use; they are never committed. The Makefile uses `mwcps2-3.0.1-020123` unless `MWCC_VER` says otherwise.

## Docs
- [What the community already knows](docs/community-knowledge.md)
- [Open questions](docs/mysteries.md)
