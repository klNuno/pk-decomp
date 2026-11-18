#include "common.h"

extern f32 D_007B8460[][4];

void func_0028D8B0(s32 arg0, s32 *arg1) {
    f32 temp0, temp1, temp2;

    temp2 = (f32)arg1[2] / 2147483648.0f;
    temp1 = (f32)arg1[1] / 2147483648.0f;
    temp0 = (f32)arg1[0] / 2147483648.0f;
    D_007B8460[arg0][0] = temp0;
    D_007B8460[arg0][1] = temp1;
    D_007B8460[arg0][2] = temp2;
}
