/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00221990_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_00221990_0;

s32 *fn_p_stEvalTree();

s32 *func_00221990(s32 arg0, s32 *arg1, unk_func_00221990_0 *arg2) {
    s32 temp;
    unk_func_00221990_0 *temp0;
    unk_func_00221990_0 *temp1;
    unk_func_00221990_0 *temp2;
    unk_func_00221990_0 sp50;
    unk_func_00221990_0 sp60;

    temp = arg1[-2];
    temp2 = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp1 = &sp50;
    if (temp != 0x13) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        temp2 = &sp60;
    }
    temp0 = arg2;
    arg2->unk_0C = 0x15;
    switch (temp) {
    case 0x11:
        temp0->unk_00 = temp1->unk_00 + temp2->unk_00;
        temp0->unk_04 = temp1->unk_04 + temp2->unk_04;
        temp0->unk_08 = temp1->unk_08 + temp2->unk_08;
        return arg1;
    case 0x12:
        temp0->unk_00 = temp1->unk_00 - temp2->unk_00;
        temp0->unk_04 = temp1->unk_04 - temp2->unk_04;
        temp0->unk_08 = temp1->unk_08 - temp2->unk_08;
        return arg1;
    case 0x13:
        temp0->unk_00 = -temp1->unk_00;
        temp0->unk_04 = -temp1->unk_04;
        temp0->unk_08 = -temp1->unk_08;
        return arg1;
    default:
        temp0->unk_08 = temp0->unk_04 = temp0->unk_00 = 0.0f;
        return arg1;
    }
}
