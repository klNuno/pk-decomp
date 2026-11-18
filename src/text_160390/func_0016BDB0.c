#include "common.h"

void func_00101928(s32, s32, f32 *);
extern u8 D_007B7B8C[];
extern s32 D_007B83E4[];

void func_0016BDB0(f32 l, f32 r, f32 b, f32 t, f32 n, f32 f) {
    f32 m[16];

    m[0] = 2.0f * n / (r - l);
    m[4] = 0.0f;
    m[8] = (r + l) / (r - l);
    m[12] = 0.0f;
    m[1] = 0.0f;
    m[5] = 2.0f * n / (t - b);
    m[9] = (t + b) / (t - b);
    m[13] = 0.0f;
    m[2] = 0.0f;
    m[6] = 0.0f;
    m[10] = -(f + n) / (f - n);
    m[14] = -(2.0f * f * n) / (f - n);
    m[3] = 0.0f;
    m[7] = 0.0f;
    m[11] = -1.0f;
    m[15] = 0.0f;
    func_00101928(D_007B83E4[0], D_007B83E4[0], m);
    D_007B7B8C[0] = 1;
}
