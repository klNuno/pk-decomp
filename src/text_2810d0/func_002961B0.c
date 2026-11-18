#include "common.h"

typedef struct unk_func_002961B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002961B0_0;

extern unk_func_002961B0_0 D_007B8420[];

void func_002961B0(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    D_007B8420[arg0].unk_00 = arg1;
    D_007B8420[arg0].unk_04 = arg2;
    D_007B8420[arg0].unk_08 = arg3;
    D_007B8420[arg0].unk_0C = 1.0f;
}
