/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8450[];

void func_002948E0(s8 *arg0) {
    f32 x;
    f32 y;
    f32 z;

    z = arg0[2] / 127.0f;
    y = arg0[1] / 127.0f;
    x = arg0[0] / 127.0f;
    D_007B8450[3] = 0.0f;
    D_007B8450[2] = z;
    D_007B8450[1] = y;
    D_007B8450[0] = x;
}
