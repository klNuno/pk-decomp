#include "common.h"

typedef struct unk_func_002955C0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002955C0_0;

extern unk_func_002955C0_0 D_007B8420[];

void func_002955C0(s32 arg0, unk_func_002955C0_0 *arg1) {
    f32 x;
    f32 y;
    f32 z;

    z = arg1->unk_08;
    y = arg1->unk_04;
    x = arg1->unk_00;
    D_007B8420[arg0].unk_00 = x;
    D_007B8420[arg0].unk_04 = y;
    D_007B8420[arg0].unk_08 = z;
    D_007B8420[arg0].unk_0C = 1.0f;
}
