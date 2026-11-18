#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_003134C0_0;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[4];
    unk_func_003134C0_0 *unk_10;
    unk_func_003134C0_0 *unk_14;
} unk_func_003134C0_1;

void func_003134C0(unk_func_003134C0_1 *arg0, s32 arg1, s32 arg2, unk_func_003134C0_0 *arg3) {
    s32 idx;
    u32 i;

    for (i = 0, idx = arg1 - arg2; i < arg0->unk_08 - 1; idx -= arg2, i++) {
        arg3[idx].unk_00 += arg0->unk_10[i].unk_00;
        arg3[idx].unk_04 += arg0->unk_10[i].unk_04;
        arg3[idx].unk_08 += arg0->unk_10[i].unk_08;
        arg3[idx].unk_00 -= arg0->unk_14[i].unk_00;
        arg3[idx].unk_04 -= arg0->unk_14[i].unk_04;
        arg3[idx].unk_08 -= arg0->unk_14[i].unk_08;
    }
}
