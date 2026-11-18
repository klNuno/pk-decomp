/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[][4];

void func_00295760(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    D_007B8420[arg0][0] = (f32)arg1 / 65535.0f;
    D_007B8420[arg0][1] = (f32)arg2 / 65535.0f;
    D_007B8420[arg0][2] = (f32)arg3 / 65535.0f;
    D_007B8420[arg0][3] = (f32)arg4 / 65535.0f;
}
