/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_0020F370_0;

s32 WPG_fn_lGetLinkCapabilities(s32, s32, s32, s32 *);
s32 WPG_fn_lGetLinkWeight(s32, s32, s32, s32 *);
s32 *fn_p_stEvalTree(s32, s32 *, unk_0020F370_0 *);
void func_001EDBB0(s32, s32);
s32 func_001EE9C0(s32, s32, s32, s32, s32);
s32 func_001EEC40(s32, s32, s32, s32);

s32 *func_0020F370(s32 arg0, s32 *arg1, unk_0020F370_0 *arg2)
{
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;

    temp4 = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp0 = arg2->unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp2 = arg2->unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp3 = arg2->unk_00;
    if (temp0 == 0) {
        if (temp4 == 0xC0) {
            arg2->unk_00 = 0;
            arg2->unk_0C = 0x2C;
        } else {
            arg2->unk_00 = -1;
            arg2->unk_0C = 6;
        }
        return arg1;
    }
    switch (temp4) {
    case 0xC0:
        if (WPG_fn_lGetLinkCapabilities(temp0, temp2, temp3, &temp6) == -1) {
            arg2->unk_00 = 0;
            arg2->unk_0C = 0x2C;
        } else {
            arg2->unk_00 = temp6;
            arg2->unk_0C = 0x2C;
        }
        return arg1;
    case 0xC1:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp6 = arg2->unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp1 = arg2->unk_00;
        temp1 = func_001EE9C0(temp0, temp2, temp3, temp6, temp1);
        arg2->unk_00 = temp1;
        arg2->unk_0C = 6;
        return arg1;
    case 0xC2:
        if (WPG_fn_lGetLinkWeight(temp0, temp2, temp3, &temp5) == -1) {
            arg2->unk_00 = -1;
            arg2->unk_0C = 6;
        } else {
            arg2->unk_00 = temp5;
            arg2->unk_0C = 6;
        }
        return arg1;
    case 0xC3:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        temp5 = arg2->unk_00;
        temp1 = func_001EEC40(temp0, temp2, temp3, temp5);
        arg2->unk_00 = temp1;
        arg2->unk_0C = 6;
        return arg1;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
}
