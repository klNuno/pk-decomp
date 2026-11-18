#include "common.h"

void func_001571B0(f32 (*m)[4], f32 x, f32 y, f32 z, f32 w) {
    f32 x2;
    f32 y2;
    f32 z2;
    f32 wz;
    f32 xx;
    f32 wx;
    f32 wy;
    f32 xy;
    f32 xz;
    f32 yy;
    f32 yz;
    f32 zz;
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

    m[0][0] = 1.0f - (yy + zz);
    m[1][0] = xy + wz;
    m[2][0] = xz - wy;
    m[3][0] = 0.0f;
    m[0][1] = xy - wz;
    m[1][1] = 1.0f - (xx + zz);
    m[2][1] = yz + wx;
    m[3][1] = 0.0f;
    m[0][2] = xz + wy;
    m[1][2] = yz - wx;
    m[2][2] = 1.0f - (xx + yy);
    m[3][2] = 0.0f;
    m[0][3] = 0.0f;
    m[1][3] = 0.0f;
    m[2][3] = 0.0f;
    m[3][3] = 1.0f;
}
