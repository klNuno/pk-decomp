#include "common.h"

u8 func_001E3770(f32 *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    f32 d;
    f32 sum;

    sum = 0.0f;
    if (arg0[0] < arg1[0]) {
        d = arg0[0] - arg1[0];
        sum += d * d;
    } else if (arg0[0] > arg2[0]) {
        d = arg0[0] - arg2[0];
        sum += d * d;
    }
    if (arg0[1] < arg1[1]) {
        d = arg0[1] - arg1[1];
        sum += d * d;
    } else if (arg0[1] > arg2[1]) {
        d = arg0[1] - arg2[1];
        sum += d * d;
    }
    if (arg0[2] < arg1[2]) {
        d = arg0[2] - arg1[2];
        sum += d * d;
    } else if (arg0[2] > arg2[2]) {
        d = arg0[2] - arg2[2];
        sum += d * d;
    }
    return sum < arg3 * arg3;
}
