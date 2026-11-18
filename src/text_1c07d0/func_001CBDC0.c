/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
    u8 pad_10[0xC];
    u16 unk_1C;
    u8 pad_1E[0x16];
    u16 unk_34;
    u16 unk_36;
} unk_001CBDC0_0;

typedef struct {
    u8 pad_00[2];
    u8 unk_02;
    u8 pad_03[3];
    u16 unk_06;
    u8 pad_08[8];
} unk_001CBDC0_1;

typedef struct {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0A;
    u16 unk_0C;
} unk_001CBDC0_2;

typedef struct {
    u16 unk_00 : 15;
    u8 unk_01 : 1;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
} unk_001CBDC0_3;

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xA];
    u16 unk_5C;
    u8 pad_5E;
    u8 unk_5F;
} unk_001CBDC0_4;

typedef struct {
    unk_001CBDC0_3 *unk_00;
    void *unk_04;
    void *unk_08;
    s32 unk_0C;
    void *unk_10;
    s32 unk_14;
    void *unk_18;
    unk_001CBDC0_4 *unk_1C;
    u16 unk_20;
    u8 unk_22;
} unk_001CBDC0_5;

typedef struct {
    u8 unk_00;
    u8 pad_01;
    u16 unk_02;
    u8 unk_04;
    u8 pad_05;
} unk_001CBDC0_6;

extern u64 *D_00360034;
extern u16 *D_00360048;
extern unk_001CBDC0_1 *D_0036004C;
extern unk_001CBDC0_2 *D_00360050;
extern unk_001CBDC0_6 *D_00360054;
extern u32 *D_00360058;
extern s16 (*D_0036005C)[4];
extern u32 (*D_00360060)[3];

void *HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(void **, s32);
unk_001CBDC0_0 *func_001CAAA0(u16, s32);
void func_001CAC50(f32 *, s16 *);
void func_001CAD10(void *, f32 *);
void func_001CCDC0(void *, unk_001CBDC0_5 *, unk_001CBDC0_4 *, u16);

void func_001CBDC0(void *arg0, unk_001CBDC0_5 *arg1, unk_001CBDC0_4 *arg2, u16 arg3) {
    f32 spA0[7];
    unk_001CBDC0_3 *volatile spBC;
    unk_001CBDC0_3 *temp;
    u16 *temp_s1;
    unk_001CBDC0_1 *temp_s2;
    unk_001CBDC0_2 *temp_s3;
    unk_001CBDC0_0 *temp_s4;
    u16 i;
    u16 temp_s6;
    u16 temp_s7;
    u16 temp_fp;

    if (arg2->unk_5F) {
        func_001CCDC0(arg0, arg1, arg2, arg3);
        return;
    }
    temp_s7 = arg2->unk_5C;
    if (arg3 < arg2->unk_50 && (arg1->unk_1C != arg2 || arg1->unk_20 != arg3)) {
        arg1->unk_1C = arg2;
        arg1->unk_20 = arg3;
        arg1->unk_22 = 0;
        temp_s4 = func_001CAAA0(temp_s7, arg3);
        temp_fp = (u16)((s16)arg3 - (s16)temp_s4->unk_1C);
        temp_s2 = &D_0036004C[temp_s4->unk_36];
        temp_s3 = &D_00360050[temp_s4->unk_34 + temp_fp];
        temp_s6 = temp_s3->unk_0C;
        if (temp_s3->unk_00 == 0xFFFF) {
            if (arg1->unk_04 != NULL) {
                HMU_fn_vFree(&arg1->unk_04, 1);
            }
            arg1->unk_04 = NULL;
        } else {
            if (arg1->unk_04 == NULL) {
                arg1->unk_04 = HMU_fn_p_vMalloc(0x24, 1);
            }
            func_001CAC50(spA0, D_0036005C[temp_s3->unk_00]);
            func_001CAD10(arg1->unk_04, spA0);
        }
        if (temp_s3->unk_02 == 0xFFFF) {
            arg1->unk_08 = NULL;
        } else {
            arg1->unk_08 = &D_00360060[temp_s3->unk_02];
        }
        if (temp_s3->unk_04) {
            arg1->unk_10 = &D_00360058[temp_s3->unk_06];
        } else {
            arg1->unk_10 = NULL;
        }
        arg1->unk_0C = temp_s3->unk_04;
        arg1->unk_14 = temp_s3->unk_08;
        if (temp_s3->unk_08) {
            arg1->unk_18 = &D_00360034[temp_s3->unk_0A];
        } else {
            arg1->unk_18 = NULL;
        }
        i = 0;
        spBC = temp = arg1->unk_00;
        for (; i < temp_s4->unk_0E; ++i) {
            temp_s1 = &D_00360048[temp_s2->unk_06 + temp_s6];
            if (*temp_s1 != 0xFFFF) {
                temp->unk_00 = D_00360054[*temp_s1].unk_02;
                temp->unk_02 = temp_s2->unk_02;
                temp->unk_01 = 1;
                temp->unk_03 = (u8)((s8)D_00360054[*temp_s1].unk_00 & 0xFF);
                temp->unk_04 = D_00360054[*temp_s1].unk_04;
                temp->unk_05 = 0;
            } else {
                temp->unk_00 = 0xFFFF;
                temp->unk_02 = temp_s2->unk_02;
                temp->unk_01 = 1;
                temp->unk_03 = 2;
                temp->unk_04 = 0;
                temp->unk_05 = 0xFF;
            }
            ++temp_s2;
            ++temp;
        }
    }
}
