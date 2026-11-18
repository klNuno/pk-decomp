#include "common.h"

f32 int2dB__Fi(s32);
extern f32 (*D_007B83E4[])[4];
extern u8 D_007B7B8C[];

void func_002C8AF0(s32 arg0, s32 arg1, s32 arg2) {
    f32 (*m)[4] = D_007B83E4[0];

    m[0][0] *= int2dB__Fi(arg0);
    m[1][0] *= int2dB__Fi(arg1);
    m[2][0] *= int2dB__Fi(arg2);
    m[0][1] *= int2dB__Fi(arg0);
    m[1][1] *= int2dB__Fi(arg1);
    m[2][1] *= int2dB__Fi(arg2);
    m[0][2] *= int2dB__Fi(arg0);
    m[1][2] *= int2dB__Fi(arg1);
    m[2][2] *= int2dB__Fi(arg2);
    m[0][3] *= int2dB__Fi(arg0);
    m[1][3] *= int2dB__Fi(arg1);
    m[2][3] *= int2dB__Fi(arg2);
    D_007B7B8C[0] = 1;
}
