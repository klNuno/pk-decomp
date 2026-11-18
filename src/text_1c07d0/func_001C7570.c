/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001C7570_0;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_001C7570_1;

typedef struct {
    u8 pad_00[0x127];
    u8 unk_127;
} unk_001C7570_2;

typedef struct {
    u8 pad_00[0x50];
    void *unk_50;
} unk_001C7570_3;

extern u32 D_005AB848[];
extern f32 D_005DFA48[];
extern f32 D_005DFA4C[];
extern f32 D_005DFA50[];

unk_001C7570_2 **HIE_fn_hGetSuperObjectObject(s32);
unk_001C7570_3 *func_00197860(unk_001C7570_2 *);
u32 func_001A70C0(unk_001C7570_2 *);
u16 func_001C03C0(unk_001C7570_2 *);
unk_001C7570_0 *func_001CC7F0(void *, u16);

unk_001C7570_0 *func_001C7570(s32 arg0, s16 arg1)
{
    unk_001C7570_0 *temp0;
    s32 temp1;
    unk_001C7570_2 *temp2;
    void *temp3;
    s32 temp7;
    s32 temp4;
    unk_001C7570_3 *temp5;
    f32 temp6;

    temp2 = *HIE_fn_hGetSuperObjectObject(arg0);
    temp5 = func_00197860(temp2);
    temp3 = temp5->unk_50;
    if (temp3 != NULL) {
        if (temp2->unk_127) {
            D_005DFA50[0] = D_005DFA4C[0] = D_005DFA48[0] = 0.0f;
            for (temp1 = arg1 + 1; func_001C03C0(temp2) >= temp1; temp1++) {
                temp0 = func_001CC7F0(temp3, (u16)temp1);
                if (temp0 != NULL) {
                    D_005DFA48[0] += temp0->unk_00;
                    D_005DFA4C[0] += temp0->unk_04;
                    D_005DFA50[0] += temp0->unk_08;
                }
            }
            D_005DFA48[0] = (1.0f / ((f32)D_005AB848[0] / 1000.0f)) * D_005DFA48[0];
            D_005DFA4C[0] = (1.0f / ((f32)D_005AB848[0] / 1000.0f)) * D_005DFA4C[0];
            D_005DFA50[0] = (1.0f / ((f32)D_005AB848[0] / 1000.0f)) * D_005DFA50[0];
        } else {
            temp4 = 1;
            temp0 = func_001CC7F0(temp3, func_001C03C0(temp2));
            if (temp0 != NULL) {
                ((unk_001C7570_1 *)(void *)D_005DFA48)->unk_00 = ((unk_001C7570_1 *)(void *)temp0)->unk_00;
                ((unk_001C7570_1 *)(void *)D_005DFA48)->unk_04 = ((unk_001C7570_1 *)(void *)temp0)->unk_04;
                ((unk_001C7570_1 *)(void *)D_005DFA48)->unk_08 = ((unk_001C7570_1 *)(void *)temp0)->unk_08;
            } else {
                D_005DFA50[0] = D_005DFA4C[0] = D_005DFA48[0] = 0.0f;
            }
            for (temp1 = arg1 + 1; temp1 < func_001C03C0(temp2);) {
                temp0 = func_001CC7F0(temp3, (u16)temp1);
                if (temp0 != NULL) {
                    D_005DFA48[0] += temp0->unk_00;
                    D_005DFA4C[0] += temp0->unk_04;
                    D_005DFA50[0] += temp0->unk_08;
                }
                temp1++;
                temp7 = temp4++;
                (void)temp7;
            }
            temp6 = 1.0f / (f32)temp4;
            D_005DFA48[0] = temp6 * D_005DFA48[0];
            D_005DFA4C[0] = temp6 * D_005DFA4C[0];
            D_005DFA50[0] = temp6 * D_005DFA50[0];
            D_005DFA48[0] = D_005DFA48[0] * (f32)func_001A70C0(temp2);
            D_005DFA4C[0] = D_005DFA4C[0] * (f32)func_001A70C0(temp2);
            D_005DFA50[0] = D_005DFA50[0] * (f32)func_001A70C0(temp2);
        }
        return (unk_001C7570_0 *)(void *)D_005DFA48;
    }
    return NULL;
}
