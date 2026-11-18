/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[][4];

void func_002960B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8420[arg0][0] = (f32)arg1 / 32767.0f;
    D_007B8420[arg0][1] = (f32)arg2 / 32767.0f;
    D_007B8420[arg0][2] = (f32)arg3 / 32767.0f;
    D_007B8420[arg0][3] = 1.0f;
}
