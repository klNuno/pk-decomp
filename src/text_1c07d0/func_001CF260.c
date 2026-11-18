/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} unk_func_001CF260_0;

extern s32 D_00360030;
extern unk_func_001CF260_0 D_005E4380[];

unk_func_001CF260_0 *func_001CF260(s16 *arg0) {
    s32 bit;
    s32 i;

    for (bit = 1, i = 0; (bit & D_00360030) && i < 0x20; bit << 1, i++) {
    }
    if (i < 0x20) {
        D_00360030 |= bit;
        *arg0 = i;
        return &D_005E4380[i];
    }
    return NULL;
}
