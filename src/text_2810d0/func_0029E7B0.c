#include "common.h"

f32 int2dB__Fi();
void func_0029EA40(f32, f32, f32, f32);

void func_0029E7B0(s64 *arg0) {
    f32 temp1;
    f32 temp0;

    temp0 = int2dB__Fi(arg0[0]);
    temp1 = int2dB__Fi(arg0[1]);
    func_0029EA40(temp0, temp1, int2dB__Fi(arg0[2]), 1.0f);
}
