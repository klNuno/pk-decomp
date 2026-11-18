/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];
extern f32 D_007B846C[];

void func_0028E090(s32 *arg0) {
    f32 t0 = (f32)arg0[0] / 2147483648.0f;
    f32 t3 = (f32)arg0[3] / 2147483648.0f;
    f32 t2 = (f32)arg0[2] / 2147483648.0f;
    f32 t1 = (f32)arg0[1] / 2147483648.0f;
    D_007B8460[0] = t0;
    D_007B8464[0] = t1;
    D_007B8468[0] = t2;
    D_007B846C[0] = t3;
}
