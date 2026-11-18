#include "common.h"

s32 func_002D28B0(s32);

s32 func_00308D20(void *arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = *(s32 *)((u8 *)arg0 + 8);
    var_v0 = 0;
    if (temp_a0 != 0) {
        var_v0 = func_002D28B0(temp_a0) != 0;
    }
    return var_v0;
}
