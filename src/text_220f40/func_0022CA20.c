/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0022CA20_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_0022CA20_0;

typedef struct unk_func_0022CA20_2 {
    s32 *unk_00;
    u8 pad_04[0xC];
} unk_func_0022CA20_2;

typedef struct unk_func_0022CA20_1 {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_0022CA20_0 ***unk_10;
} unk_func_0022CA20_1;

s32 fn_h_StandardGameGetSuperObject(s32);
s32 *fn_p_stEvalTree();
unk_func_0022CA20_1 *func_001B0B00(s32, u16, s32);
void func_001EDBB0(s32, s32);

s32 *func_0022CA20(s32 arg0, s32 *arg1) {
    unk_func_0022CA20_1 *temp0;
    s32 temp1;
    unk_func_0022CA20_0 **temp2;
    unk_func_0022CA20_0 *temp3;
    unk_func_0022CA20_0 **temp4;
    unk_func_0022CA20_0 *temp5;
    s32 temp6;
    s32 temp7;
    s32 temp;
    unk_func_0022CA20_2 spA0;

    temp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
    temp6 = fn_h_StandardGameGetSuperObject(spA0.unk_00[1]);
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
    temp7 = (s32)spA0.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &spA0);
    temp1 = (s32)spA0.unk_00;
    switch (temp) {
    case 0x157:
        temp0 = func_001B0B00(2, temp7 - 1, temp6);
        break;
    default:
        func_001EDBB0(0x28, 0);
        return arg1;
    }
    if (temp0 != 0) {
        switch (*temp0->unk_0C) {
        case 7:
            temp2 = *temp0->unk_10;
            temp3 = *temp2;
            temp3->unk_04 = temp1;
            break;
        case 8:
            temp4 = *temp0->unk_10;
            temp5 = *temp4;
            temp5->unk_04 = temp1;
            break;
        }
    }
    return arg1;
}
