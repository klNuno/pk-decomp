/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x14];
    s32 *unk_20;
} unk_00237780_0;

typedef struct {
    u8 pad_00[0x7C];
    u8 unk_7C;
} unk_00237780_1;

typedef union {
    s8 unk_00;
    s32 unk_04;
    f32 unk_08;
    u8 pad_0C[16];
} unk_00237780_2;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00237780_3;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
    u32 unk_10;
    u8 pad_14[4];
    u32 unk_18;
    u8 pad_1C[0x54];
} unk_00237780_4;

typedef struct {
    u8 pad_00[0x360];
    unk_00237780_4 unk_360[5];
} unk_00237780_5;

typedef struct {
    unk_00237780_3 unk_00;
    u8 pad_0C[4];
    unk_00237780_3 unk_10;
    unk_00237780_1 *unk_1C;
} unk_00237780_6;

extern unk_00237780_5 D_005AB790;
unk_00237780_0 *HIE_fn_hGetSuperObjectObject(unk_00237780_1 *);
s32 *fn_p_stEvalTree(unk_00237780_1 *, s32 *, unk_00237780_2 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, unk_00237780_1 *, unk_00237780_1 **);
s32 func_00127318(f32);
void func_0012D940(unk_00237780_1 *);
void func_0012DE60(s32);
void func_0012E130(unk_00237780_1 *);
s32 func_0012E150(unk_00237780_1 *, s32, s32, s32, s32);
void func_0012E1E0(unk_00237780_1 *);
void func_0012E2A0(unk_00237780_1 *);
void func_00139770(s32, unk_00237780_1 *, unk_00237780_3 *);
void func_00155E80(s32, unk_00237780_3 *);
void func_0016EB10(unk_00237780_4 *, unk_00237780_3 *, f32, f32, f32);
s32 func_001979C0(unk_00237780_1 *);
unk_00237780_1 *func_001A7D60(s32);
s32 func_001A7D80(void);
s32 func_001B84B0(s32);
void func_001BE240(s32, unk_00237780_1 *);
void func_001BE3F0(unk_00237780_1 *);
s32 func_001BE470(s32 *);
void func_001BE490(void *, s32);
s32 func_001EDBB0(s32, void *);

s32 *func_00237780(unk_00237780_1 *arg0, s32 *arg1) {
    unk_00237780_2 temp0;
    unk_00237780_6 temp2;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    f32 temp8;
    f32 temp9;
    f32 temp10;
    s32 temp11;
    s32 temp12;
    s32 temp13;
    s32 temp14;
    f32 temp15;
    u8 temp18;
    u8 temp17;
    s32 temp21;
    s32 temp22;
    s32 temp23;
    s32 temp24;
    s32 temp16;
    s32 temp19;
    s32 temp20;

    temp16 = arg1[-2];
    temp17 = 0xFF;
    temp18 = 4;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp16), arg0, &temp2.unk_1C);

    switch (temp16) {
    case 0x1D0:
        func_0012E1E0(temp2.unk_1C);
        func_001BE490((void *)HIE_fn_hGetSuperObjectObject(temp2.unk_1C)->unk_20,
                     func_001BE470(HIE_fn_hGetSuperObjectObject(func_001A7D60(func_001A7D80()))->unk_20));
        func_001BE240(func_001BE470(HIE_fn_hGetSuperObjectObject(temp2.unk_1C)->unk_20), temp2.unk_1C);
        return arg1;
    case 0x1CE:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp17 = temp0.unk_00;
        if (temp17 == 0) {
            temp17 = 0xFF;
            temp18 = 4;
        } else {
            temp17--;
            if (temp17 >= 4) {
                temp17 = 0;
            }
            temp18 = temp17;
        }
        /* fall through */
    case 0x1CD:
        temp19 = HIE_fn_hGetSuperObjectObject(temp2.unk_1C)->unk_08;
        func_0012E2A0(temp2.unk_1C);
        arg0->unk_7C = temp17;
        temp2.unk_1C->unk_7C = temp17;
        func_001BE3F0(temp2.unk_1C);
        temp4 = func_001979C0(temp2.unk_1C);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp5 = temp0.unk_04;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp6 = temp0.unk_04;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp7 = temp0.unk_04;
        temp8 = temp5 / 1000.0f;
        temp9 = temp6 / 1000.0f;
        temp10 = temp7 / 1000.0f;
        func_0016EB10(&D_005AB790.unk_360[temp18], &temp2.unk_00, temp8, temp9, temp10);
        func_00155E80(temp4, &temp2.unk_00);
        if (temp19 != 0) {
            temp11 = func_001B84B0(temp19);
            func_00139770(temp11, temp2.unk_1C, &temp2.unk_00);
        }
        func_0012D940(temp2.unk_1C);
        return arg1;
    case 0x1CF:
        temp20 = HIE_fn_hGetSuperObjectObject(temp2.unk_1C)->unk_08;
        func_0012E2A0(temp2.unk_1C);
        func_001BE3F0(temp2.unk_1C);
        temp12 = func_001979C0(temp2.unk_1C);
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp2.unk_10.unk_00 = temp0.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp2.unk_10.unk_04 = temp0.unk_08;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp2.unk_10.unk_08 = temp0.unk_08;
        func_00155E80(temp12, &temp2.unk_10);
        if (temp20 != 0) {
            temp13 = func_001B84B0(temp20);
            func_00139770(temp13, temp2.unk_1C, &temp2.unk_10);
        }
        func_0012D940(temp2.unk_1C);
        return arg1;
    case 0x1EA:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp14 = temp0.unk_04;
        func_0012DE60(temp14);
        return arg1;
    case 0x1D1:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp21 = temp0.unk_04;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp22 = temp0.unk_04;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp23 = temp0.unk_04;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
        temp24 = temp0.unk_04;

        temp15 = temp21 / 1000.0f;
        temp21 = func_00127318((f32)D_005AB790.unk_360[temp18].unk_10 +
                             (f32)D_005AB790.unk_360[temp18].unk_08 * temp15);
        temp15 = temp23 / 1000.0f;
        temp23 = func_00127318((f32)D_005AB790.unk_360[temp18].unk_10 +
                             (f32)D_005AB790.unk_360[temp18].unk_08 * temp15);
        temp15 = temp22 / 1000.0f;
        temp22 = func_00127318((f32)D_005AB790.unk_360[temp18].unk_18 +
                             (f32)D_005AB790.unk_360[temp18].unk_0C * temp15);
        temp15 = temp24 / 1000.0f;
        temp24 = func_00127318((f32)D_005AB790.unk_360[temp18].unk_18 +
                             (f32)D_005AB790.unk_360[temp18].unk_0C * temp15);
        temp16 = func_0012E150(temp2.unk_1C, temp21, temp22, temp23, temp24);
        return arg1;
    case 0x1D2:
        func_0012E130(temp2.unk_1C);
        return arg1;
    default:
        return (func_001EDBB0(0x27, NULL), (s32 *)(void *)arg1);
    }
}
