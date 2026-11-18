#include "common.h"

s32 func_00268CB0(f32 arg0, f32 arg1, s32 arg2, u8 *arg3) {
    *(f32 *)(arg3 + 0x90) = arg0;
    *(f32 *)(arg3 + 0x94) = arg1;
    return 1;
}
