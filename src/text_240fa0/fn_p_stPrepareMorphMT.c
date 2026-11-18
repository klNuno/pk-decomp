/* profile: o0_301_p */
#include "common.h"

typedef struct unk_fn_p_stPrepareMorphMT_0 {
    s8 unk_00;
    u8 pad_01[6];
    u8 unk_07;
} unk_fn_p_stPrepareMorphMT_0;

typedef union unk_fn_p_stPrepareMorphMT_1 {
    s16 unk_00;
    s32 unk_00_s32;
    u8 unk_00_u8;
    s8 unk_00_s8;
} unk_fn_p_stPrepareMorphMT_1;

typedef struct unk_fn_p_stPrepareMorphMT_2 {
    unk_fn_p_stPrepareMorphMT_1 unk_00;
    u8 pad_04[0xC];
} unk_fn_p_stPrepareMorphMT_2;

typedef struct unk_fn_p_stPrepareMorphMT_3 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_fn_p_stPrepareMorphMT_3;

typedef struct unk_fn_p_stPrepareMorphMT_4 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_fn_p_stPrepareMorphMT_4;

typedef struct unk_fn_p_stPrepareMorphMT_5 {
    u8 pad_00[4];
    unk_fn_p_stPrepareMorphMT_4 *unk_04;
} unk_fn_p_stPrepareMorphMT_5;

typedef struct unk_fn_p_stPrepareMorphMT_6 {
    unk_fn_p_stPrepareMorphMT_5 **unk_00;
    u8 pad_04[4];
    u8 *unk_08;
} unk_fn_p_stPrepareMorphMT_6;

typedef struct unk_fn_p_stPrepareMorphMT_7 {
    u8 pad_00[0xC];
    unk_fn_p_stPrepareMorphMT_6 *unk_0C;
} unk_fn_p_stPrepareMorphMT_7;

typedef struct {
    s16 unk_00;
    u8 pad_02;
    u8 unk_03;
} unk_fn_p_stPrepareMorphMT_8;

u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
unk_fn_p_stPrepareMorphMT_0 *fn_p_stEvalTree(s32, unk_fn_p_stPrepareMorphMT_0 *, unk_fn_p_stPrepareMorphMT_2 *);
unk_fn_p_stPrepareMorphMT_0 *fn_p_stOperatorGetPerso(s32, unk_fn_p_stPrepareMorphMT_0 *, s32 *);
unk_fn_p_stPrepareMorphMT_3 *HIE_fn_hGetSuperObjectObject(s32);
unk_fn_p_stPrepareMorphMT_7 *fn_p_stBrainGetMind(s32);
u8 fn_ucGetDsgVar(u8, u8, unk_fn_p_stPrepareMorphMT_7 *, unk_fn_p_stPrepareMorphMT_2 *);
s16 MOR_fn_xPrepareMorph(s32, s16, s16 *, u8, s32, f32 *, f32 *, u8, s16);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034E870[];
extern char D_0034E880[];
extern u8 D_0035F588;

unk_fn_p_stPrepareMorphMT_0 *fn_p_stPrepareMorphMT(s32 arg0, unk_fn_p_stPrepareMorphMT_0 *arg1)
{
    s16 temp0[16];
    f32 temp1[12];
    f32 temp2[12];
    unk_fn_p_stPrepareMorphMT_2 temp3;
    unk_fn_p_stPrepareMorphMT_2 temp4;
    unk_fn_p_stPrepareMorphMT_2 temp5;
    unk_fn_p_stPrepareMorphMT_2 temp6;
    unk_fn_p_stPrepareMorphMT_2 temp7;
    volatile s32 temp8;
    unk_fn_p_stPrepareMorphMT_1 temp9;
    unk_fn_p_stPrepareMorphMT_1 temp10;
    s32 temp11;
    s32 temp12;
    s32 temp13;
    unk_fn_p_stPrepareMorphMT_8 temp25;
    s16 temp16;
    u8 temp17;
    unk_fn_p_stPrepareMorphMT_7 *temp18;
    u8 temp19;
    u8 temp20;
    u8 *temp21;
    u8 *temp22;
    s16 temp23;
    s32 temp24;

    temp8 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp8), arg0, &temp11);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp3);
    if (arg1->unk_07 == 2) {
        arg1++;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &temp12);
    } else {
        temp12 = arg0;
    }
    temp18 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp12)->unk_0C);
    temp19 = (u8)arg1->unk_00;
    arg1++;
    if (arg1->unk_07 == 2) {
        arg1++;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &temp13);
    } else {
        temp13 = arg0;
    }
    temp18 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp13)->unk_0C);
    temp20 = (u8)arg1->unk_00;
    arg1++;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp4);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp5);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp6);
    temp21 = temp18->unk_0C->unk_08 + (*temp18->unk_0C->unk_00)->unk_04[temp19].unk_00;
    temp9.unk_00_s32 = temp21[4];
    temp22 = temp18->unk_0C->unk_08 + (*temp18->unk_0C->unk_00)->unk_04[temp20].unk_00;
    temp10.unk_00_s32 = temp22[4];
    temp23 = temp3.unk_00.unk_00;
    temp24 = temp4.unk_00.unk_00_s32;
    temp25.unk_03 = temp5.unk_00.unk_00_s8;
    temp25.unk_00 = temp6.unk_00.unk_00;
    temp17 = temp9.unk_00_u8;
    if (temp17 > 10) {
        temp17 = 10;
    }
    for (temp16 = 0; temp16 < temp17; ++temp16) {
        temp1[temp16] = 0.0f;
        if (fn_ucGetDsgVar(temp19, temp16, temp18, &temp7) == 1) {
            temp0[temp16] = temp7.unk_00.unk_00;
        }
        if (fn_ucGetDsgVar(temp20, temp16, temp18, &temp7) == 1) {
            temp2[temp16] = 0.01f * temp7.unk_00.unk_00_s32;
        }
    }
    if (MOR_fn_xPrepareMorph(arg0, temp23, temp0, temp17, temp24, temp1, temp2, temp25.unk_03, temp25.unk_00) == -1) {
        Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, 0x4D, -1, 0xFF, 0, D_0034E880, D_0034E870, 0xCB);
        Erm_fn_ClearLastError(0, D_0034E870, 0xCB);
    }
    return arg1;
}
