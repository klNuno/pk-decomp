/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002956D0_0;

extern unk_func_002956D0_0 D_007B8420[];

void func_002956D0(s32 arg0, s8 *arg1) {
    f32 temp0;
    f32 temp1;
    f32 temp2;

    temp0 = arg1[0] / 127.0f;
    temp2 = arg1[2] / 127.0f;
    temp1 = arg1[1] / 127.0f;
    D_007B8420[arg0].unk_00 = temp0;
    D_007B8420[arg0].unk_04 = temp1;
    D_007B8420[arg0].unk_08 = temp2;
    D_007B8420[arg0].unk_0C = 1.0f;
}
