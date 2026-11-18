/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0020AFF0_0;

typedef union {
    unk_func_0020AFF0_0 unk_00;
    u32 unk_00_words[3];
} unk_func_0020AFF0_3;

typedef struct {
    union {
        u32 unk_00[3];
        unk_func_0020AFF0_0 unk_01;
    } unk_00;
    s32 unk_0C;
} unk_func_0020AFF0_1;

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
} unk_func_0020AFF0_2;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0020AFF0_1 *);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
u8 func_00208CC0(s32);
unk_func_0020AFF0_2 *func_001B0B00(s32, u16, s32);
void func_001EDBB0(s32, s32);
void func_001DB9F0(unk_func_0020AFF0_2 *, s32, s32, s16 *, s16 *);
void func_001DD290(unk_func_0020AFF0_2 *, unk_func_0020AFF0_0 *, s16);
void *func_001979C0(s32);
void func_001553C0(unk_func_0020AFF0_0 *, void *, unk_func_0020AFF0_0 *);

s32 *func_0020AFF0(s32 arg0, s32 *arg1, unk_func_0020AFF0_1 *arg2) {
    unk_func_0020AFF0_2 *temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    void *temp4;
    unk_func_0020AFF0_1 sp60;
    unk_func_0020AFF0_0 sp70;
    unk_func_0020AFF0_0 sp80;
    unk_func_0020AFF0_3 sp90;
    s32 spA0;
    f32 spA4;
    f32 spA8;
    f32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    s16 spBC;
    s16 spBE;

    temp2 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp2), arg0, &spA0);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp1 = sp60.unk_00.unk_00[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp3 = arg2->unk_00.unk_00[0];
    switch (temp2) {
    case 0xEA:
        temp0 = func_001B0B00(1, (u16)(temp1 - 1), spA0);
        break;
    case 0xEB:
        temp0 = func_001B0B00(2, (u16)(temp1 - 1), spA0);
        break;
    case 0xEC:
        temp0 = func_001B0B00(0, (u16)(temp1 - 1), spA0);
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    sp90.unk_00.unk_08 = sp90.unk_00.unk_04 = sp90.unk_00.unk_00 = 0.0f;
    if (temp0 != NULL) {
        switch (*temp0->unk_0C) {
        case 8:
            func_001DB9F0(temp0, 0, 0, &spBE, &spBC);
            func_001DD290(temp0, &sp70, spBE);
            func_001DD290(temp0, &sp80, spBC);
            spA4 = sp70.unk_00;
            spA8 = sp70.unk_04;
            spAC = sp70.unk_08;
            spB0 = sp80.unk_00;
            spB4 = sp80.unk_04;
            spB8 = sp80.unk_08;
            spB0 -= spA4;
            spB4 -= spA8;
            spB8 -= spAC;
            if (spB0 > spB4 && spB0 > spB8) {
                sp90.unk_00.unk_00 = 1.0f;
            }
            if (spB4 > spB0 && spB4 > spB8) {
                sp90.unk_00.unk_04 = 1.0f;
            }
            if (spB8 > spB0 && spB8 > spB4) {
                sp90.unk_00.unk_08 = 1.0f;
            }
            break;
        default:
            sp70.unk_08 = sp70.unk_04 = sp70.unk_00 = 0.0f;
            break;
        }
    } else {
        sp70.unk_08 = sp70.unk_04 = sp70.unk_00 = 0.0f;
    }
    if (temp3 == 1) {
        temp4 = func_001979C0(arg0);
        func_001553C0(&sp90.unk_00, temp4, &sp90.unk_00);
    }
    arg2->unk_00.unk_00[0] = ((u32 (*)[3])&sp90)[0][0];
    arg2->unk_00.unk_00[1] = ((u32 (*)[3])&sp90)[0][1];
    arg2->unk_00.unk_00[2] = ((u32 (*)[3])&sp90)[0][2];
    arg2->unk_0C = 0x15;
    return arg1;
}
