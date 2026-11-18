/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8450[];

void func_00294A30(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8450[3] = 0.0f;
    D_007B8450[0] = arg0 / 32767.0f;
    D_007B8450[1] = arg1 / 32767.0f;
    D_007B8450[2] = arg2 / 32767.0f;
}
