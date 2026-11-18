/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[];

void func_002975B0(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8420[0] = arg0 / 2147483648.0f;
    D_007B8420[1] = arg1 / 2147483648.0f;
    D_007B8420[2] = arg2 / 2147483648.0f;
    D_007B8420[3] = 1.0f;
}
