/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u16 unk_10;
    u16 unk_12;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_001CD230_0;

typedef struct {
    u8 pad_00[2];
    u16 unk_02;
    u8 pad_04[2];
    u16 unk_06;
    s32 unk_08;
    u8 pad_0C[4];
} unk_001CD230_1;

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
    u16 unk_10;
    u8 pad_12[0x22];
    u16 unk_34;
    u16 unk_36;
} unk_001CD230_2;

typedef struct {
    u8 pad_00[0xC];
    u16 unk_0C;
} unk_001CD230_3;

typedef struct {
    union {
        u16 unk_00;
        u8 unk_00_u8;
    } unk_00;
    u8 pad_02[4];
} unk_001CD230_4;

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
    u8 pad_52[0xA];
    u16 unk_5C;
} unk_001CD230_5;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_001CD230_6;

typedef struct {
    unk_001CD230_6 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10;
    u8 pad_11[3];
} unk_001CD230_7;

typedef struct {
    u8 pad_00[0x22];
    u8 unk_22;
} unk_001CD230_8;

typedef struct {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u8 pad_06[2];
    f32 unk_08;
} unk_001CD230_9;

s32 func_0019D550(f32);
unk_001CD230_2 *func_001CAAA0(u16, s32);
void func_001CB2E0(unk_001CD230_0 *, unk_001CD230_0 *, unk_001CD230_1 *, s32, f32, s32);
void func_001CCDC0(s32, unk_001CD230_8 *, unk_001CD230_5 *, s32);
unk_001CD230_9 *func_001CF340(u16);
void *memcpy(void *, const void *, u32);

extern unk_001CD230_0 *D_00360040;
extern s32 *D_00360044;
extern u16 *D_00360048;
extern unk_001CD230_1 *D_0036004C;
extern unk_001CD230_3 *D_00360050;
extern unk_001CD230_4 *D_00360054;

void func_001CD230(s32 arg0, unk_001CD230_8 *arg1, unk_001CD230_5 *arg2, f32 arg3, u8 arg4, unk_001CD230_7 *arg5)
{
    unk_001CD230_1 *temp0;
    unk_001CD230_0 *temp1;
    unk_001CD230_0 *temp2;
    unk_001CD230_0 *temp3;
    unk_001CD230_0 *temp4;
    unk_001CD230_9 *temp5;
    unk_001CD230_1 *temp6;
    u16 *temp7;
    u8 temp8;
    unk_001CD230_0 unk_A0;
    unk_001CD230_0 unk_D0;
    unk_001CD230_2 *volatile unk_100;
    unk_001CD230_2 *volatile unk_104;
    u16 *volatile unk_108;
    s32 *volatile unk_10C;
    s32 *volatile unk_110;
    f32 unk_114;
    volatile u16 unk_118;
    volatile u16 unk_11A;
    volatile u16 unk_11C;
    volatile u16 unk_11E;

    func_001CCDC0(arg0, arg1, arg2, func_0019D550(arg3) & 0xFFFF);
    if (!arg1->unk_22 || arg4) {
        arg1->unk_22 = 1;
        unk_118 = arg2->unk_5C;
        temp5 = func_001CF340(unk_118);
        unk_100 = func_001CAAA0(temp5->unk_00, temp5->unk_04);
        unk_104 = func_001CAAA0(temp5->unk_02, 0);
        temp0 = &D_0036004C[unk_100->unk_36];
        unk_11A = D_00360050[unk_100->unk_34 + temp5->unk_04].unk_0C;
        temp6 = &D_0036004C[unk_104->unk_36];
        unk_11C = D_00360050[unk_104->unk_34].unk_0C;

        for (unk_11E = 0; unk_11E < unk_100->unk_0E; temp0++, temp6++, unk_11E++) {
            temp3 = NULL;
            temp4 = NULL;
            unk_114 = 0.0f;
            if (temp0->unk_02 != 0xFFFF && !arg5[temp0->unk_02].unk_10) {
                temp7 = &D_00360048[temp0->unk_06 + unk_11A];
                unk_10C = &D_00360044[temp0->unk_08 + temp5->unk_04];
                temp2 = &D_00360040[*unk_10C];
                if (temp2->unk_12 & 0x80) {
                    if (temp2->unk_12 & 0x200) {
                        temp3 = &D_00360040[D_00360044[temp0->unk_08]];
                    } else {
                        temp3 = temp2;
                    }
                } else {
                    temp3 = temp2;
                }
                unk_108 = &D_00360048[temp6->unk_06 + unk_11C];
                unk_110 = &D_00360044[temp6->unk_08];
                temp1 = &D_00360040[*unk_110];
                if (temp1->unk_12 & 0x80) {
                    if (temp1->unk_12 & 0x200) {
                        temp4 = &D_00360040[D_00360044[temp6->unk_08]];
                    } else {
                        temp4 = temp1;
                    }
                } else {
                    temp4 = temp1;
                }
                unk_114 = arg3 / (f32)arg2->unk_50;
                if (0.0f != unk_114) {
                    unk_114 *= (1.0f + unk_114 * temp5->unk_08) - temp5->unk_08;
                }
                if (D_00360054[*temp7].unk_00.unk_00 != 0xFFFF) {
                    temp8 = (u8)((s8)D_00360054[*temp7].unk_00.unk_00_u8 & 0x800);
                } else {
                    temp8 = 0;
                }
                memcpy(&unk_A0, temp3, sizeof(unk_A0));
                memcpy(&unk_D0, temp4, sizeof(unk_D0));
                unk_A0.unk_12 = 0x380;
                unk_D0.unk_12 = 0x380;
                func_001CB2E0(&unk_A0, &unk_D0, temp0, arg5[temp0->unk_02].unk_00->unk_20, unk_114, (s32)temp8);
            }
        }
    }
}
