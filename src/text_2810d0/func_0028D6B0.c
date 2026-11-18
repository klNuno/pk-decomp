/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];
extern f32 D_007B846C[];

void func_0028D6B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_007B8460[arg0 * 4] = (f32)arg1 / 2147483648.0f;
    D_007B8464[arg0 * 4] = (f32)arg2 / 2147483648.0f;
    D_007B8468[arg0 * 4] = (f32)arg3 / 2147483648.0f;
    D_007B846C[arg0 * 4] = (f32)arg4 / 2147483648.0f;
}
