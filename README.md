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
The compiler, Metrowerks CodeWarrior for PS2 (MW MIPS C Compiler 2.4.1.01), is commercial and not downloaded: put your own `mwccps2.exe` in `tools/mwcc/2.4.1.01/`.

## Docs
- [What the community already knows](docs/community-knowledge.md)
- [Open questions](docs/mysteries.md)
