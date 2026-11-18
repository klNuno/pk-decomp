/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];

void func_0028E3E0(s16 *arg0) {
    f32 temp0;
    f32 temp1;
    f32 temp2;

    temp0 = arg0[0] / 32767.0f;
    temp2 = arg0[2] / 32767.0f;
    temp1 = arg0[1] / 32767.0f;
    D_007B8460[0] = temp0;
    D_007B8464[0] = temp1;
    D_007B8468[0] = temp2;
}
