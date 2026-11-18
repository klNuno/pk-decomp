#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0x20];
    s32 unk_70;
} unk_func_0016BE80_0;

typedef struct {
    u8 pad_00[0x190];
    unk_func_0016BE80_0 *unk_190;
} unk_func_0016BE80_1;

void func_00166390();
extern unk_func_0016BE80_1 *D_0035FB04;

s32 func_0016BE80(unk_func_0016BE80_0 *arg0) {
    s32 v;

    v = 0;
    if (arg0 != NULL) {
        if (arg0->unk_70 > 1) {
            D_0035FB04->unk_190 = arg0;
            func_00166390();
        }
        v = arg0->unk_4C;
    }
    return v;
}
