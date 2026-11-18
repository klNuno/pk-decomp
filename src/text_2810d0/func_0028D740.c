/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[][4];
extern f32 D_007B8464[][4];
extern f32 D_007B8468[][4];
extern f32 D_007B846C[][4];

void func_0028D740(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_007B8460[arg0][0] = (f32)arg1 / 32767.0f;
    D_007B8464[arg0][0] = (f32)arg2 / 32767.0f;
    D_007B8468[arg0][0] = (f32)arg3 / 32767.0f;
    D_007B846C[arg0][0] = (f32)arg4 / 32767.0f;
}
