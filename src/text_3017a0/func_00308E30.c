#include "common.h"

s32 func_002D28C0(s32, s32, s32, s32);

s32 func_00308E30(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 8);
    if ((temp_v0 == 0) || (arg1 == 0)) {
        return 0;
    }
    return func_002D28C0(arg1, arg2, arg3, temp_v0);
}
