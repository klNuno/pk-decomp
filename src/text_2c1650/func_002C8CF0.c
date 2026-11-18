#include "common.h"

f32 int2dB__Fi(s32);
extern f32 *D_007B83E4[];
extern u8 D_007B7B8C[];

void func_002C8CF0(s32 arg0, s32 arg1, s32 arg2) {
    f32 *m;

    m = D_007B83E4[0];
    m[12] += m[0] * int2dB__Fi(arg0) + m[4] * int2dB__Fi(arg1) + m[8] * int2dB__Fi(arg2);
    m[13] += m[1] * int2dB__Fi(arg0) + m[5] * int2dB__Fi(arg1) + m[9] * int2dB__Fi(arg2);
    m[14] += m[2] * int2dB__Fi(arg0) + m[6] * int2dB__Fi(arg1) + m[10] * int2dB__Fi(arg2);
    m[15] += m[3] * int2dB__Fi(arg0) + m[7] * int2dB__Fi(arg1) + m[11] * int2dB__Fi(arg2);
    D_007B7B8C[0] = 1;
}
