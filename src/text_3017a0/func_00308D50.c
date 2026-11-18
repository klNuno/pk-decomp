#include "common.h"

s64 func_002D28D0(s32);

s64 func_00308D50(void *arg0) {
    s32 temp_a0;
    s64 temp_v0;

    temp_a0 = *(s32 *)((u8 *)arg0 + 8);
    if (temp_a0 == 0) {
        return 0;
    }
    temp_v0 = func_002D28D0(temp_a0);
    if (temp_v0 < 0) {
        return 0;
    }
    return (s64) (temp_v0 << 0x20) >> 0x20;
}
