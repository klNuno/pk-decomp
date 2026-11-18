/* profile: opt_nodf */
#include "common.h"

void func_0029D8F0();
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A9230(s32 *arg0) {
    f32 temp0;
    f32 temp1;
    f32 temp2;

    temp2 = arg0[2] / 2147483648.0f;
    temp1 = arg0[1] / 2147483648.0f;
    temp0 = arg0[0] / 2147483648.0f;
    D_007B8490[0] = temp0;
    D_007B8490[1] = temp1;
    D_007B8490[2] = temp2;
    D_007B8490[3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
