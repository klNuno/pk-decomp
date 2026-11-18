#include "common.h"

extern s32 D_00360300;

void func_00273300(f32 arg0, f32 arg1, f32 arg2) {
    D_00360300 = (s32)(255.0f * arg0) << 16;
    D_00360300 |= (s32)(255.0f * arg1) << 8;
    D_00360300 |= (s32)(255.0f * arg2);
}
