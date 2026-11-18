#include "common.h"

f32 int2dB__Fi(s32);
void func_0029EA40(f32, f32, f32, f32);

void func_0029ECB0(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_f20;
    f32 temp_f21;

    temp_f21 = int2dB__Fi(arg0);
    temp_f20 = int2dB__Fi(arg1);
    func_0029EA40(temp_f21, temp_f20, int2dB__Fi(arg2), 1.0f);
}
