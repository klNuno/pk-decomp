#include "common.h"

f32 int2dB(int);

extern "C" {
void func_0029D8F0(...);
extern u8 D_007B8488[];
extern f32 D_007B8490[];

void func_002A9F50(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8490[0] = int2dB(arg0);
    D_007B8490[1] = int2dB(arg1);
    D_007B8490[2] = int2dB(arg2);
    D_007B8490[3] = 1.0f;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
}
