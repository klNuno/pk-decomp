/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern f32 D_007B8464[];
extern f32 D_007B8468[];

void func_0028E390(s32 *arg0) {
    s32 a = arg0[0];
    s32 b = arg0[1];
    s32 c = arg0[2];

    D_007B8468[0] = c / 2147483648.0f;
    D_007B8464[0] = b / 2147483648.0f;
    D_007B8460[0] = a / 2147483648.0f;
}
