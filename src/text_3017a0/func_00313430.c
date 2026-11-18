#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00313430_1;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} unk_func_00313430_2;

typedef struct {
    u8 pad_00[0x18];
    unk_func_00313430_2 *unk_18;
} unk_func_00313430_0;

void func_00313430(unk_func_00313430_0 *arg0, s32 arg1, unk_func_00313430_1 *arg2, unk_func_00313430_1 *arg3, unk_func_00313430_1 *arg4) {
    unk_func_00313430_2 *w;
    f32 s;
    f32 x;
    f32 y;
    f32 z;

    w = &arg0->unk_18[arg1 - 1];
    arg4->unk_00 = w->unk_00 * arg2->unk_00;
    arg4->unk_04 = w->unk_00 * arg2->unk_04;
    arg4->unk_08 = w->unk_00 * arg2->unk_08;
    s = w->unk_04;
    x = s * arg3->unk_00;
    y = s * arg3->unk_04;
    z = s * arg3->unk_08;
    arg4->unk_00 += x;
    arg4->unk_04 += y;
    arg4->unk_08 += z;
}
