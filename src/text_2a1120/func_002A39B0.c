/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0();
extern u8 D_007B8488[];
extern f32 D_007B84C0[];

void func_002A39B0(s8 *arg0) {
    f32 temp2;
    f32 temp1;
    f32 temp0;

    temp2 = arg0[2] / 127.0f;
    temp1 = arg0[1] / 127.0f;
    temp0 = arg0[0] / 127.0f;
    D_007B84C0[3] = 0.0f;
    D_007B84C0[2] = temp2;
    D_007B84C0[1] = temp1;
    D_007B84C0[0] = temp0;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(2, D_007B84C0);
    }
}
