#include "common.h"

void func_001DDB20(f32 *arg0, f32 *arg1, f32 *arg2) {
    if (arg2[0] < arg0[0]) {
        arg0[0] = arg2[0];
    } else if (arg2[0] > arg1[0]) {
        arg1[0] = arg2[0];
    }
    if (arg2[1] < arg0[1]) {
        arg0[1] = arg2[1];
    } else if (arg2[1] > arg1[1]) {
        arg1[1] = arg2[1];
    }
    if (arg2[2] < arg0[2]) {
        arg0[2] = arg2[2];
    } else if (arg2[2] > arg1[2]) {
        arg1[2] = arg2[2];
    }
}
