#include "common.h"

s32 rand(void);
void func_00266E40(s32, f32 *, f32 *, s32, f32, f32, f32);
extern f32 D_00633308[];

void func_00261BD0(f32 *arg0, f32 *arg1, s32 arg2) {
    f32 sp70[4];
    f32 sp80[4];
    s32 i;
    f32 temp;
    f32 *const p = sp70;
    f32 *const q = sp80;

    p[0] = arg0[0];
    p[1] = arg0[1];
    p[2] = arg0[2];
    q[0] = arg1[0];
    q[1] = arg1[1];
    q[2] = arg1[2];
    for (i = 0; i < 3; i++) {
        sp70[i] = arg0[i] + 4.0f * arg1[i] + (-4.0f + (8.0f * rand()) / 2147483648.0f) + 0.3f * D_00633308[i];
        sp80[i] = D_00633308[i] + (-0.2f + (0.4f * rand()) / 2147483648.0f);
    }
    temp = 0.4f + ((0.45f - 0.4f) * rand()) / 2147483648.0f;
    func_00266E40(0x90003, sp70, sp80, arg2, 1.0f, temp, temp);
}
