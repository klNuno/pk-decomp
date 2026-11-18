#include "common.h"

extern f32 D_007B84D0[];
extern u8 D_007B8488[];
void func_0029D8F0();

void func_002A1300(f32 *arg0) {
    f32 x;
    f32 y;
    f32 z;

    z = arg0[2];
    y = arg0[1];
    x = arg0[0];
    D_007B84D0[0] = x;
    D_007B84D0[1] = y;
    D_007B84D0[2] = z;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
