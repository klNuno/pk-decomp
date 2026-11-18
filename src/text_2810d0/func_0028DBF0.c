/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];

void func_0028DBF0(s32 arg0, s32 *arg1) {
    f32 a;
    f32 b;

    a = (f32)arg1[0] / 2147483648.0f;
    b = (f32)arg1[1] / 2147483648.0f;
    D_007B8460[arg0 * 4] = a;
    D_007B8464[arg0 * 4] = b;
}
