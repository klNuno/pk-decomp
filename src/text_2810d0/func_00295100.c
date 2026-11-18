/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[][4];

void func_00295100(s32 arg0, s8 *arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;

    d = arg1[3] / 127.0f;
    c = arg1[2] / 127.0f;
    b = arg1[1] / 127.0f;
    a = arg1[0] / 127.0f;
    D_007B8420[arg0][0] = a;
    D_007B8420[arg0][1] = b;
    D_007B8420[arg0][2] = c;
    D_007B8420[arg0][3] = d;
}
