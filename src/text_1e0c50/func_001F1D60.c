/* profile: o0_p */
#include "common.h"

void func_001F1D60(const u8 *arg0, f32 *arg1)
{
    f32 temp0;
    f32 temp1 = 0.0f;
    f32 temp2 = 0.01f;

    temp0 = (f32)arg0[0];
    if (temp0 < 0.0f) {
        temp1 = 0.0f;
    } else if (temp0 > 100.0f) {
        temp1 = 1.0f;
    } else {
        temp1 = temp0 * temp2;
    }
    arg1[0] = temp1;

    temp0 = (f32)arg0[1];
    if (temp0 < 0.0f) {
        temp1 = 0.0f;
    } else if (temp0 > 100.0f) {
        temp1 = 1.0f;
    } else {
        temp1 = temp0 * temp2;
    }
    arg1[1] = temp1;

    temp0 = (f32)arg0[2];
    if (temp0 < 0.0f) {
        temp1 = 0.0f;
    } else if (temp0 > 100.0f) {
        temp1 = 1.0f;
    } else {
        temp1 = temp0 * temp2;
    }
    arg1[2] = temp1;

    temp0 = (f32)arg0[3];
    if (temp0 < 0.0f) {
        temp1 = 0.0f;
    } else if (temp0 > 100.0f) {
        temp1 = 1.0f;
    } else {
        temp1 = temp0 * temp2;
    }
    arg1[3] = temp1;
}
