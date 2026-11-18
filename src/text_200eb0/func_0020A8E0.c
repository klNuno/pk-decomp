/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} unk_func_0020A8E0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0020A8E0_1;

typedef struct {
    unk_func_0020A8E0_1 unk_00;
    s32 unk_0C;
} unk_func_0020A8E0_3;

typedef struct {
    u8 pad_00[8];
    unk_func_0020A8E0_1 *unk_08;
    s16 *unk_0C;
} unk_func_0020A8E0_4;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x10];
} unk_func_0020A8E0_5;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0020A8E0_6;

void *fn_p_stEvalTree(void *, void *, unk_func_0020A8E0_5 *);
void fn_vGetUltraOperatorPerso(void *, void *, void **);
unk_func_0020A8E0_4 *func_001B0B00(s32, u16, void *);
void func_001DB9F0(unk_func_0020A8E0_4 *, void *, void *, s16 *, s16 *);
void func_001DD290(unk_func_0020A8E0_4 *, unk_func_0020A8E0_1 *, s16);
void func_001EDBB0(s32, void *);
void *func_00208CC0(s32);

void *func_0020A8E0(void *arg0, void *arg1, unk_func_0020A8E0_3 *arg2) {
    s16 temp2;
    s16 temp1;
    void *temp3;
    unk_func_0020A8E0_5 temp6;
    unk_func_0020A8E0_1 temp5;
    unk_func_0020A8E0_1 temp4;
    s32 temp7;
    s32 temp8;
    unk_func_0020A8E0_4 *temp9;

    temp7 = ((unk_func_0020A8E0_0 *)arg1)[-1].unk_00;
    fn_vGetUltraOperatorPerso(func_00208CC0(temp7), arg0, &temp3);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp6);
    temp8 = temp6.unk_00;

    switch (temp7) {
    case 0xE7:
        temp9 = func_001B0B00((s32)1, (u16)(temp8 - 1), temp3);
        break;
    case 0xE8:
        temp9 = func_001B0B00((s32)2, (u16)(temp8 - 1), temp3);
        break;
    case 0xE9:
        temp9 = func_001B0B00(0, (u16)(temp8 - 1), temp3);
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }

    if (temp9 != 0) {
        switch (*temp9->unk_0C) {
        case 7:
            ((unk_func_0020A8E0_6 *)arg2)->unk_00 = ((unk_func_0020A8E0_6 *)temp9->unk_08)->unk_00;
            ((unk_func_0020A8E0_6 *)arg2)->unk_04 = ((unk_func_0020A8E0_6 *)temp9->unk_08)->unk_04;
            ((unk_func_0020A8E0_6 *)arg2)->unk_08 = ((unk_func_0020A8E0_6 *)temp9->unk_08)->unk_08;
            arg2->unk_0C = 0x15;
            break;
        case 8:
            func_001DB9F0(temp9, 0, 0, &temp1, &temp2);
            func_001DD290(temp9, &temp5, temp1);
            func_001DD290(temp9, &temp4, temp2);
            temp5.unk_00 += temp4.unk_00;
            temp5.unk_04 += temp4.unk_04;
            temp5.unk_08 += temp4.unk_08;
            temp5.unk_00 = 0.5f * temp5.unk_00;
            temp5.unk_04 = 0.5f * temp5.unk_04;
            temp5.unk_08 = 0.5f * temp5.unk_08;
            ((unk_func_0020A8E0_6 *)arg2)->unk_00 = ((unk_func_0020A8E0_6 *)&temp5)->unk_00;
            ((unk_func_0020A8E0_6 *)arg2)->unk_04 = ((unk_func_0020A8E0_6 *)&temp5)->unk_04;
            ((unk_func_0020A8E0_6 *)arg2)->unk_08 = ((unk_func_0020A8E0_6 *)&temp5)->unk_08;
            arg2->unk_0C = 0x15;
            break;
        default:
            temp5.unk_08 = temp5.unk_04 = temp5.unk_00 = 0.0f;
            ((unk_func_0020A8E0_6 *)arg2)->unk_00 = ((unk_func_0020A8E0_6 *)&temp5)->unk_00;
            ((unk_func_0020A8E0_6 *)arg2)->unk_04 = ((unk_func_0020A8E0_6 *)&temp5)->unk_04;
            ((unk_func_0020A8E0_6 *)arg2)->unk_08 = ((unk_func_0020A8E0_6 *)&temp5)->unk_08;
            arg2->unk_0C = 0x15;
            break;
        }
    } else {
        temp5.unk_08 = temp5.unk_04 = temp5.unk_00 = 0.0f;
        ((unk_func_0020A8E0_6 *)arg2)->unk_00 = ((unk_func_0020A8E0_6 *)&temp5)->unk_00;
        ((unk_func_0020A8E0_6 *)arg2)->unk_04 = ((unk_func_0020A8E0_6 *)&temp5)->unk_04;
        ((unk_func_0020A8E0_6 *)arg2)->unk_08 = ((unk_func_0020A8E0_6 *)&temp5)->unk_08;
        arg2->unk_0C = 0x15;
    }
    return arg1;
}
