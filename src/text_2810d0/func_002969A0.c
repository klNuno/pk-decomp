/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002969A0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002969A0_0;

extern unk_func_002969A0_0 D_007B8420;

void func_002969A0(u32 *arg0) {
    f32 x;
    f32 y;
    f32 z;

    z = arg0[2] / 4294967296.0f;
    y = arg0[1] / 4294967296.0f;
    x = arg0[0] / 4294967296.0f;

    D_007B8420.unk_00 = x;
    D_007B8420.unk_04 = y;
    D_007B8420.unk_08 = z;
    D_007B8420.unk_0C = 1.0f;
}
