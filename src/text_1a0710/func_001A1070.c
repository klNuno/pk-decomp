/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_001A1070_0;

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
} unk_001A1070_1;

typedef struct {
    u8 pad_00[0x50];
    unk_001A1070_1 *unk_50;
} unk_001A1070_2;

typedef struct {
    u8 pad_00[0x128];
    u8 unk_128;
} unk_001A1070_3;

typedef struct {
    u8 pad_00[4];
    unk_001A1070_2 *unk_04;
    u8 pad_08[0x15C];
    unk_001A1070_3 *unk_164;
} unk_001A1070_4;

typedef struct {
    u8 pad_00[0x70];
    u16 unk_70;
} unk_001A1070_5;

typedef struct {
    u8 pad_00[0xC];
    unk_001A1070_5 *unk_0C;
} unk_001A1070_6;

typedef struct {
    unk_001A1070_4 *unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    unk_001A1070_6 *unk_10;
    u8 pad_14[0xC];
    s32 *unk_20;
} unk_001A1070_7;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    s32 unk_0C;
} unk_001A1070_8;

typedef struct {
    u8 pad_00[0x84];
    s8 unk_84;
} unk_001A1070_9;

typedef struct {
    u8 unk_10[0xC];
    s32 unk_1C;
    union {
        s32 unk_00;
        s8 unk_01;
    } unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
} unk_001A1070_10;

extern u8 D_0035FF64;
extern s32 D_005AB7F8[];
extern s8 D_005ACAD2[];
unk_001A1070_7 *HIE_fn_hGetSuperObjectObject(void *);
unk_001A1070_9 *func_00138800(unk_001A1070_8 *);
void func_00155EC0();
s32 func_00197860(unk_001A1070_4 *);
s32 func_001979C0(void *);
s32 func_0019A610(void *);
s32 func_0019ABC0(s32);
void func_001A1670(unk_001A1070_4 *, f32);
u8 func_001A16A0(unk_001A1070_4 *);
s32 func_001A16C0(unk_001A1070_4 *);
s32 func_001A16E0(s32);
void func_001A1730(s32, s32);
void func_001A5250(void *);
s32 func_001A7C90(void *);
void *func_001A7D60(s32);
s32 func_001A7D80(void);
s32 func_001ABA70(s32);
s32 func_001AEF20(void *);
unk_001A1070_8 *func_001B84B0(s32);
void func_001B9E20(void *);
void func_001BE240();
s32 func_001BE470(s32 *);
void func_001BE490(s32 *, s32);
void func_001BE710(void *);
u8 func_001C25D0(void *);
void func_001C2980(void *);
void func_001C2F90(void *, u8, s32);
void func_001D2A10(unk_001A1070_3 *);
s32 func_001D55B0(void *);

void func_001A1070(unk_001A1070_0 *arg0)
{
    unk_001A1070_4 *unk_00;
    u8 unk_01;
    unk_001A1070_8 *unk_02;
    s32 unk_03;
    u8 unk_04 = 1;
    u8 unk_05;
    s32 unk_06;
    s32 unk_07;
    s32 unk_08;
    unk_001A1070_10 unk_09;

    func_001A1730(HIE_fn_hGetSuperObjectObject(arg0)->unk_04, D_005AB7F8[0]);
    func_00155EC0(func_001979C0(arg0), &unk_09);
    if (func_001A7C90(arg0) == 0 || !D_0035FF64) {
        unk_00 = HIE_fn_hGetSuperObjectObject(arg0)->unk_00;
        if (unk_00 != NULL) {
            unk_03 = func_0019ABC0(HIE_fn_hGetSuperObjectObject(arg0)->unk_04);
            unk_07 = func_00197860(unk_00);
            unk_09.unk_1C = unk_07 ? func_001ABA70(unk_07) : 0;
            unk_09.unk_20.unk_00 = 1;
            unk_09.unk_24 = 1;
            unk_09.unk_28 = 1;
            if (unk_09.unk_1C != 0) {
                unk_09.unk_2C = 0;
                if ((unk_03 & 0x2000) && arg0->unk_10 > 0) {
                    unk_09.unk_2C = 1;
                }
                if (unk_09.unk_2C == 0) {
                    unk_09.unk_28 = 0;
                }
            }
            if (unk_09.unk_28 == 0) {
                unk_09.unk_30 = 0;
                if ((unk_03 & 0x800) && (unk_03 & 0x1001)) {
                    unk_09.unk_30 = 1;
                }
                if (unk_09.unk_30 == 0) {
                    unk_09.unk_24 = 0;
                }
            }
            if (unk_09.unk_24 == 0) {
                unk_09.unk_34 = 0;
                if ((unk_03 & 0x40000) && func_001A16E0(HIE_fn_hGetSuperObjectObject(arg0)->unk_04) != 0) {
                    unk_09.unk_34 = 1;
                }
                if (unk_09.unk_34 == 0) {
                    unk_09.unk_20.unk_00 = 0;
                }
            }
            unk_05 = unk_09.unk_20.unk_01;
            if (unk_00->unk_164 != NULL) {
                unk_05 = 0;
            }
            if (!unk_05 || (unk_03 & 0x800000)) {
                unk_01 = func_001C25D0(arg0);
                unk_01 &= (u8)!func_001A16C0(unk_00);
                unk_01 |= func_001A16A0(unk_00);
                if (unk_00->unk_164 != NULL && unk_00->unk_164->unk_128) {
                    func_001D2A10(unk_00->unk_164);
                }
                unk_01 &= (u8)!func_001D55B0(arg0);
                if (!unk_01 && func_001A16A0(unk_00)) {
                    func_001A1670(unk_00, (f32)(u16)(unk_00->unk_04->unk_50->unk_50 - 1));
                }
                if (!unk_01) {
                    func_001C2F90(arg0, unk_05, 0);
                } else {
                    func_001C2980(arg0);
                }
            } else {
                unk_01 = 1;
            }
            func_001A5250(arg0);
            if (HIE_fn_hGetSuperObjectObject(arg0)->unk_04 == 0) {
                return;
            }
        }
        func_001B9E20(arg0);
        if (D_0035FF64 && func_001AEF20(arg0) != 0) {
            func_001BE490((s32 *)HIE_fn_hGetSuperObjectObject(arg0)->unk_20, func_001BE470(HIE_fn_hGetSuperObjectObject(func_001A7D60(func_001A7D80()))->unk_20));
            func_001BE240(func_001BE470(HIE_fn_hGetSuperObjectObject(arg0)->unk_20), arg0);
            return;
        }
        if (func_0019A610(arg0) == 0 &&
            (func_001AEF20(arg0) == 0 || D_005ACAD2[0] != 1 ||
             !(HIE_fn_hGetSuperObjectObject(arg0)->unk_10->unk_0C->unk_70 & 0x40))) {
            unk_06 = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
            if (unk_06 != 0) {
                unk_02 = func_001B84B0(unk_06);
                if (unk_02 != NULL) {
                    if (unk_02->unk_0C & 2) {
                        unk_09.unk_38 = 1;
                    } else {
                        unk_09.unk_38 = 0;
                    }
                    if (unk_09.unk_38 != 0) {
                        if (unk_02->unk_08 & 2) {
                            unk_09.unk_3C = 1;
                        } else {
                            unk_09.unk_3C = 0;
                        }
                        if (unk_09.unk_3C != 0) {
                            unk_04 = (u8)(func_00138800(unk_02)->unk_84 == 0);
                            goto block_001A161C;
                        }
                    }
                    unk_04 = 1;
                }
            }
block_001A161C:
            if (unk_04) {
                func_001BE710(arg0);
            }
        }
    }
}
