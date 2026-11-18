#include "common.h"

void func_003160E0(f32 *arg0, f32 *arg1) {
    f32 x2 = 2.0f * arg1[0];
    f32 y2 = 2.0f * arg1[1];
    f32 z2 = 2.0f * arg1[2];
    f32 xw = x2 * arg1[3];
    f32 yw = y2 * arg1[3];
    f32 zw = z2 * arg1[3];
    f32 xx = x2 * arg1[0];
    f32 xy = y2 * arg1[0];
    f32 xz = z2 * arg1[0];
    f32 yy = y2 * arg1[1];
    f32 yz = z2 * arg1[1];
    f32 zz = z2 * arg1[2];

    arg0[0] = 1.0f - (yy + zz);
    arg0[3] = xy - zw;
    arg0[6] = xz + yw;
    arg0[1] = xy + zw;
    arg0[4] = 1.0f - (xx + zz);
    arg0[7] = yz - xw;
    arg0[2] = xz - yw;
    arg0[5] = yz + xw;
    arg0[8] = 1.0f - (xx + yy);
}
