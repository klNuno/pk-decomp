#include "common.h"

s32 func_001DDBD0(f32 *arg0, f32 *arg1, f32 *arg2, f32 *arg3) {
    if (arg2[0] > arg1[0] && arg3[0] < arg0[0] &&
        arg2[1] > arg1[1] && arg3[1] < arg0[1] &&
        arg2[2] > arg1[2] && arg3[2] < arg0[2]) {
        return 1;
    }
    return 0;
}
