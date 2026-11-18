/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_00228EB0_0;

typedef struct {
    union {
        s8 unk_00;
        u8 unk_00_u8;
        unk_func_00228EB0_0 unk_00_vec;
    } unk_00;
    u8 pad_0C[0xC];
} unk_func_00228EB0_1;

typedef struct unk_func_00228EB0_2 {
    u8 pad_00[0x14];
    struct unk_func_00228EB0_2 *unk_14;
} unk_func_00228EB0_2;

typedef struct {
    u8 pad_00[8];
    unk_func_00228EB0_2 *unk_08;
} unk_func_00228EB0_3;

typedef struct {
    u8 pad_00[0xA8];
    u32 unk_A8;
} unk_func_00228EB0_4;

extern unk_func_00228EB0_4 **HIE_fn_hGetSuperObjectObject(unk_func_00228EB0_3 *);
extern s32 *fn_p_stEvalTree(unk_func_00228EB0_3 *, s32 *, unk_func_00228EB0_1 *);
extern s32 fn_ucGetProcedureUltraOperator(s32);
extern void fn_vGetUltraOperatorPerso(s32, unk_func_00228EB0_3 *, unk_func_00228EB0_3 **);
extern void func_0012D450(unk_func_00228EB0_2 *);
extern void func_0012DAE0(unk_func_00228EB0_3 *);
extern void func_00155810(unk_func_00228EB0_0 *, s32, unk_func_00228EB0_0 *);
extern void func_00155E80(s32, unk_func_00228EB0_0 *);
extern void func_00155EC0(s32, unk_func_00228EB0_0 *);
extern s32 func_001979C0(unk_func_00228EB0_3 *);
extern s32 func_0019C730(unk_func_00228EB0_4 *);
extern unk_func_00228EB0_3 *func_001ACF40(s32, s32);
extern s32 *func_001EB720(s32 *);
extern void func_00227E60(s32, unk_func_00228EB0_0 *, unk_func_00228EB0_0 *, s32);
extern void func_00228E20(unk_func_00228EB0_3 *, s32, unk_func_00228EB0_0 *, u8);
extern void func_002293C0(unk_func_00228EB0_4 *);
extern s8 func_002293E0(unk_func_00228EB0_3 *);

s32 *func_00228EB0(unk_func_00228EB0_3 *arg0, s32 *arg1) {
    unk_func_00228EB0_2 *temp0, *temp1;
    u8 temp2, temp3;
    s32 temp4;
    s16 temp5;
    s32 temp6;
    unk_func_00228EB0_3 *temp7, *temp8;
    unk_func_00228EB0_1 temp9;
    unk_func_00228EB0_0 temp10, temp11, temp12, temp13, temp14;
    unk_func_00228EB0_3 *temp15;
    unk_func_00228EB0_4 *temp16;
    s32 temp17;
    unk_func_00228EB0_0 *temp18;
    unk_func_00228EB0_2 *temp19;
    u8 temp20;
    u8 temp21;
    s8 temp22;

    temp6 = arg1[-2];
    temp15 = arg0;
    temp7 = NULL;
    temp8 = arg0;
    temp2 = 0xFF;
    temp20 = 0;
    temp3 = 0;
    temp21 = 1;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp6), arg0, &temp15);
    temp8 = temp15;
    switch (temp6) {
    case 0x100:
    case 0x101:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp9);
        temp2 = temp9.unk_00.unk_00;
        if (temp2 == 0xFF) {
            return func_001EB720(arg1);
        }
        temp16 = *HIE_fn_hGetSuperObjectObject(temp15);
        if ((u32)temp2 > temp16->unk_A8) {
            temp7 = NULL;
        } else {
            temp7 = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(temp15)), temp2);
        }
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp9);
        temp21 = temp9.unk_00.unk_00;
        temp3 |= (u8)(temp6 == 0x101);
    case 0xC0:
    case 0xC1:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp9);
        temp10 = temp9.unk_00.unk_00_vec;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp9);
        temp11 = temp9.unk_00.unk_00_vec;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp9);
        temp20 = temp9.unk_00.unk_00_u8;
        temp3 |= (u8)(temp6 == 0xC1);
        if (temp3) {
            arg1 = fn_p_stEvalTree(arg0, arg1, &temp9);
            temp12 = temp9.unk_00.unk_00_vec;
        }
        break;
    default:
        return arg1;
    }
    func_0012DAE0(temp15);
    if (temp2 != 0xFF) {
        if (!temp21) {
            temp17 = func_001979C0(temp15);
            func_00155810(&temp10, temp17, &temp10);
            func_00155810(&temp11, temp17, &temp11);
        }
        if (temp7 != NULL) {
            if (temp15 == arg0) {
                temp22 = func_002293E0(temp15);
            } else {
                temp22 = 1;
            }
            temp15 = temp7;
        }
    }
    temp4 = func_001979C0(temp15);
    if (temp3) {
        func_00155810(&temp13, temp4, &temp12);
    }
    func_00227E60(temp4, &temp10, &temp11, temp20);
    if (temp3) {
        func_00155810(&temp14, temp4, &temp12);
        temp13.unk_00 -= temp14.unk_00;
        temp13.unk_04 -= temp14.unk_04;
        temp13.unk_08 -= temp14.unk_08;
        func_00155EC0(temp4, &temp12);
        temp12.unk_00 += temp13.unk_00;
        temp12.unk_04 += temp13.unk_04;
        temp12.unk_08 += temp13.unk_08;
        func_00155E80(temp4, &temp12);
    }
    if (temp3) {
        temp18 = &temp12;
    } else {
        temp18 = NULL;
    }
    func_00228E20(temp15, temp4, temp18, temp2 == 0xFF);
    temp5 = 0;
    temp19 = temp0 = temp15->unk_08;
    while (temp0 != NULL) {
        func_0012D450(temp0);
        temp5++;
        temp1 = temp0 = temp0->unk_14;
        (void)temp1;
    }
    if (temp2 != 0xFF) {
        func_002293C0(*HIE_fn_hGetSuperObjectObject(temp8));
    }
    return arg1;
}
