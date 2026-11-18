/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00296B60_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00296B60_0;

extern unk_func_00296B60_0 D_007B8420;

void func_00296B60(s16 *arg0) {
    f32 temp0, temp1, temp2;

    temp2 = (f32)arg0[2] / 32767.0f;
    temp1 = (f32)arg0[1] / 32767.0f;
    temp0 = (f32)arg0[0] / 32767.0f;
    D_007B8420.unk_0C = 1.0f;
    D_007B8420.unk_08 = temp2;
    D_007B8420.unk_04 = temp1;
    D_007B8420.unk_00 = temp0;
}
