/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8420[][4];

static inline void func_00296130_inl(s32 i, f32 x, f32 y, f32 z) {
    D_007B8420[i][0] = x;
    D_007B8420[i][1] = y;
    D_007B8420[i][2] = z;
    D_007B8420[i][3] = 1.0f;
}

void func_00296130(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00296130_inl(arg0, arg1 / 2147483648.0f, arg2 / 2147483648.0f, arg3 / 2147483648.0f);
}
