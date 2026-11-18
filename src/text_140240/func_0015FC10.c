#include "common.h"

s32 func_0010AFE0(s32, s32);
s32 func_001273A8(f32);
u32 func_0012ABC0(void);
void func_0012ABD0(s32);

void func_0015FC10(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 >= 0 && arg2 < 0x32) {
        arg2 = 0x32;
    }
    while (func_0010AFE0(arg0, arg1) == 5 && arg2 >= 0) {
        func_0012ABD0(func_001273A8((f32)arg2 * (f32)func_0012ABC0() / 1000.0f));
    }
}
