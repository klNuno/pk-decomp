# disks

Put your own dump of the game disc here. Git ignores everything in this folder except this file.

The game is a CD (not a DVD). Expected names, one per region (`make REGION=eu` is the default):

| file | disc | Redump track sha1 |
|---|---|---|
| `pk-eu.bin` | Disney's Donald Duck PK, SLES-50773, v1.01 (EXE date 2002-08-22), 294,271 sectors | `c9b5f638a48d6d3f27feb97cb71a9534d9fe170a` |
| `pk-us.bin` | Disney's PK: Out of the Shadows, SLUS-20478, v1.00 (EXE date 2002-07-16), 284,473 sectors | `8417aa16496e3bb9a6ced2fa957b8a994a93f8a2` |

Each is the raw single track, MODE2/2352, or a link to it. A CHD converts with MAME's
`chdman extractcd -i game.chd -o pk-eu.cue -ob pk-eu.bin`. A 2048-byte ISO also builds (`make DISK=disks/pk-eu.iso extract`), but `make check-disk` checks the raw track against Redump.

Then `make check-disk` checks the image, extracts it into `extract/<region>/` and checks the executable against `config/<region>/<exe>.sha1`.
