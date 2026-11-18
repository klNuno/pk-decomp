/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8450[];

void func_00294870(s16 *arg0) {
    f32 x;
    f32 y;
    f32 z;

    z = arg0[2] / 32767.0f;
    y = arg0[1] / 32767.0f;
    x = arg0[0] / 32767.0f;
    D_007B8450[3] = 0.0f;
    D_007B8450[2] = z;
    D_007B8450[1] = y;
    D_007B8450[0] = x;
}
