#include "common.h"

f32 func_00126140();
extern f32 D_007B8420[];

void func_00297640(s32 arg0, s32 arg1, s32 arg2) {
    D_007B8420[0] = func_00126140(arg0);
    D_007B8420[1] = func_00126140(arg1);
    D_007B8420[2] = func_00126140(arg2);
    D_007B8420[3] = 1.0f;
}
