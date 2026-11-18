#include "common.h"

u8 func_001E1BA0(f32 *arg0, f32 *arg1, f32 arg2) {
    f32 z;
    f32 y;
    f32 x;

    y = arg0[1] - arg1[1];
    x = arg0[0] - arg1[0];
    z = arg0[2] - arg1[2];
    return x * x + y * y + z * z <= arg2 * arg2;
}
