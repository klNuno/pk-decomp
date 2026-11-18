/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[][4];

void func_00295B90(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_007B8420[arg0][0] = (f32)arg1 / 2147483648.0f;
    D_007B8420[arg0][1] = (f32)arg2 / 2147483648.0f;
    D_007B8420[arg0][2] = (f32)arg3 / 2147483648.0f;
    D_007B8420[arg0][3] = (f32)arg4 / 2147483648.0f;
}
