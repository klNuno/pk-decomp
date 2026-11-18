#include "common.h"

extern f32 D_007B8420[];

void func_00295CD0(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    D_007B8420[arg0 * 4] = arg1;
    D_007B8420[arg0 * 4 + 1] = arg2;
    D_007B8420[arg0 * 4 + 2] = arg3;
    D_007B8420[arg0 * 4 + 3] = arg4;
}
