/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0();
extern f32 D_007B84D0[];
extern u8 D_007B8488[];

void func_002A1960(s32 arg0, s32 arg1) {
    D_007B84D0[0] = (f32)arg0 / 32767.0f;
    D_007B84D0[1] = (f32)arg1 / 32767.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
