/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_0020AC60_0;

typedef struct {
    s32 unk_00, unk_04, unk_08;
} unk_func_0020AC60_3;

typedef struct {
    unk_func_0020AC60_3 unk_00;
    s32 unk_0C;
} unk_func_0020AC60_1;

typedef struct {
    s32 unk_00;
    u8 pad_04[12];
} unk_func_0020AC60_4;

typedef union {
    unk_func_0020AC60_0 unk_00;
    unk_func_0020AC60_3 unk_00w;
} unk_func_0020AC60_5;

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
} unk_func_0020AC60_2;

extern "C" {
extern s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0020AC60_4 *);
extern void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
extern unk_func_0020AC60_2 *func_001B0B00(s32, u16, s32);
extern void func_001DB9F0(unk_func_0020AC60_2 *, s32, s32, s16 *, s16 *);
extern void func_001DCF20(unk_func_0020AC60_0 *, f32 *, unk_func_0020AC60_2 *);
extern void func_001DD290(unk_func_0020AC60_2 *, unk_func_0020AC60_0 *, s16);
extern void func_001EDBB0(s32, s32);
extern s32 func_00208CC0(s32);

s32 *func_0020AC60(s32 arg0, s32 *arg1, unk_func_0020AC60_1 *arg2)
{
    unk_func_0020AC60_2 *temp0;
    s32 temp1, temp2;
    unk_func_0020AC60_4 temp3;
    unk_func_0020AC60_5 temp4;
    unk_func_0020AC60_0 temp5;
    s32 temp6;
    f32 temp7;
    s16 temp8, temp9;

    temp2 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp2), arg0, &temp6);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp3);
    temp1 = temp3.unk_00;

    switch (temp2) {
    case 0xED:
        temp0 = func_001B0B00(1, temp1 - 1, temp6);
        break;
    case 0xEE:
        temp0 = func_001B0B00(2, temp1 - 1, temp6);
        break;
    case 0xEF:
        temp0 = func_001B0B00(0, temp1 - 1, temp6);
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }

    if (temp0 != 0) {
        switch (*temp0->unk_0C) {
        case 7:
            func_001DCF20(&temp4.unk_00, &temp7, temp0);
            temp4.unk_00.unk_00 = temp7;
            temp4.unk_00.unk_04 = temp7;
            temp4.unk_00.unk_08 = temp7;
            break;
        case 8:
            func_001DB9F0(temp0, 0, 0, &temp9, &temp8);
            func_001DD290(temp0, &temp4.unk_00, temp9);
            func_001DD290(temp0, &temp5, temp8);
            temp4.unk_00.unk_00 = (temp4.unk_00.unk_00 - temp5.unk_00) > 0.0f ? (temp4.unk_00.unk_00 - temp5.unk_00) : -(temp4.unk_00.unk_00 - temp5.unk_00);
            temp4.unk_00.unk_04 = (temp4.unk_00.unk_04 - temp5.unk_04) > 0.0f ? (temp4.unk_00.unk_04 - temp5.unk_04) : -(temp4.unk_00.unk_04 - temp5.unk_04);
            temp4.unk_00.unk_08 = (temp4.unk_00.unk_08 - temp5.unk_08) > 0.0f ? (temp4.unk_00.unk_08 - temp5.unk_08) : -(temp4.unk_00.unk_08 - temp5.unk_08);
            break;
        default:
            temp4.unk_00.unk_08 = temp4.unk_00.unk_04 = temp4.unk_00.unk_00 = 0.0f;
            break;
        }
    } else {
        temp4.unk_00.unk_08 = temp4.unk_00.unk_04 = temp4.unk_00.unk_00 = 0.0f;
    }

    arg2->unk_00 = *(unk_func_0020AC60_3 *)&temp4;
    arg2->unk_0C = 0x15;
    return arg1;
}
}
