/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0();
extern u8 D_007B8488[];
extern f32 D_007B84C0[];

void func_002A3B10(s32 arg0, s32 arg1, s32 arg2) {
    D_007B84C0[3] = 0.0f;
    D_007B84C0[0] = arg0 / 2147483648.0f;
    D_007B84C0[1] = arg1 / 2147483648.0f;
    D_007B84C0[2] = arg2 / 2147483648.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(2, D_007B84C0);
    }
}
