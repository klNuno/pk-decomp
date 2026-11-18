/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];
extern f32 D_007B846C[];

void func_0028E280(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8460[0] = (f32)arg0 / 32767.0f;
    D_007B8464[0] = (f32)arg1 / 32767.0f;
    D_007B8468[0] = (f32)arg2 / 32767.0f;
    D_007B846C[0] = (f32)arg3 / 32767.0f;
}
