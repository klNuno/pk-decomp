/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00294C40_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00294C40_0;

extern unk_func_00294C40_0 D_007B8420[];

void func_00294C40(s32 arg0, u32 *arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;

    d = arg1[3] / 4294967296.0f;
    c = arg1[2] / 4294967296.0f;
    b = arg1[1] / 4294967296.0f;
    a = arg1[0] / 4294967296.0f;

    D_007B8420[arg0].unk_00 = a;
    D_007B8420[arg0].unk_04 = b;
    D_007B8420[arg0].unk_08 = c;
    D_007B8420[arg0].unk_0C = d;
}
