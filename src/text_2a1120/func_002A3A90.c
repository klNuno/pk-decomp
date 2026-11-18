#include "common.h"

f32 int2dB__Fi(s32);
void func_0029D8F0();
extern u8 D_007B8488[];
extern f32 D_007B84C0[];

void func_002A3A90(s32 arg0, s32 arg1, s32 arg2) {
    D_007B84C0[0] = int2dB__Fi(arg0);
    D_007B84C0[1] = int2dB__Fi(arg1);
    D_007B84C0[2] = int2dB__Fi(arg2);
    D_007B84C0[3] = 0.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(2, D_007B84C0);
    }
}
