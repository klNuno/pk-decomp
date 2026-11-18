/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_00244790_0;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} unk_00244790_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_00244790_2;

typedef struct {
    u8 pad_00[0x34];
    s32 unk_34;
    s32 unk_38;
    f32 unk_3C;
    u8 pad_40[0x18];
    f32 unk_58;
    f32 unk_5C;
    f32 unk_60;
} unk_00244790_3;

typedef struct {
    s8 unk_00;
    u8 pad_01[7];
    void *unk_08;
    unk_00244790_1 *unk_0C;
    unk_00244790_1 *unk_10;
    s32 unk_14;
    u8 pad_18[4];
    u8 unk_1C;
    u8 unk_1D;
    u8 pad_1E[2];
    f32 unk_20;
    s32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    u8 pad_34[0x1450];
    u8 unk_1484;
    u8 pad_1485[3];
    s32 unk_1488;
    s32 unk_148C;
    u16 unk_1490;
    u8 pad_1492[2];
    s32 unk_1494;
    s32 unk_1498;
    s32 unk_149C;
    s32 unk_14A0;
    u8 pad_14A4[8];
    s32 unk_14AC;
    u8 pad_14B0[4];
    s32 unk_14B4;
} unk_00244790_4;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_00244790_5;

extern unk_00244790_0 *D_00617310[];
extern s32 D_005AB800[];
unk_00244790_4 *func_002461B0(void *);
unk_00244790_4 *func_00246280(void *);
void func_00246630(unk_00244790_4 *, s32, s32);
unk_00244790_1 *fn_h_StandardGameGetSuperObject(s32);
s32 fn_p_stEvalTree(void *, s32, unk_00244790_0 **);
unk_00244790_2 *func_00155EE0(void *);

s32 func_00244790(void *arg0, s32 arg1, unk_00244790_5 *arg2)
{
    unk_00244790_4 *temp;
    u8 unk_01;
    u16 unk_02;
    unk_00244790_4 *unk_03;
    unk_00244790_1 *unk_04;
    unk_00244790_0 *unk_06[4];

    temp = func_002461B0(arg0);
    if (temp != NULL) {
        arg1 = fn_p_stEvalTree(arg0, arg1, unk_06);
        temp->unk_0C = fn_h_StandardGameGetSuperObject(unk_06[0]->unk_04);
        arg1 = fn_p_stEvalTree(arg0, arg1, unk_06);
        temp->unk_10 = fn_h_StandardGameGetSuperObject(unk_06[0]->unk_04);
        arg1 = fn_p_stEvalTree(arg0, arg1, unk_06);
        unk_04 = fn_h_StandardGameGetSuperObject(unk_06[0]->unk_04);
        if (unk_04 != NULL && unk_04 != arg0) {
            temp->unk_14 = 1;
            unk_03 = func_00246280(unk_04);
            if (unk_03 != NULL) {
                temp->unk_00 = unk_03->unk_00;
                unk_03->unk_08 = arg0;
            }
        } else {
            temp->unk_14 = 0;
        }
        for (unk_01 = 0; unk_01 < 3; unk_01++) {
            arg1 = fn_p_stEvalTree(arg0, arg1, unk_06);
            D_00617310[unk_01] = unk_06[0];
        }

        temp->unk_2C = 0.7f;
        temp->unk_1C = unk_02 = 2;
        ((unk_00244790_2 *)((u8 *)temp + 0x34))->unk_00 = func_00155EE0(temp->unk_0C->unk_24)->unk_00;
        ((unk_00244790_2 *)((u8 *)temp + 0x34))->unk_04 = func_00155EE0(temp->unk_0C->unk_24)->unk_04;
        ((unk_00244790_2 *)((u8 *)temp + 0x34))->unk_08 = func_00155EE0(temp->unk_0C->unk_24)->unk_08;
        ((unk_00244790_3 *)temp)->unk_3C += 1.2f;
        ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x34))->unk_00 = func_00155EE0(temp->unk_10->unk_24)->unk_00;
        ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x34))->unk_04 = func_00155EE0(temp->unk_10->unk_24)->unk_04;
        ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x34))->unk_08 = func_00155EE0(temp->unk_10->unk_24)->unk_08;
        ((unk_00244790_3 *)((u8 *)temp + (unk_02 - 1) * 0x34))->unk_3C += 0.05f;

        temp->unk_24 = 0;
        temp->unk_28 = 30.0f;
        temp->unk_20 = 100.0f;
        temp->unk_30 = 1.0f;
        temp->unk_1D = 1;
        temp->unk_1488 = 0xA6;
        temp->unk_148C = 0x7D0;
        temp->unk_14AC = 0;
        temp->unk_1490 = 0;
        temp->unk_149C = temp->unk_14A0 = D_005AB800[0];
        func_00246630(temp, 0, 0);
        for (unk_01 = 0; unk_01 < 0x32; unk_01++) {
            ((unk_00244790_3 *)((u8 *)temp + unk_01 * 0x34))->unk_60 =
                ((unk_00244790_3 *)((u8 *)temp + unk_01 * 0x34))->unk_5C =
                ((unk_00244790_3 *)((u8 *)temp + unk_01 * 0x34))->unk_58 = 0.0f;
        }
        ((unk_00244790_2 *)((u8 *)temp + 0x58))->unk_00 =
            ((unk_00244790_2 *)((u8 *)temp + 0x34))->unk_00;
        ((unk_00244790_2 *)((u8 *)temp + 0x58))->unk_04 =
            ((unk_00244790_2 *)((u8 *)temp + 0x34))->unk_04;
        ((unk_00244790_2 *)((u8 *)temp + 0x58))->unk_08 =
            ((unk_00244790_2 *)((u8 *)temp + 0x34))->unk_08;
        ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x58))->unk_00 =
            ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x34))->unk_00;
        ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x58))->unk_04 =
            ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x34))->unk_04;
        ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x58))->unk_08 =
            ((unk_00244790_2 *)((u8 *)temp + (unk_02 - 1) * 0x34 + 0x34))->unk_08;
        temp->unk_1498 = 0;
        temp->unk_1494 = temp->unk_14 ? 1 : 0;
        temp->unk_1484 = 0;
        temp->unk_14B4 = 1;
        arg2->unk_00 = 1;
        arg2->unk_0C = 6;
        return arg1;
    }
    arg2->unk_00 = 0;
    arg2->unk_0C = 6;
    return arg1;
}
