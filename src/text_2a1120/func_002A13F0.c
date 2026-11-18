#include "common.h"

void func_0029D8F0();
extern u8 D_007B8488[];
extern f32 D_007B84D0[];

void func_002A13F0(s32 *arg0) {
    s32 x;
    s32 y;
    s32 z;

    x = arg0[0];
    y = arg0[1];
    z = arg0[2];
    D_007B84D0[2] = (f32)z / 2147483648.0f;
    D_007B84D0[1] = (f32)y / 2147483648.0f;
    D_007B84D0[0] = (f32)x / 2147483648.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
