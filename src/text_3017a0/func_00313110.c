#include "common.h"

void func_00313110(f32 *arg0, s32 arg1, f32 *arg2, f32 *arg3) {
    arg3[0] = arg2[0] - arg0[0];
    arg3[1] = arg2[1] - arg0[1];
    arg3[2] = arg2[2] - arg0[2];
    arg3[0] = 0.5f * arg3[0];
    arg3[1] = 0.5f * arg3[1];
    arg3[2] = 0.5f * arg3[2];
}
