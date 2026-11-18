/* profile: o0_301 */
#include "common.h"

typedef struct {
    s8 unk_00;
    u8 pad_01[6];
    u8 unk_07;
} unk_0024D150_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
} unk_0024D150_9;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_0024D150_1;

typedef struct {
    u8 pad_00[4];
    unk_0024D150_1 *unk_04;
} unk_0024D150_2;

typedef struct {
    u8 pad_00[0xC];
    void *unk_0C;
    unk_0024D150_2 *unk_10;
} unk_0024D150_3;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
} unk_0024D150_4;

typedef struct {
    u8 pad_00[4];
    unk_0024D150_4 *unk_04;
} unk_0024D150_5;

typedef struct {
    unk_0024D150_5 **unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_0024D150_6;

typedef struct {
    u8 pad_00[0xC];
    unk_0024D150_6 *unk_0C;
} unk_0024D150_7;

typedef struct {
    s32 unk_00[20];
    s32 unk_50[20];
    s32 unk_A0[10];
    s32 unk_C8[5];
    s32 unk_DC[10];
    u8 pad_104[0x224];
} unk_0024D150_8;

extern unk_0024D150_2 *D_003601D8;
extern unk_0024D150_8 D_006173A0[];
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
unk_0024D150_3 *HIE_fn_hGetSuperObjectObject(s32);
unk_0024D150_0 *fn_p_stEvalTree(s32, unk_0024D150_0 *, u8 *);
unk_0024D150_0 *fn_p_stOperatorGetPerso(s32, unk_0024D150_0 *, s32 *);
unk_0024D150_7 *fn_p_stBrainGetMind(void *);

unk_0024D150_0 *func_0024D150(s32 arg0, unk_0024D150_0 *arg1)
{
    u8 temp_70[0x18];
    s32 temp_88;
    s32 temp_8C;
    unk_0024D150_7 *temp_0;
    u8 temp_1;
    unk_0024D150_8 *temp_2;
    u8 temp_3;
    s32 temp_4;
    s32 temp_5;

    temp_4 = ((unk_0024D150_9 *)arg1)[-1].unk_00;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_4), arg0, &temp_88);
    D_003601D8 = HIE_fn_hGetSuperObjectObject(temp_88)->unk_10;
    temp_2 = &D_006173A0[D_003601D8->unk_04->unk_74];
    arg1 = fn_p_stEvalTree(arg0, arg1, temp_70);
    temp_1 = temp_70[0];
    if (arg1->unk_07 == 2) {
        arg1++;
        arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &temp_8C);
    } else {
        temp_8C = arg0;
    }
    temp_0 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp_8C)->unk_0C);
    temp_3 = arg1->unk_00;
    arg1++;
    temp_5 = (*temp_0->unk_0C->unk_00)->unk_04[temp_3].unk_04;
    (void)temp_5;
    switch (temp_4) {
    case 0x26D:
        if (temp_1 >= 0 && temp_1 < 20) {
            temp_2->unk_00[temp_1] = temp_0->unk_0C->unk_08 + (*temp_0->unk_0C->unk_00)->unk_04[temp_3].unk_00;
        }
        break;
    case 0x26F:
        if (temp_1 >= 0 && temp_1 < 10) {
            temp_2->unk_DC[temp_1] = temp_0->unk_0C->unk_08 + (*temp_0->unk_0C->unk_00)->unk_04[temp_3].unk_00;
        }
        break;
    case 0x270:
        if (temp_1 >= 0 && temp_1 < 10) {
            temp_2->unk_A0[temp_1] = temp_0->unk_0C->unk_08 + (*temp_0->unk_0C->unk_00)->unk_04[temp_3].unk_00;
        }
        break;
    case 0x271:
        if (temp_1 >= 0 && temp_1 < 5) {
            temp_2->unk_C8[temp_1] = temp_0->unk_0C->unk_08 + (*temp_0->unk_0C->unk_00)->unk_04[temp_3].unk_00;
        }
        break;
    case 0x26E:
        if (temp_1 >= 0 && temp_1 < 20) {
            temp_2->unk_50[temp_1] = temp_0->unk_0C->unk_08 + (*temp_0->unk_0C->unk_00)->unk_04[temp_3].unk_00;
        }
        break;
    }
    return arg1;
}
