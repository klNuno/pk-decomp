#include "common.h"

typedef struct unk_func_00319CA0_1 {
    s32 unk_00;
    u8 pad_04[0x20];
} unk_func_00319CA0_1;

typedef struct unk_func_00319CA0_0 {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[8];
    unk_func_00319CA0_1 *unk_10;
} unk_func_00319CA0_0;

u32 func_00319CA0(unk_func_00319CA0_0 *arg0, s32 arg1) {
    u32 i;
    u32 n;
    s32 v;

    for (i = 0; i < arg0->unk_04; i++) {
        v = arg0->unk_10[i].unk_00;
        if (arg1 == v) {
            break;
        }
        if (v == 0x8235) {
            break;
        }
    }
    return i;
}
