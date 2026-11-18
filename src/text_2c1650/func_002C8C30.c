#include "common.h"

extern f32 (*D_007B83E4[])[4];
extern s8 D_007B7B8C[];

void func_002C8C30(f32 arg0, f32 arg1, f32 arg2) {
    f32 (*m)[4] = D_007B83E4[0];

    m[3][0] = m[3][0] + (m[0][0] * arg0 + m[1][0] * arg1 + m[2][0] * arg2);
    m[3][1] = m[3][1] + (m[0][1] * arg0 + m[1][1] * arg1 + m[2][1] * arg2);
    m[3][2] = m[3][2] + (m[0][2] * arg0 + m[1][2] * arg1 + m[2][2] * arg2);
    m[3][3] = m[3][3] + (m[0][3] * arg0 + m[1][3] * arg1 + m[2][3] * arg2);
    D_007B7B8C[0] = 1;
}
