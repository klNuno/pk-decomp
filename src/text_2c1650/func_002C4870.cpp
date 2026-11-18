#include "common.h"

f32 int2dB(int);

extern "C" {
extern f32 D_007B24B8[];

void func_002C4870(s32 arg0) {
    D_007B24B8[0] = int2dB(arg0);
}
}
