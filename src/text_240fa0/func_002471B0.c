/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x28];
} unk_func_002471B0_0;

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C;
    u8 pad_1D[0x17];
    unk_func_002471B0_0 unk_34[1];
} unk_func_002471B0_1;

void func_0024B960(unk_func_002471B0_1 *, s32, f32, u8, u8 *);
void *memcpy(void *, const void *, u32);
extern u8 D_00617320[];

void func_002471B0(unk_func_002471B0_1 *arg0, u8 arg1, u8 arg2) {
    s32 n;
    u8 *cnt;
    s32 i;

    n = arg2 - arg1 + 1;
    if (arg1 > arg2) {
        return;
    }
    cnt = &arg0->unk_1C;
    if (*cnt <= 0) {
        return;
    }
    *cnt -= (u8)n;
    for (i = arg1; i <= arg2; i++) {
        func_0024B960(arg0, 0x67, 0.0f, i, D_00617320);
    }
    if (arg1 == *cnt) {
        return;
    }
    for (i = arg1; i < *cnt; i++) {
        memcpy((void *)&arg0->unk_34[i], (void *)&arg0->unk_34[n + i], 0x34);
    }
    arg0->unk_34[*cnt].unk_08 = arg0->unk_34[*cnt].unk_04 = arg0->unk_34[*cnt].unk_00 = 0.0f;
}
