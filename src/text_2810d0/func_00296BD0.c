/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00296BD0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00296BD0_0;

extern unk_func_00296BD0_0 D_007B8420;

void func_00296BD0(s32 *arg0) {
    s32 x;
    s32 y;
    s32 z;

    z = arg0[2];
    y = arg0[1];
    x = arg0[0];
    D_007B8420.unk_08 = (f32)z / 2147483648.0f;
    D_007B8420.unk_04 = (f32)y / 2147483648.0f;
    D_007B8420.unk_00 = (f32)x / 2147483648.0f;
    D_007B8420.unk_0C = 1.0f;
}
