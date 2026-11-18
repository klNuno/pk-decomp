#include "common.h"

void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B84D0[];

void func_002A1500(f32 arg0, f32 arg1, f32 arg2) {
    D_007B84D0[0] = arg0;
    D_007B84D0[1] = arg1;
    D_007B84D0[2] = arg2;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
