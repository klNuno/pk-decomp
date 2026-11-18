/* profile: opt_300_noprop */
#include "common.h"

typedef struct unk_func_00175D70_0 {
    u8 pad_00[0x90];
    u32 unk_90;
} unk_func_00175D70_0;

typedef struct unk_func_00175D70_1 {
    u32 unk_00;
    u32 unk_04;
    unk_func_00175D70_0 **unk_08;
    u8 pad_0C[0xC];
    u32 *unk_18;
} unk_func_00175D70_1;

typedef struct unk_func_00175D70_2 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    s16 unk_20;
    s16 unk_22;
    s16 unk_24;
    s16 unk_26;
    u8 pad_28[0x54];
    unk_func_00175D70_1 *unk_7C;
    s32 unk_80;
    s32 unk_84;
} unk_func_00175D70_2;

typedef struct unk_func_00175D70_3 {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[6];
    unk_func_00175D70_2 **unk_0C;
} unk_func_00175D70_3;

typedef struct unk_func_00175D70_4 {
    u8 pad_00[4];
    unk_func_00175D70_2 *unk_04;
} unk_func_00175D70_4;

extern unk_func_00175D70_4 *D_0035FB04;
extern s32 D_0035FC68;
extern s32 D_0035FC6C;
extern s32 D_0035FC70;
extern s32 D_0035FC84;

s32 func_00175C00(unk_func_00175D70_2 *);
void func_00175750(unk_func_00175D70_2 *, s32, s32, u32);

void func_00175D70(s32 arg0, unk_func_00175D70_3 **arg1) {
    s16 i;
    unk_func_00175D70_1 *temp_v1_2;
    unk_func_00175D70_2 *temp_s1;
    u32 j;
    u32 temp_a3;
    unk_func_00175D70_1 *temp_s3;
    u32 temp_s4;
    u32 temp_s5;
    unk_func_00175D70_3 *temp_s6;
    s16 temp_fp;

    if (arg1 == NULL) {
        D_0035FC68 = 1;
        return;
    }
    temp_s6 = *arg1;
    if (temp_s6 == NULL) {
        D_0035FC68 = 1;
        return;
    }

    temp_fp = temp_s6->unk_04 == 0 ? 1 : 1;
    for (i = 0, temp_s5 = 0; i < temp_fp; i++, temp_s5 += 4) {
        temp_s1 = *(unk_func_00175D70_2 **)((u8 *)temp_s6->unk_0C + temp_s5);
        if (temp_s1 == NULL) {
            continue;
        }
        D_0035FB04->unk_04 = temp_s1;
        temp_s1->unk_84 = 0;
        temp_s1->unk_80 = 0;
        if (func_00175C00(temp_s1) == 0) {
            D_0035FC68 = 1;
            return;
        }
        temp_v1_2 = temp_s1->unk_7C;
        if (temp_v1_2 == NULL) {
            return;
        }
        if ((temp_v1_2->unk_00 & 0xF) != 2) {
            return;
        }
        temp_s1->unk_80 = 1;
        D_0035FC84 = arg0;
        temp_s3 = temp_s1->unk_7C;
        for (j = 0, temp_s4 = 0; (temp_a3 = j) < temp_s3->unk_04; temp_s4 += 4, j++) {
            u32 temp_a0 = *(u32 *)((u8 *)temp_s3->unk_18 + temp_s4) & 1;
            if ((temp_a0 != 0 && D_0035FC6C == 0) || (temp_a0 == 0 && D_0035FC6C == 1)) {
                if (D_0035FC6C == 1) {
                    unk_func_00175D70_0 *temp_v1 = *(unk_func_00175D70_0 **)((u8 *)temp_s3->unk_08 + temp_s4);
                    if (temp_v1 != NULL && (temp_v1->unk_90 & 0x40)) {
                        if (D_0035FC70 != 0) {
                            func_00175750(temp_s1, 0, 0, temp_a3);
                        }
                    } else if (D_0035FC70 == 0) {
                        func_00175750(temp_s1, 0, 0, temp_a3);
                    }
                } else {
                    func_00175750(temp_s1, 0, 0, temp_a3);
                }
            }
        }
        if (D_0035FC6C == 0) {
            temp_s1->unk_00 = 0;
            temp_s1->unk_04 = 0;
            temp_s1->unk_08 = 0;
            temp_s1->unk_0C = 0;
            temp_s1->unk_10 = 0;
            temp_s1->unk_14 = 0;
            temp_s1->unk_18 = 0;
            temp_s1->unk_20 = 0;
            temp_s1->unk_22 = 0;
            temp_s1->unk_24 = 0;
            temp_s1->unk_26 = 0;
        }
    }
}
