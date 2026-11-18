#include "common.h"

typedef struct unk_func_0015ED90_0 {
    u8 pad_00[2];
    u16 unk_02;
    u8 pad_04[4];
    f32 unk_08;
    f32 unk_0C;
} unk_func_0015ED90_0;

typedef struct unk_func_0015ED90_1 {
    u8 pad_00[2];
    s16 unk_02;
    s32 unk_04;
    unk_func_0015ED90_0 *unk_08;
    void *unk_0C;
} unk_func_0015ED90_1;

void *memcpy(void *, void *, s32);
s16 func_0015F4D0(s16, unk_func_0015ED90_0 *, s32);

s16 func_0015ED90(unk_func_0015ED90_1 *arg0) {
    unk_func_0015ED90_0 *temp_s0 = arg0->unk_08;
    s32 temp_s1 = arg0->unk_04;
    s16 temp_s2 = arg0->unk_02;
    s16 ret;

    memcpy(arg0->unk_0C, temp_s0, 0x60);
    ret = func_0015F4D0(temp_s2, temp_s0, temp_s1);
    temp_s0->unk_02 = 0;
    if (temp_s0->unk_08 < -0.1f) {
        temp_s0->unk_02 |= 1;
    } else if (temp_s0->unk_08 > 0.1f) {
        temp_s0->unk_02 |= 2;
    }
    if (temp_s0->unk_0C > 0.1f) {
        temp_s0->unk_02 |= 8;
    } else if (temp_s0->unk_0C < -0.1f) {
        temp_s0->unk_02 |= 4;
    }
    return ret;
}
