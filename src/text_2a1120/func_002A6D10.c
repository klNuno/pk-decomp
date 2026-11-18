/* profile: opt_nodf */
#include "common.h"

void func_0029D9A0(s32, s32, void *, f32 *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern f32 D_007B8490[][4];

void func_002A6D10(s32 arg0, s16 *arg1) {
    f32 x, y, z, w;
    w = arg1[3] / 32767.0f;
    z = arg1[2] / 32767.0f;
    x = arg1[0] / 32767.0f;
    y = arg1[1] / 32767.0f;
    D_007B8490[arg0][0] = x;
    D_007B8490[arg0][1] = y;
    D_007B8490[arg0][2] = z;
    D_007B8490[arg0][3] = w;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, D_007B2370 + arg0 * 16 + 0x6120, D_007B8490[arg0]);
    }
}
