#include "common.h"

f32 int2dB__Fi(s32);
extern f32 D_007B8420[];

void func_00297190(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B8420[0] = int2dB__Fi(arg0);
    D_007B8420[1] = int2dB__Fi(arg1);
    D_007B8420[2] = int2dB__Fi(arg2);
    D_007B8420[3] = int2dB__Fi(arg3);
}
