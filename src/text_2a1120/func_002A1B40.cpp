#include "common.h"

f32 int2dB(int);

extern "C" {
void func_0029D8F0(...);
extern u8 D_007B8488[];
extern f32 D_007B84D0[];

void func_002A1B40(int arg0);
}

void func_002A1B40(int arg0) {
    D_007B84D0[0] = int2dB(arg0);
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
