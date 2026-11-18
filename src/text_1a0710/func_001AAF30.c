/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x20];
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0x10];
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    u8 pad_60[0x10];
} unk_func_001AAF30_0;

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u8 pad_08[0x58];
} unk_func_001AAF30_1;

typedef struct {
    u8 pad_00[0x106];
    s16 unk_106;
    u8 pad_108[0x24C];
    s16 unk_354;
} unk_func_001AAF30_2;

s32 func_001694B0(s16, s16, void *);
s32 func_00169790(s16, s16, void *);
s32 func_00169A40(s16, void *);
void func_0016DD90(s16, s16, s32 *);
void func_0016ED40(s16, s16, s32);

extern u8 D_005AB790[];
extern s16 D_005AB894[];

void func_001AAF30(u8 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4,
                   s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    s32 temp;

    if (arg1 == 1) {
        func_0016DD90(D_005AB894[0], ((unk_func_001AAF30_2 *)(D_005AB790 + (u8)arg0 * 2))->unk_106, &temp);
    } else {
        func_0016DD90(D_005AB894[0], ((unk_func_001AAF30_2 *)(D_005AB790 + (u8)arg0 * 2))->unk_354, &temp);
    }
    if (temp != 0) {
        unk_func_001AAF30_0 temp2;

        if (arg1 == 1) {
            func_00169790(D_005AB894[0], ((unk_func_001AAF30_2 *)(D_005AB790 + (u8)arg0 * 2))->unk_106, &temp2);
        } else {
            func_00169790(D_005AB894[0], ((unk_func_001AAF30_2 *)(D_005AB790 + (u8)arg0 * 2))->unk_354, &temp2);
        }
        if (arg2 == 1) {
            temp2.unk_30 = arg3;
            temp2.unk_34 = arg4;
        } else if (arg2 == 2) {
            temp2.unk_48 = arg5;
            temp2.unk_50 = arg6;
            temp2.unk_4C = arg7;
            temp2.unk_54 = arg8;
        } else if (arg2 == 3) {
            temp2.unk_58 = arg9;
            temp2.unk_5C = arg10;
        } else if (arg2 == 4) {
            temp2.unk_58 = (arg9 * (s32)temp2.unk_0C) / 1000;
            temp2.unk_5C = (arg10 * (s32)temp2.unk_08) / 1000;
        } else if (arg2 == 5) {
            unk_func_001AAF30_1 temp3;

            func_00169A40(D_005AB894[0], &temp3);
            temp2.unk_58 = (arg9 * (s32)temp3.unk_04) / 100;
            temp2.unk_5C = (arg10 * (s32)temp3.unk_00) / 100;
        }
        if (arg1 == 1) {
            func_001694B0(D_005AB894[0], ((unk_func_001AAF30_2 *)(D_005AB790 + (u8)arg0 * 2))->unk_106, &temp2);
            func_0016ED40(D_005AB894[0], ((unk_func_001AAF30_2 *)(D_005AB790 + (u8)arg0 * 2))->unk_106, temp);
        } else {
            func_001694B0(D_005AB894[0], ((unk_func_001AAF30_2 *)(D_005AB790 + (u8)arg0 * 2))->unk_354, &temp2);
            func_0016ED40(D_005AB894[0], ((unk_func_001AAF30_2 *)(D_005AB790 + (u8)arg0 * 2))->unk_354, temp);
        }
    }
}
