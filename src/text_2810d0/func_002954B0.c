/* profile: opt_nodf */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002954B0_0;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
} unk_func_002954B0_1;

extern unk_func_002954B0_0 D_007B8420[];

void func_002954B0(s32 arg0, unk_func_002954B0_1 *arg1) {
    f32 x;
    f32 y;
    f32 z;

    z = (f32)arg1->unk_04 / 32767.0f;
    y = (f32)arg1->unk_02 / 32767.0f;
    x = (f32)arg1->unk_00 / 32767.0f;
    D_007B8420[arg0].unk_00 = x;
    D_007B8420[arg0].unk_04 = y;
    D_007B8420[arg0].unk_08 = z;
    D_007B8420[arg0].unk_0C = 1.0f;
}
