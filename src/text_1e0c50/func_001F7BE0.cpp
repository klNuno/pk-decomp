/* profile: o0_301 */
#include "common.h"

typedef s32 unk_func_001F7BE0_5[3];

typedef union unk_func_001F7BE0_0 {
    f32 unk_00[3];
    unk_func_001F7BE0_5 unk_00_s32;
} unk_func_001F7BE0_0;

typedef struct unk_func_001F7BE0_1 {
    u8 pad_00[0xF8];
    unk_func_001F7BE0_0 unk_F8;
} unk_func_001F7BE0_1;

typedef struct unk_func_001F7BE0_2 {
    u8 pad_00[4];
    void *unk_04;
    u8 pad_08[4];
    void *unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    u8 pad_28[0x38];
    s32 unk_60;
    f32 unk_64;
    u8 pad_68[4];
    f32 unk_6C;
    f32 unk_70;
    u8 unk_74;
    u8 unk_75;
    u8 unk_76;
} unk_func_001F7BE0_2;

typedef struct unk_func_001F7BE0_3 {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[8];
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x30];
    s32 unk_68;
    s32 unk_6C;
    u16 unk_70;
    u16 unk_72;
} unk_func_001F7BE0_3;

typedef struct unk_func_001F7BE0_4 {
    unk_func_001F7BE0_1 *unk_00;
    u8 pad_04[4];
    unk_func_001F7BE0_2 *unk_08;
    unk_func_001F7BE0_3 *unk_0C;
    unk_func_001F7BE0_3 *unk_10;
    u8 pad_14[0xC];
    unk_func_001F7BE0_0 unk_20;
    unk_func_001F7BE0_0 unk_2C;
    u8 pad_38[0x58];
    s8 unk_90;
} unk_func_001F7BE0_4;

extern "C" {
f32 func_00151360(f32);
s32 func_001B45E0(unk_func_001F7BE0_2 *);
void func_001B4E30(unk_func_001F7BE0_2 *);
f32 func_001E60E0(f32);
void func_001F49F0(unk_func_001F7BE0_4 *);
void func_001F4BF0(unk_func_001F7BE0_4 *);
void func_001F55C0(unk_func_001F7BE0_4 *);
s32 func_001F56E0(unk_func_001F7BE0_4 *, unk_func_001F7BE0_0 *);
void func_001F5B90(unk_func_001F7BE0_4 *);
void func_001F62F0(unk_func_001F7BE0_4 *);
s32 func_001F7A50(unk_func_001F7BE0_4 *);
void func_001F7BA0(unk_func_001F7BE0_4 *);
s32 func_001FE560(unk_func_001F7BE0_0 *, unk_func_001F7BE0_0 *, f32);
void func_00202730(unk_func_001F7BE0_4 *);
void func_00202810(unk_func_001F7BE0_4 *);
void func_00202A90(unk_func_001F7BE0_4 *);
void func_00203160(unk_func_001F7BE0_4 *);
void func_002038E0(unk_func_001F7BE0_4 *);
void *memcpy(void *, const void *, u32);
extern s8 D_0035F590;
extern u8 D_0035FF64;
extern s8 D_00360150;
extern s8 D_00360154;
extern s8 D_00360158;
extern u32 D_005AB848[];
extern f32 D_005AB850[];
extern f32 D_005AD8C0[];
extern f32 D_005AD8D4[];
extern s16 D_005AD8E8[];
extern s16 D_005AD91C[];

void func_001F7BE0(unk_func_001F7BE0_4 *arg0) {
    unk_func_001F7BE0_0 sp40;
    s32 temp0;
    s32 temp1;

unk_00:
    D_0035F590 = 1;
    func_001F7BA0(arg0);
    (*(unk_func_001F7BE0_5 *)&sp40)[0] = (*(const unk_func_001F7BE0_5 *)&arg0->unk_00->unk_F8)[0];
    (*(unk_func_001F7BE0_5 *)&sp40)[1] = (*(const unk_func_001F7BE0_5 *)&arg0->unk_00->unk_F8)[1];
    (*(unk_func_001F7BE0_5 *)&sp40)[2] = (*(const unk_func_001F7BE0_5 *)&arg0->unk_00->unk_F8)[2];
    if (func_001E60E0(func_00151360(sp40.unk_00[0]) + func_00151360(sp40.unk_00[1]) +
                       func_00151360(sp40.unk_00[2])) < D_005AD8C0[0]) {
        arg0->unk_08->unk_74 |= 4;
        if (arg0->unk_08->unk_70 < 1000.0f * (f32)D_005AD8E8[0] * D_005AB850[0]) {
            arg0->unk_08->unk_70 = arg0->unk_08->unk_70 + (f32)D_005AB848[0];
        }
    } else {
        arg0->unk_08->unk_70 = 0.0f;
    }
    if (D_0035FF64) {
        (void)func_001B45E0(arg0->unk_08);
        (void)memcpy((void *)((u8 *)arg0->unk_08->unk_0C), (const void *)arg0->unk_08->unk_04, 0x7C);
        arg0->unk_0C->unk_18 = 2.0f;
        arg0->unk_0C->unk_1C = 2.0f;
        arg0->unk_0C->unk_28 = 0.0f;
        arg0->unk_0C->unk_2C = 0.0f;
        arg0->unk_0C->unk_30 = 0.0f;
        arg0->unk_0C->unk_34 = 0.0f;
        arg0->unk_0C->unk_70 = 0x55;
        arg0->unk_0C->unk_72 = 0xA;
        arg0->unk_08->unk_75 = 0;
        arg0->unk_08->unk_74 = 0;
        arg0->unk_08->unk_60 = 4;
    }
    if (arg0->unk_0C->unk_68 != 0 && arg0->unk_0C->unk_6C != 0) {
        arg0->unk_08->unk_75 &= ~8;
        arg0->unk_0C->unk_72 |= 8;
        arg0->unk_08->unk_60 = 5;
    }
    if ((u16)arg0->unk_0C->unk_72 & 0x4000) {
        temp0 = 1;
    } else {
        temp0 = 0;
    }
    D_00360158 = temp0;
    if ((u16)arg0->unk_0C->unk_72 & 0x20) {
        temp1 = 1;
    } else {
        temp1 = 0;
    }
    D_00360154 = temp1;
    func_001F49F0(arg0);
    func_001F4BF0(arg0);
    func_001F55C0(arg0);
    func_001F5B90(arg0);
    if (!((u8)arg0->unk_08->unk_74 & 2) && arg0->unk_0C->unk_68 != 0 && !D_00360154 &&
        !((u8)arg0->unk_08->unk_75 & 8) && !((u16)arg0->unk_0C->unk_72 & 0x2000) &&
        func_001F56E0(arg0, &arg0->unk_2C) != 0) {
        func_001F5B90(arg0);
    }
    if (((u8)arg0->unk_08->unk_75 & 4 || (u16)arg0->unk_0C->unk_72 & 0x40) &&
        ((u16)arg0->unk_0C->unk_72 & 0x1000 || (u16)arg0->unk_0C->unk_72 & 0x2000 ||
         (u8)arg0->unk_08->unk_74 & 2 || func_001FE560(&arg0->unk_20, &arg0->unk_2C, D_005AD8D4[0]) != 0)) {
        arg0->unk_10->unk_72 &= ~0x40;
        arg0->unk_0C->unk_72 &= ~0x40;
        arg0->unk_08->unk_75 &= ~4;
        arg0->unk_08->unk_76 = 0;
    }
    if (((s16)D_005AD91C[0] & 0x10) && arg0->unk_08->unk_60 == 1 && arg0->unk_90 &&
        func_001FE560(&arg0->unk_20, &arg0->unk_2C, D_005AD8D4[0]) != 0) {
        if ((u8)arg0->unk_08->unk_75 & 2) {
            func_001B4E30(arg0->unk_08);
        }
        arg0->unk_08->unk_75 &= ~8;
        arg0->unk_08->unk_74 &= ~1;
        arg0->unk_08->unk_60 = 0;
        goto unk_00;
    }
    switch (arg0->unk_08->unk_60) {
    case 0:
    case 1:
        func_00202A90(arg0);
        func_00202810(arg0);
        func_00203160(arg0);
        break;
    }
    switch (arg0->unk_08->unk_60) {
    case 0:
        (void)func_001F7A50(arg0);
        break;
    case 1:
        func_002038E0(arg0);
        func_001F7A50(arg0);
        break;
    case 2:
        func_00202730(arg0);
        break;
    case 5:
        arg0->unk_08->unk_60 = 0;
        break;
    case 4:
        arg0->unk_08->unk_60 = 0;
    }
    func_001F62F0(arg0);
    if ((u16)arg0->unk_0C->unk_72 & 0x1000 || (u16)arg0->unk_0C->unk_72 & 0x2000 ||
        (u8)arg0->unk_08->unk_74 & 2 || arg0->unk_08->unk_60 == 0) {
        arg0->unk_08->unk_18 = arg0->unk_08->unk_14 = arg0->unk_08->unk_10 = 0.0f;
        arg0->unk_08->unk_24 = arg0->unk_08->unk_20 = arg0->unk_08->unk_1C = 0.0f;
        arg0->unk_08->unk_64 = 0.0f;
        arg0->unk_08->unk_6C = 0.0f;
        arg0->unk_08->unk_75 &= ~8;
    }
    D_00360150 = 0;
}
}
