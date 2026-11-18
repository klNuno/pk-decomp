/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[];

void func_00296FA0(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_007B8420[0] = arg0 / 255.0f;
    D_007B8420[1] = arg1 / 255.0f;
    D_007B8420[2] = arg2 / 255.0f;
    D_007B8420[3] = arg3 / 255.0f;
}
