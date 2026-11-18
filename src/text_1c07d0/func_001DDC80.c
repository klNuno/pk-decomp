#include "common.h"

void func_001DDC80(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 arg5) {
    f32 temp;

    temp = arg2[0] - arg5;
    arg0[0] = temp < arg3[0] ? temp : arg3[0];
    temp = arg2[1] - arg5;
    arg0[1] = temp < arg3[1] ? temp : arg3[1];
    temp = arg2[2] - arg5;
    arg0[2] = temp < arg3[2] ? temp : arg3[2];
    temp = arg2[0] + arg5;
    arg1[0] = temp > arg4[0] ? temp : arg4[0];
    temp = arg2[1] + arg5;
    arg1[1] = temp > arg4[1] ? temp : arg4[1];
    temp = arg2[2] + arg5;
    arg1[2] = temp > arg4[2] ? temp : arg4[2];
}
