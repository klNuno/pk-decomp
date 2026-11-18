/* profile: o0_p */
#include "common.h"

typedef struct unk_func_00221720_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_00221720_0;

s32 *fn_p_stEvalTree();

s32 *func_00221720(s32 arg0, s32 *arg1, unk_func_00221720_0 *arg2) {
    s32 temp;
    unk_func_00221720_0 *temp0;
    unk_func_00221720_0 *temp1;
    unk_func_00221720_0 sp40;
    unk_func_00221720_0 sp50;
    f32 scale;

    temp = arg1[-2];
    temp1 = 0;
    scale = 1.0f;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    if (sp40.unk_0C != 0x15) {
        temp1 = &sp50;
        scale = (sp40.unk_0C == 8) ? sp40.unk_00.f : (f32)sp40.unk_00.i;
    } else {
        temp1 = &sp40;
        scale = (sp50.unk_0C == 8) ? sp50.unk_00.f : (f32)sp50.unk_00.i;
    }
    temp0 = arg2;
    arg2->unk_0C = 0x15;
    switch (temp) {
    case 0x14:
        temp0->unk_00.f = scale * temp1->unk_00.f;
        temp0->unk_04 = scale * temp1->unk_04;
        temp0->unk_08 = scale * temp1->unk_08;
        return arg1;
    case 0x15:
        if (((scale > 0.0f) ? scale : -scale) > 1.17549505e-38f) {
            temp0->unk_00.f = temp1->unk_00.f / scale;
            temp0->unk_04 = temp1->unk_04 / scale;
            temp0->unk_08 = temp1->unk_08 / scale;
        } else {
            temp0->unk_08 = temp0->unk_04 = temp0->unk_00.f = 0.0f;
        }
        return arg1;
    default:
        temp0->unk_08 = temp0->unk_04 = temp0->unk_00.f = 0.0f;
        return arg1;
    }
}
