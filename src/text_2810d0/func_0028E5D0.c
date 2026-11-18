/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];

void func_0028E5D0(s32 *arg0) {
    s32 temp0 = arg0[0];
    s32 temp1 = arg0[1];

    D_007B8464[0] = (f32)temp1 / 2147483648.0f;
    D_007B8460[0] = (f32)temp0 / 2147483648.0f;
}
