/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];

void func_0028E610(s16 *arg0) {
    f32 temp0 = arg0[0] / 32767.0f;
    f32 temp1 = arg0[1] / 32767.0f;
    D_007B8460[0] = temp0;
    D_007B8464[0] = temp1;
}
