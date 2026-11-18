/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[];

void func_00296A80(u8 *arg0) {
    f32 c0, c1, c2;

    c2 = arg0[2] / 255.0f;
    c1 = arg0[1] / 255.0f;
    c0 = arg0[0] / 255.0f;
    D_007B8420[0] = c0;
    D_007B8420[1] = c1;
    D_007B8420[2] = c2;
    D_007B8420[3] = 1.0f;
}
