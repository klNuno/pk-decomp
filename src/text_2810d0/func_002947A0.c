#include "common.h"

f32 int2dB__Fi(s64);
extern f32 D_007B8450[];

void func_002947A0(s64 *arg0) {
    f32 temp_f20;
    f32 temp_f21;

    temp_f21 = int2dB__Fi(arg0[2]);
    temp_f20 = int2dB__Fi(arg0[1]);
    D_007B8450[0] = int2dB__Fi(arg0[0]);
    D_007B8450[1] = temp_f20;
    D_007B8450[2] = temp_f21;
    D_007B8450[3] = 0.0f;
}
