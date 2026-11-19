/* profile: opt */
#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[4];
} unk_func_003198B0_0;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[4];
} unk_func_003198B0_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 *unk_0C;
    s32 unk_10;
    s32 *unk_14;
    u8 pad_18[4];
    s32 *unk_1C;
    u8 pad_20[4];
} unk_func_003198B0_2;

typedef struct {
    u8 pad_00[0xC];
    unk_func_003198B0_2 *unk_0C;
    unk_func_003198B0_2 *unk_10;
} unk_func_003198B0_3;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[4];
    u32 unk_10;
    u8 pad_14[0xC];
    unk_func_003198B0_1 *unk_20;
    u8 pad_24[4];
    unk_func_003198B0_0 *unk_28;
} unk_func_003198B0_4;

typedef struct {
    u8 pad_00[0x34];
    unk_func_003198B0_4 *unk_34;
    unk_func_003198B0_3 *unk_38;
} unk_func_003198B0_5;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x6C];
    s32 unk_7C;
} unk_func_003198B0_6;

s32 func_00319CA0(unk_func_003198B0_3 *, s32);
extern s32 D_003608D8;
extern s8 D_003608DC;
extern s32 D_003608E0;
extern s8 D_003608E4;

#define UNK_SET(count, list, array, field, temp6, temp7, temp5) { \
    temp6 = (count); \
    temp7 = (list); \
    for (temp5 = 0; temp5 < temp6; temp5++) { \
        (array)[temp7[temp5]].field = 1; \
    } \
}

void func_003198B0(unk_func_003198B0_6 *arg0, unk_func_003198B0_5 *arg1) {
    unk_func_003198B0_3 *temp = arg1->unk_38;
    unk_func_003198B0_4 *temp2 = arg1->unk_34;
    unk_func_003198B0_2 *temp3;
    u32 temp9;
    u32 temp4;
    s32 *temp7;
    s32 temp6;
    s32 temp5;
    s32 *temp10;
    s32 temp11;
    s32 temp12;

    if (D_003608DC == 0) {
        D_003608D8 = -0x63;
        D_003608DC = 1;
    }
    if (D_003608E4 == 0) {
        D_003608E0 = 0;
        D_003608E4 = 1;
    }
    if (arg0->unk_7C != D_003608D8) {
        D_003608D8 = arg0->unk_7C;
        temp->unk_0C = &temp->unk_10[func_00319CA0(temp, arg0->unk_7C)];
        temp3 = temp->unk_0C;
        for (temp4 = 0; temp4 < temp2->unk_10; temp4++) {
            temp2->unk_28[temp4].unk_20 = 0;
        }
        UNK_SET(temp3->unk_08, temp3->unk_0C, temp2->unk_28, unk_20, temp6, temp7, temp5)
        for (temp9 = 0; temp9 < temp2->unk_08; temp9++) {
            temp2->unk_20[temp9].unk_14 = 0;
        }
        UNK_SET(temp3->unk_10, temp3->unk_14, temp2->unk_20, unk_14, temp11, temp10, temp12)
        arg0->unk_04 = temp3->unk_1C[0];
        arg0->unk_08 = temp3->unk_1C[1];
        arg0->unk_0C = temp3->unk_1C[2];
    }
}
