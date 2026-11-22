# Disc images

Place a raw MODE2/2352 track from your own disc here, or symlink it under the filename in the table. Git ignores the disc dumps.

| Filename | Disc | Redump track SHA-1 |
| --- | --- | --- |
| `pk-eu.bin` | Disney's Donald Duck PK, SLES-50773, v1.01 (EXE date 2002-08-22), 294,271 sectors | `c9b5f638a48d6d3f27feb97cb71a9534d9fe170a` |
| `pk-us.bin` | Disney's PK: Out of the Shadows, SLUS-20478, v1.00 (EXE date 2002-07-16), 284,473 sectors | `8417aa16496e3bb9a6ced2fa957b8a994a93f8a2` |

The matching build targets the European disc. `make check-disk` checks its Redump SHA-1 before extraction. For the US disc, use `make REGION=us check-disk` to verify the raw track and extract it. [Building](../README.md#building)

To convert a CHD, run `chdman extractcd -i game.chd -o pk-eu.cue -ob pk-eu.bin` in this directory. For a 2048-byte-sector ISO, run `make DISK=disks/pk-eu.iso extract` from the repository root. [Makefile](../Makefile)
