/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_001FF9C0_0;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    u8 pad_34[8];
    f32 unk_3C;
    f32 unk_40;
    u8 pad_44[4];
    f32 unk_48;
    f32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    f32 unk_58;
    u8 pad_5C[0xC];
    void *unk_68;
    u8 pad_6C[4];
    u16 unk_70;
    u16 unk_72;
} unk_001FF9C0_1;

typedef struct {
    u8 pad_00[0x74];
    u8 unk_74;
} unk_001FF9C0_2;

typedef struct {
    u8 pad_00[8];
    unk_001FF9C0_2 *unk_08;
    unk_001FF9C0_1 *unk_0C;
    u8 pad_10[0xC];
    void *unk_1C;
    u8 pad_20[0x30];
    unk_001FF9C0_0 unk_50;
    u8 pad_5C[0x24];
    s8 unk_80;
    u8 pad_81[0x1F];
    unk_001FF9C0_0 unk_A0;
    unk_001FF9C0_0 unk_AC;
    unk_001FF9C0_0 unk_B8;
    f32 unk_C4;
    f32 unk_C8;
    f32 unk_CC;
} unk_001FF9C0_3;

typedef struct {
    f32 unk_00;
    unk_001FF9C0_0 unk_04;
    unk_001FF9C0_0 unk_10;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    u8 pad_28[0x10];
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    u8 pad_44[4];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    u8 pad_54[2];
    u16 unk_56;
    f32 unk_58;
    f32 unk_5C;
    f32 unk_60;
    f32 unk_64;
    unk_001FF9C0_0 unk_68;
    f32 unk_74;
} unk_001FF9C0_4;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[0x14];
    void *unk_20;
} unk_001FF9C0_5;

extern "C" {
unk_001FF9C0_5 *HIE_fn_hGetSuperObjectObject(void *);
void *func_001B84B0(void *);
u8 *func_001387B0(void *);
void *func_001BE470(void *);
void func_001BE490(void *, void *);
extern f32 D_005AD914[];
extern f32 D_005AD918[];

void func_001FF9C0(unk_001FF9C0_3 *arg0)
{
    unk_001FF9C0_4 *temp;
    void *temp1;
    void *temp2;
    void *temp3;

    temp2 = HIE_fn_hGetSuperObjectObject(arg0->unk_1C)->unk_08;
    (void)temp1;
    if (temp2 != 0 && (temp1 = func_001B84B0(temp2)) != 0) {
        temp = (unk_001FF9C0_4 *)(func_001387B0(temp1) + 0x2C);
        temp->unk_64 = D_005AD914[0];
        temp->unk_74 = D_005AD918[0];
        temp->unk_00 = arg0->unk_0C->unk_30;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x04))->unk_00 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xA0))->unk_00;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x04))->unk_04 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xA0))->unk_04;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x04))->unk_08 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xA0))->unk_08;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x10))->unk_00 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xAC))->unk_00;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x10))->unk_04 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xAC))->unk_04;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x10))->unk_08 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xAC))->unk_08;
        temp->unk_38 = arg0->unk_C4;
        if (0.0f == arg0->unk_0C->unk_3C) {
            arg0->unk_0C->unk_3C = 0.001f;
        }
        temp->unk_3C = arg0->unk_0C->unk_3C;
        temp->unk_40 = arg0->unk_0C->unk_40;
        temp->unk_48 = arg0->unk_C8;
        if (0.0f == arg0->unk_0C->unk_48) {
            arg0->unk_0C->unk_3C = 0.001f;
        }
        temp->unk_4C = arg0->unk_0C->unk_48;
        temp->unk_50 = arg0->unk_0C->unk_4C;
        temp->unk_1C = arg0->unk_CC;
        if (0.0f == arg0->unk_0C->unk_48) {
            arg0->unk_0C->unk_54 = 0.001f;
        }
        temp->unk_20 = arg0->unk_0C->unk_54;
        temp->unk_24 = arg0->unk_0C->unk_58;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x58))->unk_00 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0x50))->unk_00;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x58))->unk_04 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0x50))->unk_04;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x58))->unk_08 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0x50))->unk_08;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x68))->unk_00 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xB8))->unk_00;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x68))->unk_04 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xB8))->unk_04;
        ((unk_001FF9C0_0 *)((u8 *)temp + 0x68))->unk_08 = ((unk_001FF9C0_0 *)((u8 *)arg0 + 0xB8))->unk_08;
        if ((u8)arg0->unk_08->unk_74 & 2) {
            arg0->unk_0C->unk_70 |= 1;
            arg0->unk_0C->unk_70 |= 4;
            arg0->unk_0C->unk_70 |= 0x10;
        }
        if (arg0->unk_0C->unk_68 == 0) {
            temp->unk_60 = temp->unk_5C = temp->unk_58 = 0.0f;
        }
        if ((u16)arg0->unk_0C->unk_72 & 0x2000) {
            arg0->unk_0C->unk_70 |= 4;
            temp->unk_60 = temp->unk_5C = temp->unk_58 = 0.0f;
        }
        if ((u16)arg0->unk_0C->unk_70 & 0x80) {
            arg0->unk_0C->unk_70 |= 0x10;
        }
        if ((u16)arg0->unk_0C->unk_70 & 1) {
            arg0->unk_0C->unk_70 |= 2;
            temp->unk_64 = 1.0f;
        }
        if ((u16)arg0->unk_0C->unk_70 & 4) {
            arg0->unk_0C->unk_70 |= 8;
            temp->unk_64 = 1.0f;
        }
        if ((u16)arg0->unk_0C->unk_70 & 0x10) {
            arg0->unk_0C->unk_70 |= 0x20;
            temp->unk_74 = 1.0f;
        }
        temp->unk_56 = arg0->unk_0C->unk_70;
        if (arg0->unk_0C->unk_68 != 0 && ((u16)arg0->unk_0C->unk_70 & 0x40)) {
            temp3 = HIE_fn_hGetSuperObjectObject(arg0->unk_1C)->unk_20;
            func_001BE490(temp3, func_001BE470(HIE_fn_hGetSuperObjectObject(arg0->unk_0C->unk_68)->unk_20));
        }
        if (!arg0->unk_80) {
            temp->unk_64 = temp->unk_74 = 1.0f;
        }
    }
}
}
