/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x5C];
    f32 unk_5C;
    u8 pad_60[0x10];
    u16 unk_70;
} unk_func_001A2480_0;

typedef struct {
    u8 pad_00[4];
    unk_func_001A2480_0 *unk_04;
    u8 pad_08[4];
    unk_func_001A2480_0 *unk_0C;
} unk_func_001A2480_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    unk_func_001A2480_1 *unk_10;
    u8 pad_14[12];
    s32 *unk_20;
} unk_func_001A2480_2;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
} unk_func_001A2480_3;

typedef struct {
    u8 pad_00[0x84];
    s8 unk_84;
} unk_func_001A2480_4;

typedef struct {
    __int128 unk_00[6];
} unk_func_001A2480_5;

typedef struct {
    unk_func_001A2480_5 unk_00;
    u8 pad_60[0xC];
    unk_func_001A2480_2 *unk_6C;
    u8 pad_70[0x10];
} unk_func_001A2480_6;

unk_func_001A2480_2 *HIE_fn_hGetSuperObjectObject(s32);
void func_0012C570(void);
void func_0012DA70(void);
unk_func_001A2480_4 *func_00138800(unk_func_001A2480_3 *);
void func_00153920();
void *func_00155EE0(s32);
u8 func_0015A7F0(s32);
void func_00166810(f32);
s32 func_001979C0(s32);
s32 func_0019A610(s32);
void func_0019AA80(void);
s32 func_0019C120(void);
u8 func_001A0AA0(s32);
void func_001A1730(s32, s32);
void func_001A1AF0(s32, s32, void *);
void func_001A1F70(s32);
void func_001A36C0(void);
void func_001A7D30(s32, s32);
s32 func_001A7D60(s32);
s32 func_001A7D80(void);
void func_001A7DB0(s32, s32);
s32 func_001A7DE0(s32);
s32 func_001AEC70(s32);
s32 func_001AEF20(s32);
void func_001AF310(void);
s32 func_001B4C70(unk_func_001A2480_0 *);
unk_func_001A2480_3 *func_001B84B0(s32);
void func_001B9E20(s32);
void func_001BE240(s32, s32);
s32 func_001BE470(s32 *);
void func_001BE490(s32 *, s32);
void func_001BE710(s32);
void func_001D0650(void);
void func_001E6290(s32);
void func_002CF3E0(void);

extern unk_func_001A2480_5 D_003334B0[];
extern u8 D_0035FF4C;
extern u8 D_0035FF50;
extern u8 D_0035FF64;
extern s32 D_0035FF70;
extern u8 D_0035FF9C;
extern u8 D_0035FFBC;
extern s32 D_005AB688[];
extern s32 D_005AB690[];
extern s32 D_005AB69C[];
extern s32 D_005AB7F8[];
extern u32 D_005AB804[];
extern s8 D_005ACAD2[];
extern u8 D_005ACB00[];
extern f32 D_005ACB50[];
extern s32 D_005ACB60[];

void func_001A2480(void) {
    unk_func_001A2480_6 spC0;
    s32 temp_s6;
    u8 temp_s3;
    s32 temp_s4;
    unk_func_001A2480_1 *temp_s5;
    s32 temp_s2;
    unk_func_001A2480_3 *temp_s1;
    s32 temp_s0;

    temp_s3 = 1;
    func_001D0650();
    func_002CF3E0();
    if (!D_0035FF64 && D_0035FF50) {
        func_001E6290((u8)D_0035FF4C);
    }
    if (D_0035FF64) {
        temp_s2 = func_001A7D60(func_001A7D80());
        spC0.unk_6C = HIE_fn_hGetSuperObjectObject(temp_s2);
        func_001A0AA0(temp_s2);
        func_001A1730(spC0.unk_6C->unk_04, D_005AB7F8[0]);
        func_001B9E20(temp_s2);
        func_001BE710(temp_s2);
    }
    if (!func_0019C120()) {
        func_0012DA70();
        if (func_001A7DE0(func_001A7D80())) {
            func_001A7D30(func_001A7D80(), func_001A7DE0(func_001A7D80()));
            func_001A7DB0(func_001A7D80(), 0);
        }
        func_001A36C0();
        func_0019AA80();
        func_0012C570();
        temp_s4 = 0;
        temp_s0 = func_001AEC70(0);
        temp_s4 = func_001B4C70(HIE_fn_hGetSuperObjectObject(temp_s0)->unk_10->unk_04);
        func_001A1F70(D_0035FF70);
        func_001A1AF0(D_0035FF70, temp_s4, func_00155EE0(func_001979C0(temp_s4)));
        if (temp_s0 && D_005ACB60[0]) {
            spC0.unk_00 = D_003334B0[0];
            temp_s5 = HIE_fn_hGetSuperObjectObject(temp_s0)->unk_10;
            if (D_005ACB50[0] < 0.0f) {
                temp_s5->unk_0C->unk_5C = temp_s5->unk_04->unk_5C = -D_005ACB50[0];
                D_005ACB50[0] = 1.0f;
            }
            func_00153920(func_001979C0(temp_s0), D_005ACB00, &spC0.unk_00);
            if (D_0035FF64 && func_001AEF20(temp_s0)) {
                func_001BE490((void *)HIE_fn_hGetSuperObjectObject(temp_s0)->unk_20, func_001BE470(HIE_fn_hGetSuperObjectObject(func_001A7D60(func_001A7D80()))->unk_20));
                func_001BE240(func_001BE470(HIE_fn_hGetSuperObjectObject(temp_s0)->unk_20), temp_s0);
            } else if (!func_0019A610(temp_s0) &&
                       (!func_001AEF20(temp_s0) || (s8)D_005ACAD2[0] != 1 ||
                        !((u16)HIE_fn_hGetSuperObjectObject(temp_s0)->unk_10->unk_0C->unk_70 & 0x40))) {
                temp_s6 = HIE_fn_hGetSuperObjectObject(temp_s0)->unk_08;
                if (temp_s6) {
                    temp_s1 = func_001B84B0(temp_s6);
                    if (temp_s1) {
                        if (((temp_s1->unk_0C & 2) ? 1 : 0) &&
                            ((temp_s1->unk_08 & 2) ? 1 : 0)) {
                            temp_s3 = (u8)((s8)func_00138800(temp_s1)->unk_84 == 0);
                        } else {
                            temp_s3 = 1;
                        }
                    }
                }
                if (temp_s3) {
                    func_001BE710(temp_s0);
                }
            }
        }
        if (!D_005ACB60[0]) {
            func_001AF310();
        }
        func_00166810((f32)D_005AB804[0]);
    }
    if (func_0015A7F0(D_005AB690[0]) == 1) {
        D_0035FFBC = (u8)(((u8)D_0035FFBC + 1) % 6);
    }
    (void)(func_0015A7F0(D_005AB688[0]) == 1);
    if (func_0015A7F0(D_005AB69C[0]) == 1) {
        D_0035FF9C = (u8)(1 - (s8)D_0035FF9C);
    }
}
