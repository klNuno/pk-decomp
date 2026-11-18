#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1C;
    u8 pad_20[4];
} unk_func_00160BD0_0;

typedef struct {
    u8 pad_00[0x6C];
    unk_func_00160BD0_0 unk_6C[20];
    u8 pad_33C[0x33C - 0x6C - 20 * 0x24];
} unk_func_00160BD0_1;

typedef struct {
    u8 pad_00[2];
    s16 unk_02;
} unk_func_00160BD0_2;

extern s32 D_0035F9F0[2];
extern unk_func_00160BD0_1 D_00369280[];

void func_00160BD0(s32 arg0, unk_func_00160BD0_2 *arg1, s8 arg2) {
    unk_func_00160BD0_0 *temp_a2;

    if (arg1 == NULL || D_0035F9F0[arg1->unk_02] == 0) return;
    if (arg2 == -1 || arg2 >= 0x14) return;
    temp_a2 = &D_00369280[arg1->unk_02].unk_6C[arg2];
    temp_a2->unk_00 = arg0;
    if (temp_a2->unk_14 >= 0) {
        temp_a2->unk_04 = temp_a2->unk_1C + (temp_a2->unk_14 + (temp_a2->unk_00 + temp_a2->unk_0C));
        return;
    }
    temp_a2->unk_04 = -1;
}
