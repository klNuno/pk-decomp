#include "common.h"

s32 func_00127318(s32, f32);
f32 func_002CD5E0(s32);
extern s32 D_00360548;
extern s32 D_0036054C;
extern f32 D_007BE8F8[];
extern f32 D_007BE8FC[];
extern f32 D_007BE900[];

void func_002D6430(s32 arg0, s32 *arg1) {
    f32 a;
    f32 b;
    f32 r;
    s32 x;

    x = arg1[0];
    a = (f32)x / 65536.0f;
    b = (f32)arg1[1] / 65536.0f;
    D_00360548 = x;
    D_0036054C = arg1[1];
    if (b >= 8.0f * a) {
        r = -100.0f;
    } else {
        r = func_002CD5E0(func_00127318(arg0, 127.0f * (b - a) / b));
    }
    D_007BE8FC[0] = a;
    D_007BE8F8[0] = b;
    D_007BE900[0] = r;
}
