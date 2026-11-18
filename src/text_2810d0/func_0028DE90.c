/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[][4];
extern f32 D_007B8464[][4];

void func_0028DE90(s32 arg0, s16 *arg1) {
    D_007B8460[arg0][0] = *arg1 / 32767.0f;
    D_007B8464[arg0][0] = 0.0f;
}
