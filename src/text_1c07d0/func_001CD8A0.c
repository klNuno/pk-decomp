/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u16 unk_00, unk_02;
    u8 unk_04;
    u8 pad_05[3];
    u16 unk_08;
    u8 pad_0A[0x12];
    u8 unk_1C;
    u8 pad_1D[9];
} unk_func_001CD8A0_0;

typedef struct {
    char unk_00[0x50];
    u16 unk_50;
    u8 unk_52, unk_53;
    u32 unk_54;
    unk_func_001CD8A0_0 *unk_58;
    u16 unk_5C;
    u8 unk_5E, unk_5F;
} unk_func_001CD8A0_1;

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
    u8 pad_10[0x24];
    u16 unk_34, unk_36;
} unk_func_001CD8A0_2;

typedef struct {
    u8 pad_00[6];
    u16 unk_06;
    u8 pad_08[8];
} unk_func_001CD8A0_3;

typedef struct {
    u8 pad_00[0xC];
    u16 unk_0C;
} unk_func_001CD8A0_4;

typedef struct {
    u16 unk_00, unk_02;
    u8 pad_04[2];
} unk_func_001CD8A0_5;

typedef struct {
    u16 unk_00, unk_02, unk_04, unk_06;
    f32 unk_08;
} unk_func_001CD8A0_6;

void *HMU_fn_p_vMalloc(s32, s32);
unk_func_001CD8A0_2 *func_001CAAA0(u16, s32);
unk_func_001CD8A0_6 *func_001CF260(u16 *);
void *memcpy(void *, const void *, u32);
char *strcpy(char *, const char *);
extern char D_0034BAE0[];
extern u16 *D_00360048;
extern unk_func_001CD8A0_3 *D_0036004C;
extern unk_func_001CD8A0_4 *D_00360050;
extern unk_func_001CD8A0_5 *D_00360054;

unk_func_001CD8A0_1 *func_001CD8A0(unk_func_001CD8A0_1 *arg0, unk_func_001CD8A0_1 *arg1, u16 arg2, u32 arg3, f32 arg4) {
    s32 i;
    u16 j;
    u16 *temp0;
    u16 k;
    unk_func_001CD8A0_1 *temp1;
    u16 *temp2;
    unk_func_001CD8A0_3 *temp3, *temp4;
    unk_func_001CD8A0_6 *temp5;
    unk_func_001CD8A0_0 spA0[64];
    unk_func_001CD8A0_2 *spA28, *spA2C;
    unk_func_001CD8A0_4 *spA30, *spA34;
    u16 spA38, spA3A, spA3C, spA3E;

    if (arg0->unk_5F == 1) {
        return NULL;
    }
    spA38 = arg0->unk_5C;
    spA28 = func_001CAAA0(spA38, arg2);
    spA3A = arg1->unk_5C;
    spA2C = func_001CAAA0(spA3A, 0);
    temp1 = HMU_fn_p_vMalloc(0x60, 1);
    if (temp1 == NULL) {
        return NULL;
    }
    temp1->unk_50 = (u16)arg3;
    temp1->unk_52 = arg0->unk_52;
    temp1->unk_53 = arg0->unk_53;
    temp1->unk_54 = 0;
    temp1->unk_5E = 0;

    temp3 = &D_0036004C[spA28->unk_36];
    spA30 = &D_00360050[spA28->unk_34 + arg2];
    spA3C = spA30->unk_0C;
    temp4 = &D_0036004C[spA2C->unk_36];
    spA34 = &D_00360050[spA2C->unk_34];
    spA3E = spA34->unk_0C;
    i = 0;
    for (k = 0; k < spA28->unk_0E && i < 64; temp3++, temp4++, k++) {
        temp2 = &D_00360048[temp3->unk_06 + spA3C];
        temp0 = &D_00360048[temp4->unk_06 + spA3E];
        if ((D_00360054[*temp2].unk_00 & 0xFF) == 0
            && (D_00360054[*temp0].unk_00 & 0xFF) == 0
            && D_00360054[*temp2].unk_02 != D_00360054[*temp0].unk_02) {
            for (j = 0; j < arg3 && i < 64; j++) {
                spA0[i].unk_04 = 1;
                spA0[i].unk_08 = D_00360054[*temp0].unk_02;
                spA0[i].unk_1C = (u8)((j * 100) / arg3);
                spA0[i].unk_00 = k;
                spA0[i].unk_02 = j;
                i++;
            }
        }
    }
    if (i == 0) {
        temp1->unk_58 = NULL;
    } else {
        temp1->unk_58 = HMU_fn_p_vMalloc(i * sizeof(unk_func_001CD8A0_0), 1);
        if (temp1->unk_58 != NULL) {
            memcpy(temp1->unk_58, spA0, i * sizeof(unk_func_001CD8A0_0));
        }
    }
    temp1->unk_5F = 1;
    strcpy(temp1->unk_00, D_0034BAE0);
    temp5 = func_001CF260(&temp1->unk_5C);
    if (temp5 != NULL) {
        temp5->unk_00 = arg0->unk_5C;
        temp5->unk_02 = arg1->unk_5C;
        temp5->unk_04 = arg2;
        temp5->unk_06 = i;
        temp5->unk_08 = arg4;
        return temp1;
    }
    return NULL;
}
