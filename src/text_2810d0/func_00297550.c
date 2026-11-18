/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00297550_0;

extern unk_func_00297550_0 D_007B8420;

void func_00297550(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp0;
    f32 temp1;
    f32 temp2;

    temp0 = arg0 / 32767.0f;
    temp1 = arg1 / 32767.0f;
    temp2 = arg2 / 32767.0f;
    D_007B8420.unk_00 = temp0;
    D_007B8420.unk_0C = 1.0f;
    D_007B8420.unk_04 = temp1;
    D_007B8420.unk_08 = temp2;
}
