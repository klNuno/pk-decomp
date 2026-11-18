/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[];

void func_00296CF0(s8 *arg0) {
    f32 t0 = arg0[0] / 127.0f;
    f32 t2 = arg0[2] / 127.0f;
    f32 t1 = arg0[1] / 127.0f;
    D_007B8420[0] = t0;
    D_007B8420[1] = t1;
    D_007B8420[2] = t2;
    D_007B8420[3] = 1.0f;
}
