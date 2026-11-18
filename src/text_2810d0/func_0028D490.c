#include "common.h"

extern f32 D_007B8460[][4];
extern f32 D_007B8464[][4];
extern f32 D_007B8468[][4];
extern f32 D_007B846C[][4];

static inline void func_0028D490_inl(s32 i, f32 x, f32 y, f32 z, f32 w) {
    D_007B8460[i][0] = x;
    D_007B8464[i][0] = y;
    D_007B8468[i][0] = z;
    D_007B846C[i][0] = w;
}

void func_0028D490(s32 arg0, s32 *arg1) {
    func_0028D490_inl(arg0, arg1[0] / 2147483648.0f, arg1[1] / 2147483648.0f, arg1[2] / 2147483648.0f, arg1[3] / 2147483648.0f);
}
