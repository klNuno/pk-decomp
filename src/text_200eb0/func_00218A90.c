/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00218A90_0;

typedef struct {
    u32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00218A90_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
} unk_func_00218A90_2;

typedef struct {
    u8 pad_00[4];
    unk_func_00218A90_2 *unk_04;
} unk_func_00218A90_3;

typedef struct {
    unk_func_00218A90_3 **unk_00;
    u8 pad_04[4];
    u8 *unk_08;
} unk_func_00218A90_4;

typedef struct {
    u8 pad_00[0xC];
    unk_func_00218A90_4 *unk_0C;
} unk_func_00218A90_5;

unk_func_00218A90_0 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00218A90_5 *fn_p_stBrainGetMind(s32);
s8 *fn_p_stEvalTree(s32, s8 *, unk_func_00218A90_1 *);
s8 *fn_p_stOperatorGetPerso(s32, s8 *, s32 *);
u8 fn_ucGetDsgVar(u8, u8, unk_func_00218A90_5 *, unk_func_00218A90_1 *);
void func_001EDBB0(s32, s32);

s8 *func_00218A90(s32 arg0, s8 *arg1, unk_func_00218A90_1 *arg2) {
    u32 temp0;
    u32 temp1;
    u32 temp2;
    u32 temp3;
    u32 temp4;
    unk_func_00218A90_5 *temp7;
    u32 temp8;
    s32 spA8;
    u32 spAC;
    u32 spB0;
    u32 spB4;
    s32 spB8;
    u8 *spBC;
    s32 spC0;
    s32 spC4;
    u32 spC8;
    u32 spCC;
    u32 spD0;
    u32 spD4;
    u8 spDF;

    spA8 = ((s32 *)arg1)[-2];
    if (((u8 *)arg1)[7] == 2) {
        arg1 += 8;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &spC4);
    } else {
        spC4 = arg0;
    }
    temp7 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(spC4)->unk_0C);
    spDF = *arg1;
    arg1 += 8;
    spB8 = (*temp7->unk_0C->unk_00)->unk_04[spDF].unk_04;
    spBC = (*temp7->unk_0C->unk_00)->unk_04[spDF].unk_00 + temp7->unk_0C->unk_08;
    spC0 = spBC[4];
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    spAC = arg2->unk_00;
    spAC--;
    spB0 = spAC >> 5;
    spB4 = spAC & 0x1F;
    arg2->unk_00 = 0;
    arg2->unk_0C = 6;
    switch (spA8) {
    case 0x142:
        if (fn_ucGetDsgVar(spDF, (u8)spB0, temp7, arg2) == 1) {
            spC8 = arg2->unk_00;
            arg2->unk_00 = (spC8 & (1U << spB4)) ? 1 : 0;
            arg2->unk_0C = 6;
        }
        break;
    case 0x143:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        spCC = arg2->unk_00;
        spCC--;
        temp8 = spCC >> 5;
        spD0 = spCC & 0x1F;
        temp3 = 0;
        for (temp4 = spB0; temp4 <= temp8; temp4++) {
            if (fn_ucGetDsgVar(spDF, (u8)temp4, temp7, arg2) == 1) {
                temp1 = arg2->unk_00;
                spD4 = temp4 == spB0 ? spB4 : 0;
                temp2 = temp4 == temp8 ? spD0 : 0x1F;
                for (temp0 = spD4; temp0 <= temp2; temp0++) {
                    if (temp1 & (1U << temp0)) {
                        temp3++;
                    }
                }
            }
        }
        arg2->unk_00 = temp3;
        arg2->unk_0C = 6;
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    return arg1;
}
