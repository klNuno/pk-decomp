/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8460[];
extern s32 D_007B8464[];

void func_0028DFA0(s32 arg0, s32 arg1) {
    D_007B8460[arg0 * 4] = (f32)arg1 / 32767.0f;
    D_007B8464[arg0 * 4] = 0;
}
