/* profile: opt */
#include "common.h"

f32 func_001E60E0(f32);

void func_00157260(f32 arg0[4][4], f32 x, f32 y, f32 z, f32 w) {
    f32 inv;
    f32 x2;
    f32 y2;
    f32 z2;
    f32 wx;
    f32 wy;
    f32 wz;
    f32 xx;
    f32 xy;
    f32 xz;
    f32 yy;
    f32 yz;
    f32 zz;

    inv = 1.0f / func_001E60E0(x * x + y * y + (z * z + w * w));
    x *= inv;
    y *= inv;
    z *= inv;
    w *= inv;
    x2 = x + x;
    y2 = y + y;
    z2 = z + z;
    wx = w * x2;
    wy = w * y2;
    wz = w * z2;
    xx = x * x2;
    xy = x * y2;
    xz = x * z2;
    yy = y * y2;
    yz = y * z2;
    zz = z * z2;
    arg0[0][0] = 1.0f - (yy + zz);
    arg0[1][0] = xy + wz;
    arg0[2][0] = xz - wy;
    arg0[3][0] = 0.0f;
    arg0[0][1] = xy - wz;
    arg0[1][1] = 1.0f - (xx + zz);
    arg0[2][1] = yz + wx;
    arg0[3][1] = 0.0f;
    arg0[0][2] = xz + wy;
    arg0[1][2] = yz - wx;
    arg0[2][2] = 1.0f - (xx + yy);
    arg0[3][2] = 0.0f;
    arg0[0][3] = 0.0f;
    arg0[1][3] = 0.0f;
    arg0[2][3] = 0.0f;
    arg0[3][3] = 1.0f;
}
