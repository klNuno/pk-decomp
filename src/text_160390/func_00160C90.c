#include "common.h"

typedef struct unk_func_00160C90_1 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    s32 unk_0C;
    u8 unk_10;
    s32 unk_14;
    u8 unk_18;
    s32 unk_1C;
    u8 pad_20[4];
} unk_func_00160C90_1;

typedef struct unk_func_00160C90_0 {
    u8 pad_00[0x6C];
    unk_func_00160C90_1 unk_6C[20];
    u8 pad_33C[0x33C - 0x6C - 20 * 0x24];
} unk_func_00160C90_0;

extern unk_func_00160C90_0 D_00369280[];

void func_00160C90(void) {
    s16 j;
    s16 i;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 20; j++) {
            D_00369280[i].unk_6C[j].unk_00 = 0;
            D_00369280[i].unk_6C[j].unk_04 = 0;
            D_00369280[i].unk_6C[j].unk_08 = 0;
            D_00369280[i].unk_6C[j].unk_0C = 0;
            D_00369280[i].unk_6C[j].unk_10 = 0;
            D_00369280[i].unk_6C[j].unk_14 = 0;
            D_00369280[i].unk_6C[j].unk_18 = 0;
            D_00369280[i].unk_6C[j].unk_1C = 0;
        }
    }
}
