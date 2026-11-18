#include "common.h"

f32 int2dB(s32);

extern "C" {
void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B84D0[];

void func_002A1550(s32 arg0, s32 arg1, s32 arg2) {
    D_007B84D0[0] = int2dB(arg0);
    D_007B84D0[1] = int2dB(arg1);
    D_007B84D0[2] = int2dB(arg2);
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
}
