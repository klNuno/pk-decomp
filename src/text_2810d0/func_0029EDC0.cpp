#include "common.h"

f32 int2dB(s32);

extern "C" {
void func_0029EA40(f32, f32, f32, f32);
void func_0029EDC0(s32 arg0, s32 arg1);
}

void func_0029EDC0(s32 arg0, s32 arg1) {
    func_0029EA40(int2dB(arg0), int2dB(arg1), 0.0f, 1.0f);
}
