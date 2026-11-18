/* profile: o0_p */
#include "common.h"

typedef struct unk_func_00244690_0 {
    s8 unk_00;
    u8 pad_01[0x3];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x14AC];
} unk_func_00244690_0;

typedef struct unk_func_00244690_1 {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x10];
} unk_func_00244690_1;

extern s32 D_003601CC;
extern u16 D_003601D0;
extern u16 D_003601D4;
extern unk_func_00244690_1 D_00605FF0[];
extern unk_func_00244690_0 D_0060CD50[];
extern f32 D_00617320[];
extern f32 D_00617324[];
extern f32 D_00617328[];

s32 func_00244690(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 8; i++) {
        D_0060CD50[i].unk_08 = 0;
        D_0060CD50[i].unk_04 = 0;
        D_0060CD50[i].unk_00 = -1;
    }
    D_003601D4 = D_003601D0 = 0;
    for (i = 0; i < 1000; i++) {
        D_00605FF0[i].unk_08 = 30000000;
    }
    D_003601CC = 0x15;
    D_00617328[0] = D_00617324[0] = D_00617320[0] = 0.0f;
    return arg1;
}
