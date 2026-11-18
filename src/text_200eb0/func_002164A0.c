/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_002164A0_0;

typedef struct {
    unk_002164A0_0 unk_00;
    s32 unk_0C;
} unk_002164A0_1;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_002164A0_2;

extern unk_002164A0_1 D_006053F0;
extern unk_002164A0_1 D_006053E0;
extern unk_002164A0_1 D_006053D0;
extern unk_002164A0_1 D_006053C0;
extern s32 D_005AB800[];
extern s32 D_00360100;
extern s32 D_00360164;
extern s32 D_0035F594;
extern s32 D_00360168;
extern s32 D_00360180;
extern s32 D_0035F598;
extern s32 D_00360184;

s8 *fn_p_stEvalTree(s32, s8 *, unk_002164A0_1 *);
void func_00209E50(s32);
u16 func_00162330(s32);
s8 *fn_p_stOperatorGetPerso(s32, s8 *, s32 *);
unk_002164A0_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
u8 func_001EA0D0(u8, u8, s32, unk_002164A0_1 *);
s32 func_001971C0(s32);

s8 *func_002164A0(s32 arg0, s8 *arg1, unk_002164A0_1 *arg2)
{
    unk_002164A0_1 temp0;
    unk_002164A0_1 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    u8 temp6;
    s32 temp7;
    unk_002164A0_0 *temp8;
    unk_002164A0_0 *temp9;
    s32 temp10;
    s32 temp11;
    s32 temp12;
    s32 temp13;

    temp10 = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
    temp8 = &temp0.unk_00;
    ((unk_002164A0_0 *)(void *)&D_006053F0)->unk_00 = temp8->unk_00;
    ((unk_002164A0_0 *)(void *)&D_006053F0)->unk_04 = temp8->unk_04;
    ((unk_002164A0_0 *)(void *)&D_006053F0)->unk_08 = temp8->unk_08;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
    temp9 = &temp0.unk_00;
    ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_00 = temp9->unk_00;
    ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_04 = temp9->unk_04;
    ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_08 = temp9->unk_08;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
    temp13 = temp0.unk_00.unk_00;
    ((unk_002164A0_0 *)(void *)&temp1)->unk_00 = ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_00;
    ((unk_002164A0_0 *)(void *)&temp1)->unk_04 = ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_04;
    ((unk_002164A0_0 *)(void *)&temp1)->unk_08 = ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_08;
    D_00360100 = 0;
    D_00360164 = D_005AB800[0];
    D_0035F594 = temp13;
    D_00360168 = 1;
    func_00209E50(arg0);
    ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_00 = ((unk_002164A0_0 *)(void *)&temp1)->unk_00;
    ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_04 = ((unk_002164A0_0 *)(void *)&temp1)->unk_04;
    ((unk_002164A0_0 *)(void *)&D_006053E0)->unk_08 = ((unk_002164A0_0 *)(void *)&temp1)->unk_08;
    D_00360100 = 0;
    if (D_00360180 != 0 && D_00360180 != -1) {
        temp10 = func_00162330(D_00360180);
    } else {
        temp10 = 0;
    }
    D_0035F598 = 0x40;

    if (((u8 *)arg1)[7] == 2) {
        arg1 += 8;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &temp2);
    } else {
        temp2 = arg0;
    }
    temp7 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp2)->unk_0C);
    temp6 = *arg1;
    arg1 += 8;
    temp0.unk_00.unk_00 = temp10;
    temp0.unk_0C = 0x1A;
    temp6 = func_001EA0D0(temp6, 0, temp7, &temp0);

    if (((u8 *)arg1)[7] == 2) {
        arg1 += 8;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &temp3);
    } else {
        temp3 = arg0;
    }
    temp7 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp3)->unk_0C);
    temp6 = *arg1;
    arg1 += 8;
    ((unk_002164A0_0 *)(void *)&temp0)->unk_00 = ((unk_002164A0_0 *)(void *)&D_006053D0)->unk_00;
    ((unk_002164A0_0 *)(void *)&temp0)->unk_04 = ((unk_002164A0_0 *)(void *)&D_006053D0)->unk_04;
    ((unk_002164A0_0 *)(void *)&temp0)->unk_08 = ((unk_002164A0_0 *)(void *)&D_006053D0)->unk_08;
    temp0.unk_0C = 0x15;
    temp6 = func_001EA0D0(temp6, 0, temp7, &temp0);

    if (((u8 *)arg1)[7] == 2) {
        arg1 += 8;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &temp4);
    } else {
        temp4 = arg0;
    }
    temp7 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp4)->unk_0C);
    temp6 = *arg1;
    arg1 += 8;
    ((unk_002164A0_0 *)(void *)&temp0)->unk_00 = ((unk_002164A0_0 *)(void *)&D_006053C0)->unk_00;
    ((unk_002164A0_0 *)(void *)&temp0)->unk_04 = ((unk_002164A0_0 *)(void *)&D_006053C0)->unk_04;
    ((unk_002164A0_0 *)(void *)&temp0)->unk_08 = ((unk_002164A0_0 *)(void *)&D_006053C0)->unk_08;
    temp0.unk_0C = 0x15;
    temp6 = func_001EA0D0(temp6, 0, temp7, &temp0);

    if (((u8 *)arg1)[7] == 2) {
        arg1 += 8;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &temp5);
    } else {
        temp5 = arg0;
    }
    temp7 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp5)->unk_0C);
    temp6 = *arg1;
    arg1 += 8;
    if (D_00360184 == 0) {
        temp11 = 0;
    } else {
        if (func_001971C0(D_00360184) != 2) {
            temp12 = 0;
        } else {
            temp12 = (s32)HIE_fn_hGetSuperObjectObject(D_00360184);
        }
        temp11 = temp12;
    }
    temp0.unk_00.unk_00 = temp11;
    temp0.unk_0C = 0xB;
    temp6 = func_001EA0D0(temp6, 0, temp7, &temp0);
    arg2->unk_00.unk_00 = D_00360184 != 0;
    arg2->unk_0C = 6;
    return arg1;
}
