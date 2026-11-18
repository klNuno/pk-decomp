#include "common.h"

typedef struct unk_func_00294EC0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00294EC0_0;

extern unk_func_00294EC0_0 D_007B8420[];

void func_00294EC0(s32 arg0, s16 *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f3 = arg1[3] / 32767.0f;
    temp_f2 = arg1[2] / 32767.0f;
    temp_f1 = arg1[1] / 32767.0f;
    temp_f0 = arg1[0] / 32767.0f;

    D_007B8420[arg0].unk_00 = temp_f0;
    D_007B8420[arg0].unk_04 = temp_f1;
    D_007B8420[arg0].unk_08 = temp_f2;
    D_007B8420[arg0].unk_0C = temp_f3;
}
