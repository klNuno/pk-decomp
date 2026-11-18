/* profile: o0_301_p */
#include "common.h"

typedef struct unk_fn_p_stMorphingMT_0 {
    s8 unk_00;
    u8 pad_01[6];
    u8 unk_07;
} unk_fn_p_stMorphingMT_0;

typedef union unk_fn_p_stMorphingMT_1 {
    s16 unk_00;
    s32 unk_00_s32;
    u8 unk_00_u8;
} unk_fn_p_stMorphingMT_1;

typedef struct unk_fn_p_stMorphingMT_2 {
    unk_fn_p_stMorphingMT_1 unk_00;
    u8 pad_04[0xC];
} unk_fn_p_stMorphingMT_2;

typedef struct unk_fn_p_stMorphingMT_3 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_fn_p_stMorphingMT_3;

typedef struct unk_fn_p_stMorphingMT_4 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_fn_p_stMorphingMT_4;

typedef struct unk_fn_p_stMorphingMT_5 {
    u8 pad_00[4];
    unk_fn_p_stMorphingMT_4 *unk_04;
} unk_fn_p_stMorphingMT_5;

typedef struct unk_fn_p_stMorphingMT_6 {
    unk_fn_p_stMorphingMT_5 **unk_00;
    u8 pad_04[4];
    u8 *unk_08;
} unk_fn_p_stMorphingMT_6;

typedef struct unk_fn_p_stMorphingMT_7 {
    u8 pad_00[0xC];
    unk_fn_p_stMorphingMT_6 *unk_0C;
} unk_fn_p_stMorphingMT_7;

u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
unk_fn_p_stMorphingMT_0 *fn_p_stEvalTree(s32, unk_fn_p_stMorphingMT_0 *, unk_fn_p_stMorphingMT_2 *);
unk_fn_p_stMorphingMT_0 *fn_p_stOperatorGetPerso(s32, unk_fn_p_stMorphingMT_0 *, s32 *);
unk_fn_p_stMorphingMT_3 *HIE_fn_hGetSuperObjectObject(s32);
unk_fn_p_stMorphingMT_7 *fn_p_stBrainGetMind(s32);
u8 fn_ucGetDsgVar(u8, u8, unk_fn_p_stMorphingMT_7 *, unk_fn_p_stMorphingMT_2 *);
s16 MOR_fn_xMorphing(s32, s16, s16 *, u8, f32 *, s16, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034E870[];
extern char D_0034E8A0[];
extern u8 D_0035F588;

unk_fn_p_stMorphingMT_0 *fn_p_stMorphingMT(s32 arg0, unk_fn_p_stMorphingMT_0 *arg1) {
    s16 spB0[16];
    f32 spD0[12];
    unk_fn_p_stMorphingMT_2 sp100;
    unk_fn_p_stMorphingMT_2 sp110;
    unk_fn_p_stMorphingMT_2 sp120;
    unk_fn_p_stMorphingMT_1 sp138;
    unk_fn_p_stMorphingMT_1 sp13C;
    volatile s32 sp140;
    s32 sp144;
    s32 sp148;
    s32 sp14C;
    u8 i;
    u8 count;
    unk_fn_p_stMorphingMT_7 *temp_s2;
    unk_fn_p_stMorphingMT_7 *temp_s3;
    u8 temp_s4;
    u8 temp_s5;
    u8 *temp_s6;
    s16 temp_s7;
    s16 temp_fp;

    sp140 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(sp140), arg0, &sp144);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp100);
    if (arg1->unk_07 == 2) {
        arg1++;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &sp148);
    } else {
        sp148 = arg0;
    }
    temp_s2 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(sp148)->unk_0C);
    temp_s4 = (u8)arg1->unk_00;
    arg1++;
    if (arg1->unk_07 == 2) {
        arg1++;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &sp14C);
    } else {
        sp14C = arg0;
    }
    temp_s3 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(sp14C)->unk_0C);
    temp_s5 = (u8)arg1->unk_00;
    arg1++;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp110);
    temp_s6 = temp_s2->unk_0C->unk_08 + (*temp_s2->unk_0C->unk_00)->unk_04[temp_s4].unk_00;
    sp138.unk_00_s32 = temp_s6[4];
    temp_s6 = temp_s3->unk_0C->unk_08 + (*temp_s3->unk_0C->unk_00)->unk_04[temp_s5].unk_00;
    sp13C.unk_00_s32 = temp_s6[4];
    temp_s7 = sp100.unk_00.unk_00 - 1;
    temp_fp = sp110.unk_00.unk_00;
    count = sp138.unk_00_u8;
    if (count > 10) {
        count = 10;
    }
    for (i = 0; i < count; i++) {
        if (fn_ucGetDsgVar(temp_s4, i, temp_s2, &sp120) == 1) {
            spB0[i] = sp120.unk_00.unk_00 - 1;
        }
        if (fn_ucGetDsgVar(temp_s5, i, temp_s3, &sp120) == 1) {
            spD0[i] = 0.01f * sp120.unk_00.unk_00_s32;
        }
    }
    if (MOR_fn_xMorphing(arg0, temp_s7, spB0, count, spD0, temp_fp, 2) == -1) {
        Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, 0x4D, -1, 0xFF, 0, D_0034E8A0, D_0034E870, 0x1A2);
        Erm_fn_ClearLastError(0, D_0034E870, 0x1A2);
    }
    return arg1;
}
