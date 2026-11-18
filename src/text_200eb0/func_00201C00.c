/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_00201C00_0;

typedef struct {
    u8 pad_00[0x28];
    f32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
    u8 pad_34[0x3E];
    u16 unk_72;
    u8 pad_74[8];
} unk_00201C00_1;

typedef struct {
    u8 pad_00[0x60];
    s32 unk_60;
} unk_00201C00_2;

typedef struct {
    u8 pad_00[8];
    unk_00201C00_2 *unk_08;
    unk_00201C00_1 *unk_0C;
    u8 pad_10[0x1C];
    unk_00201C00_0 unk_2C;
    u8 pad_38[0x18];
    unk_00201C00_0 unk_50;
    u8 pad_5C[0x74];
} unk_00201C00_3;

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_00201C00_4;

typedef struct {
    u8 pad_00[0xC];
    unk_00201C00_4 *unk_0C;
    u8 pad_10[0xC];
    s32 unk_1C;
    u8 pad_20[0x18];
    unk_00201C00_0 unk_38;
    u8 pad_44[0xC];
    unk_00201C00_0 unk_50;
} unk_00201C00_5;

typedef struct {
    unk_00201C00_0 unk_00;
    f32 unk_0C;
} unk_00201C00_6;

u32 func_001273A8(f32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_001F49F0(unk_00201C00_3 *);
void func_001F6260(unk_00201C00_3 *);
s32 func_001FDD00(s32, unk_00201C00_0 *);
f32 func_001FE8E0(f32);
void func_001FF6A0(s32, unk_00201C00_3 *);
f32 func_00201450(unk_00201C00_5 *, unk_00201C00_6 *);
void *memcpy(void *, const void *, u32);
extern s16 D_00360160;
extern f32 D_005AD8B0[], D_005AD8B4[];
extern s16 D_005AD91C[];
extern unk_00201C00_1 D_006042A0;
extern unk_00201C00_6 D_00604320[];

#define UNK_00201C00_SUB(arg0, arg1, arg2)                        \
    (arg0).unk_00 = (arg1).unk_00 - (arg2).unk_00;                \
    (arg0).unk_04 = (arg1).unk_04 - (arg2).unk_04;                \
    (arg0).unk_08 = (arg1).unk_08 - (arg2).unk_08

#define UNK_00201C00_MAG(arg0)                                   \
    func_001E60E0(func_00151360((arg0).unk_08) +                   \
                  (func_00151360((arg0).unk_00) +                 \
                   func_00151360((arg0).unk_04)))

#define UNK_00201C00_SCALE(arg0, arg1)                            \
    (arg0).unk_00 = (arg1) * (arg0).unk_00;                       \
    (arg0).unk_04 = (arg1) * (arg0).unk_04;                       \
    (arg0).unk_08 = (arg1) * (arg0).unk_08

void func_00201C00(unk_00201C00_5 *arg0, s8 arg1) {
    unk_00201C00_1 sp70;
    unk_00201C00_3 spF0;
    unk_00201C00_0 sp1C8, sp1D8;
    f32 sp1E4, sp1E8, sp1EC, sp1F0, sp1F4, sp1F8, sp1FC;
    unk_00201C00_6 *temp0;
    s32 temp1;
    u32 temp2, temp3;
    s32 temp4;

    func_001FF6A0(arg0->unk_1C, &spF0);
    spF0.unk_0C = &sp70;
    memcpy(&sp70, &D_006042A0, 0x7C);
    func_001F49F0(&spF0);
    UNK_00201C00_SUB(sp1D8, arg0->unk_38, arg0->unk_50);
    sp1EC = UNK_00201C00_MAG(sp1D8);
    if (func_001FDD00(arg0->unk_0C->unk_68, &sp1C8) == 0) {
        sp1C8.unk_00 = 0.0f;
        sp1C8.unk_04 = 0.0f;
        sp1C8.unk_08 = 1.0f;
    }
    if (arg1 & 4) {
        sp1FC = D_005AD8B4[0];
    } else {
        sp1FC = D_005AD8B0[0];
    }
    sp1E8 = sp1FC;
    temp1 = 0;
    temp3 = func_001273A8(6.2831855f / sp1E8);
    sp1E4 = sp70.unk_28;
    temp4 = spF0.unk_08->unk_60;
    spF0.unk_08->unk_60 = 0;
    sp1F0 = sp70.unk_30;
    for (temp2 = 0; temp2 < temp3; temp2++) {
        sp70.unk_28 = sp1E4;
        sp70.unk_28 = func_001FE8E0(sp70.unk_28);
        sp70.unk_30 = sp1F0;
        spF0.unk_0C->unk_72 |= 0x40;
        func_001F6260(&spF0);
        temp0 = &D_00604320[temp1];
        UNK_00201C00_SUB(temp0->unk_00, spF0.unk_2C, spF0.unk_50);
        D_00604320[temp1].unk_0C = func_00201450(arg0, temp0);
        temp1++;

        if (!(D_005AD91C[0] & 0x40) && (arg1 & 4)) {
            temp0 = &D_00604320[temp1];
            UNK_00201C00_SUB(temp0->unk_00, spF0.unk_2C, spF0.unk_50);
            sp1F4 = UNK_00201C00_MAG(temp0->unk_00);
            if (0.0f != sp1F4) {
                sp1F4 = 1.0f / sp1F4;
                UNK_00201C00_SCALE(temp0->unk_00, sp1F4);
            } else {
                temp0->unk_00 = temp0->unk_00;
            }
            UNK_00201C00_SCALE(temp0->unk_00, 0.5f * sp1EC);
            D_00604320[temp1].unk_0C = func_00201450(arg0, temp0);
            temp1++;
            if (arg1 & 8) {
                temp0 = &D_00604320[temp1];
                UNK_00201C00_SUB(temp0->unk_00, spF0.unk_2C, spF0.unk_50);
                sp1F8 = UNK_00201C00_MAG(temp0->unk_00);
                if (0.0f != sp1F8) {
                    sp1F8 = 1.0f / sp1F8;
                    UNK_00201C00_SCALE(temp0->unk_00, sp1F8);
                } else {
                    temp0->unk_00 = temp0->unk_00;
                }
                UNK_00201C00_SCALE(temp0->unk_00, 0.33f * sp1EC);
                D_00604320[temp1].unk_0C = func_00201450(arg0, temp0);
                temp1++;
            }
        }

        sp70.unk_30 = 0.0f;
        spF0.unk_0C->unk_72 |= 0x40;
        func_001F6260(&spF0);
        temp0 = &D_00604320[temp1];
        UNK_00201C00_SUB(temp0->unk_00, spF0.unk_2C, spF0.unk_50);
        D_00604320[temp1].unk_0C = func_00201450(arg0, temp0);
        temp1++;
        sp70.unk_30 = 0.7853982f;
        spF0.unk_0C->unk_72 |= 0x40;
        func_001F6260(&spF0);
        temp0 = &D_00604320[temp1];
        UNK_00201C00_SUB(temp0->unk_00, spF0.unk_2C, spF0.unk_50);
        D_00604320[temp1].unk_0C = func_00201450(arg0, temp0);
        temp1++;
        sp70.unk_30 = -0.7853982f;
        spF0.unk_0C->unk_72 |= 0x40;
        func_001F6260(&spF0);
        temp0 = &D_00604320[temp1];
        UNK_00201C00_SUB(temp0->unk_00, spF0.unk_2C, spF0.unk_50);
        D_00604320[temp1].unk_0C = func_00201450(arg0, temp0);
        temp1++;
        sp1E4 += sp1E8;
    }

    D_00360160 = temp1;
    spF0.unk_08->unk_60 = temp4;
}
