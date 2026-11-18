/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[];

void func_00296570(u8 *arg0) {
    f32 t0;
    f32 t1;
    f32 t2;
    f32 t3;

    t3 = arg0[3] / 255.0f;
    t2 = arg0[2] / 255.0f;
    t1 = arg0[1] / 255.0f;
    t0 = arg0[0] / 255.0f;
    D_007B8420[0] = t0;
    D_007B8420[1] = t1;
    D_007B8420[2] = t2;
    D_007B8420[3] = t3;
}
