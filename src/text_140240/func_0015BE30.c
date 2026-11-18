#include "common.h"

typedef struct {
    s16 unk_00;
    u8 pad_02[0x2];
} unk_func_0015BE30_0;

extern unk_func_0015BE30_0 D_0035F3D4[];
extern unk_func_0015BE30_0 D_0035F3D6[];

s16 func_0015BE30(s16 arg0) {
    s32 i;

    for (i = 0; D_0035F3D4[i].unk_00 != -1 && arg0 != D_0035F3D4[i].unk_00; i++) {
    }
    if (D_0035F3D4[i].unk_00 == -1) {
        return arg0;
    }
    return D_0035F3D6[i].unk_00;
}
