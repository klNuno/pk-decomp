/* profile: opt_nodf */
#include "common.h"

extern f32 D_007B8490[][4];
extern u8 D_007B8488[];
extern u8 D_007B2370[];
void func_0029D9A0();

void func_002A7200(s32 arg0, u32 *arg1) {
    f32 x;
    f32 y;
    f32 z;

    z = arg1[2] / 4294967296.0f;
    y = arg1[1] / 4294967296.0f;
    x = arg1[0] / 4294967296.0f;
    D_007B8490[arg0][0] = x;
    D_007B8490[arg0][1] = y;
    D_007B8490[arg0][2] = z;
    D_007B8490[arg0][3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370 + arg0 * 16 + 0x6120);
    }
}
