/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00294F60_0;

extern unk_func_00294F60_0 D_007B8420[];

void func_00294F60(s32 arg0, s32 *arg1) {
    f32 temp0;
    f32 temp2;
    f32 temp1;
    f32 temp3;

    temp0 = arg1[0] / 2147483648.0f;
    temp3 = arg1[3] / 2147483648.0f;
    temp2 = arg1[2] / 2147483648.0f;
    temp1 = arg1[1] / 2147483648.0f;
    D_007B8420[arg0].unk_00 = temp0;
    D_007B8420[arg0].unk_04 = temp1;
    D_007B8420[arg0].unk_08 = temp2;
    D_007B8420[arg0].unk_0C = temp3;
}
