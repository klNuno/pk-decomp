/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[][4];

void func_00294AF0(s32 arg0, u16 *arg1) {
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    w = arg1[3] / 65535.0f;
    z = arg1[2] / 65535.0f;
    y = arg1[1] / 65535.0f;
    x = arg1[0] / 65535.0f;
    D_007B8420[arg0][0] = x;
    D_007B8420[arg0][1] = y;
    D_007B8420[arg0][2] = z;
    D_007B8420[arg0][3] = w;
}
