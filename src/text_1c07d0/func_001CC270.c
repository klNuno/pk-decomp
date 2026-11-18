/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u16 unk_10;
    u16 unk_12;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_001CC270_0;

typedef struct {
    u8 pad_00[2];
    u16 unk_02;
    u8 pad_04[2];
    u16 unk_06;
    s32 unk_08;
    u8 pad_0C[4];
} unk_001CC270_1;

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
    u16 unk_10;
    u8 pad_12[0xA];
    u16 unk_1C;
    u8 pad_1E[0x16];
    u16 unk_34;
    u16 unk_36;
} unk_001CC270_2;

typedef struct {
    u8 pad_00[0xC];
    u16 unk_0C;
} unk_001CC270_3;

typedef struct {
    union {
        u16 unk_00;
        u8 unk_00_u8;
    } unk_00;
    u8 pad_02[4];
} unk_001CC270_4;

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xA];
    u16 unk_5C;
    u8 pad_5E;
    u8 unk_5F;
} unk_001CC270_5;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_001CC270_6;

typedef struct {
    unk_001CC270_6 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10;
    u8 pad_11[3];
} unk_001CC270_7;

typedef struct {
    u8 pad_00[5];
    u8 unk_05;
} unk_001CC270_9;

typedef struct {
    unk_001CC270_9 *unk_00;
    u8 pad_04[0x1E];
    u8 unk_22;
} unk_001CC270_8;

s32 func_001273A8(f32);
s32 func_0019D550(f32);
s32 func_001C06E0(s32);
unk_001CC270_2 *func_001CAAA0(u16, s32);
void func_001CB2E0(unk_001CC270_0 *, unk_001CC270_0 *, unk_001CC270_1 *, s32, f32, s32);
void func_001CD230(s32, unk_001CC270_8 *, unk_001CC270_5 *, f32, u8, unk_001CC270_7 *);

extern unk_001CC270_0 *D_00360040;
extern s32 *D_00360044;
extern u16 *D_00360048;
extern unk_001CC270_1 *D_0036004C;
extern unk_001CC270_3 *D_00360050;
extern unk_001CC270_4 *D_00360054;

void func_001CC270(s32 arg0, unk_001CC270_8 *arg1, unk_001CC270_5 *arg2, f32 arg3, u8 arg4, unk_001CC270_7 *arg5)
{
    unk_001CC270_0 *temp0;
    unk_001CC270_1 *temp1;
    unk_001CC270_0 *temp2;
    unk_001CC270_2 *temp3;
    u16 temp4;
    u16 *temp5;
    u8 temp6;
    s32 *temp7;
    u16 temp8;
    f32 unk_A0;
    f32 unk_A4;
    f32 unk_A8;
    volatile u16 unk_AC;
    volatile u16 unk_AE;

    if (arg2->unk_5F) {
        func_001CD230(arg0, arg1, arg2, arg3, arg4, arg5);
        return;
    }
    arg1->unk_22 = 1;
    unk_AE = arg2->unk_5C;
    temp3 = func_001CAAA0(unk_AE, func_001273A8(arg3));
    temp8 = (u16)((s16)(func_0019D550(arg3) & 0xFFFF) - (s16)temp3->unk_1C);
    temp1 = &D_0036004C[temp3->unk_36];
    unk_AC = D_00360050[temp3->unk_34 + temp8].unk_0C;
    if (func_001C06E0(arg0) == 0) {
        unk_A0 = 0.0f;
    } else {
        unk_A0 = 1.0f;
    }
    for (temp4 = 0; temp4 < temp3->unk_0E; temp1++, temp4++) {
        unk_A4 = 0.0f;
        if (temp1->unk_02 != 0xFFFF && !arg5[temp1->unk_02].unk_10 && arg1->unk_00[temp4].unk_05 == 0) {
            temp5 = &D_00360048[temp1->unk_06 + unk_AC];
            temp7 = &D_00360044[temp1->unk_08 + temp8];
            temp0 = &D_00360040[*temp7];
            if (temp0->unk_12 & 0x80) {
                if (temp0->unk_12 & 0x200) {
                    temp2 = &D_00360040[D_00360044[temp1->unk_08]];
                    unk_A4 = (arg3 - (f32)temp0->unk_10) /
                             (f32)(temp3->unk_10 + temp2->unk_10 - temp0->unk_10);
                } else {
                    temp2 = temp0;
                    unk_A4 = 0.0f;
                }
            } else {
                temp2 = temp0 + 1;
                if (temp2->unk_10 == temp0->unk_10) {
                    unk_A4 = 0.0f;
                } else {
                    unk_A4 = (arg3 - (f32)temp0->unk_10) / (f32)(temp2->unk_10 - temp0->unk_10);
                }
            }
            if (temp0->unk_22 != 0 && 0.0f != unk_A4) {
                unk_A8 = (1.0f / 8192.0f) * (f32)temp2->unk_22;
                unk_A4 *= (1.0f + unk_A4 * unk_A8) - unk_A8;
            }
            unk_A4 *= unk_A0;
            if (D_00360054[*temp5].unk_00.unk_00 != 0xFFFF) {
                temp6 = (u8)((s8)D_00360054[*temp5].unk_00.unk_00_u8 & 0x800);
            } else {
                temp6 = 0;
            }
            func_001CB2E0(temp0, temp2, temp1, arg5[temp1->unk_02].unk_00->unk_20, unk_A4, (s32)temp6);
        }
    }
}
