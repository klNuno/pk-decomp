/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00223D70_0 {
    u8 pad_00[8];
    struct unk_func_00223D70_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_00223D70_0 *unk_14;
    u8 pad_18[4];
    s32 unk_1C;
} unk_func_00223D70_0;

typedef struct unk_func_00223D70_1 {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
} unk_func_00223D70_1;

typedef struct unk_func_00223D70_2 {
    union {
        unk_func_00223D70_1 *unk_00_ptr;
        s8 unk_00_s8;
    } unk_00;
    u8 pad_04[0xC];
} unk_func_00223D70_2;

typedef struct unk_func_00223D70_3 {
    s32 unk_00;
    unk_func_00223D70_1 *unk_04;
    unk_func_00223D70_0 *unk_08;
    u8 pad_0C[3];
    u8 unk_0F;
} unk_func_00223D70_3;

unk_func_00223D70_1 *HIE_fn_hGetSuperObjectObject(unk_func_00223D70_0 *);
s32 fn_h_StandardGameGetSuperObject(s32);
s32 *fn_p_stEvalTree(unk_func_00223D70_0 *, s32 *, unk_func_00223D70_2 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_00223D70_2 *);
void func_0012D450(s32);
void func_0012D6F0(unk_func_00223D70_0 *, s32, u8);
void func_00148D00(s32, unk_func_00223D70_0 *);
s32 func_001971C0(unk_func_00223D70_0 *);
void func_001975E0(unk_func_00223D70_1 *);
u8 func_00197CC0(s32);
void func_00197D00(unk_func_00223D70_1 *);
void func_0019B510(char *, u8);
void func_0019B9E0(char *, u8);
void func_0019D9C0(void);
void func_0019DAB0(void);
void func_001A1730(s32, s32);
s32 func_001A1F50(s32);
void func_001A2AD0(unk_func_00223D70_0 *);
s32 func_001A7D80(void);
void func_001A7DB0(s32, s32);
s32 func_001B84B0(s32);
void func_00224180(s32, u8);
s32 func_002241B0(s32);
extern s8 D_00360120;
extern s8 D_00360124;
extern s32 D_005AB7F8[];
extern u8 D_005ACAD0[];

s32 *func_00223D70(unk_func_00223D70_0 *arg0, s32 *arg1) {
    unk_func_00223D70_2 spC0;
    unk_func_00223D70_3 spD0;
    unk_func_00223D70_0 *temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    unk_func_00223D70_0 *temp_s3;
    s32 temp_s4;
    unk_func_00223D70_1 *temp_s5;
    s32 temp_s6;
    u8 temp_s7;
    u8 temp_fp;

    temp_s6 = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, &spC0);
    switch (temp_s6) {
    case 0x69:
        temp_s5 = spC0.unk_00.unk_00_ptr;
        if (D_005AB7F8[0] == func_001A1F50(temp_s5->unk_04)) {
            func_001A1730(temp_s5->unk_04, D_005AB7F8[0] - 1);
            func_0012D450(fn_h_StandardGameGetSuperObject(temp_s5->unk_04));
        }
        return arg1;
    case 0x153:
        temp_fp = (u8)spC0.unk_00.unk_00_s8;
        if (temp_fp) {
            func_0019D9C0();
        } else if (D_005ACAD0[0]) {
            func_0019DAB0();
        }
        D_005ACAD0[0] = temp_fp;
        return arg1;
    case 0x151:
        spD0.unk_00 = HIE_fn_hGetSuperObjectObject(arg0)->unk_04;
        temp_s7 = (u8)spC0.unk_00.unk_00_s8;
        spD0.unk_0F = func_00197CC0(spD0.unk_00);
        if (spD0.unk_0F != temp_s7) {
            if (spD0.unk_0F) {
                temp_s4 = 0;
                spD0.unk_08 = temp_s0 = arg0->unk_08;
                while (temp_s0) {
                    if (func_001971C0(temp_s0) == 2) {
                        temp_s2 = HIE_fn_hGetSuperObjectObject(temp_s0)->unk_08;
                        if (temp_s2) {
                            temp_s1 = func_001B84B0(temp_s2);
                            if (temp_s1 && func_002241B0(temp_s1)) {
                                func_00148D00(temp_s1, temp_s0);
                            }
                        }
                        func_001A2AD0(temp_s0);
                    }
                    temp_s4++;
                    temp_s3 = temp_s0 = temp_s0->unk_14;
                    (void)temp_s3;
                }
            }
            func_00224180(spD0.unk_00, temp_s7);
            func_0012D6F0(arg0, arg0->unk_1C, temp_s7);
        }
        return arg1;
    case 0x60:
        func_001A7DB0(func_001A7D80(), fn_h_StandardGameGetSuperObject(spC0.unk_00.unk_00_ptr->unk_04));
        return arg1;
    case 0x61:
        spD0.unk_04 = spC0.unk_00.unk_00_ptr;
        func_001975E0(spD0.unk_04);
        return arg1;
    case 0x62:
        func_00197D00(spC0.unk_00.unk_00_ptr);
        return arg1;
    case 0x65:
    case 0x63:
        func_0019B510(fn_szGetStringFromTextOrStringParam(&spC0), temp_s6 == 0x63);
        return arg1;
    case 0x64:
        func_0019B9E0(fn_szGetStringFromTextOrStringParam(&spC0), temp_s6 == 0x63);
        return arg1;
    case 0x66:
        D_00360124 = spC0.unk_00.unk_00_s8;
        D_00360120 = 1;
        return arg1;
    }
    return arg1;
}
