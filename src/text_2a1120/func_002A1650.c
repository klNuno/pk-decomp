/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0();
extern u8 D_007B8488[];
extern f32 D_007B84D0[];

void func_002A1650(s32 arg0, s32 arg1, s32 arg2) {
    D_007B84D0[0] = (f32)arg0 / 32767.0f;
    D_007B84D0[1] = (f32)arg1 / 32767.0f;
    D_007B84D0[2] = (f32)arg2 / 32767.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
