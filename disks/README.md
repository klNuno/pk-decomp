# Disc images

Place a raw MODE2/2352 track from your own game disc in this directory, or symlink it under the expected filename. Git ignores the disc dumps.

| Filename | Disc | Redump track SHA-1 |
|---|---|---|
| `pk-eu.bin` | Disney's Donald Duck PK, SLES-50773, v1.01 (EXE date 2002-08-22), 294,271 sectors | `c9b5f638a48d6d3f27feb97cb71a9534d9fe170a` |
| `pk-us.bin` | Disney's PK: Out of the Shadows, SLUS-20478, v1.00 (EXE date 2002-07-16), 284,473 sectors | `8417aa16496e3bb9a6ced2fa957b8a994a93f8a2` |

The matching build targets the European disc. For the US disc, `make REGION=us check-disk` verifies the raw track and extracts it. [Build and check](../README.md#build-and-check)

To convert a CHD, run `chdman extractcd -i game.chd -o pk-eu.cue -ob pk-eu.bin` in this directory. To extract a 2048-byte-sector ISO, run `make DISK=disks/pk-eu.iso extract` from the repository root. Use the raw track for `make check-disk`, which checks its Redump SHA-1 before extraction. [Makefile](../Makefile)
