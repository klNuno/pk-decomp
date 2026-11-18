/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u16 unk_10;
    u16 unk_12;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_001CE750_0;

typedef struct {
    u8 pad_00[2];
    u16 unk_02;
    u8 pad_04[2];
    u16 unk_06;
    s32 unk_08;
    u8 pad_0C[4];
} unk_001CE750_1;

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
    u16 unk_10;
    u8 pad_12[0x22];
    u16 unk_34;
    u16 unk_36;
} unk_001CE750_2;

typedef struct {
    u8 pad_00[0xC];
    u16 unk_0C;
} unk_001CE750_3;

typedef struct {
    union {
        u16 unk_00;
        u8 unk_00_u8;
    } unk_00;
    u8 pad_02[4];
} unk_001CE750_4;

typedef struct {
    u8 pad_00[0x5C];
    u16 unk_5C;
} unk_001CE750_5;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_001CE750_6;

typedef struct {
    unk_001CE750_6 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10;
    u8 pad_11[3];
} unk_001CE750_7;

s32 Erm_SCE_fn_iMessageBox(char *, char *, s32);
void func_0011CBB0(char *, char *, ...);
u16 func_001273A8(f32);
s32 func_0019D550(f32);
s32 func_001C06E0(s32);
unk_001CE750_2 *func_001CAAA0(u16, s32);
void func_001CB2E0(unk_001CE750_0 *, unk_001CE750_0 *, unk_001CE750_1 *, s32, f32, s32);

extern char D_0034BB00[];
extern char D_0034BB60[];
extern char D_005DFA60[];
extern unk_001CE750_0 *D_00360040;
extern s32 *D_00360044;
extern u16 *D_00360048;
extern unk_001CE750_1 *D_0036004C;
extern unk_001CE750_3 *D_00360050;
extern unk_001CE750_4 *D_00360054;

void func_001CE750(s32 arg0, s32 arg1, unk_001CE750_5 *arg2, f32 arg3, unk_001CE750_7 *arg4, s32 arg5)
{
    volatile u16 unk_1AC;
    volatile u16 unk_1AE;
    f32 unk_1A4;
    f32 unk_1A8;
    char unk_A0[0x104];
    unk_001CE750_0 *unk_00;
    unk_001CE750_1 *unk_04;
    unk_001CE750_0 *unk_08;
    u16 *unk_0C;
    unk_001CE750_2 *unk_10;
    u8 unk_14;
    u16 i;
    s32 *unk_1C;
    u16 unk_20;

    unk_20 = func_001273A8(arg3);
    unk_1AE = arg2->unk_5C;
    unk_10 = func_001CAAA0(unk_1AE, func_0019D550(arg3));
    unk_04 = &D_0036004C[unk_10->unk_36];
    unk_1AC = D_00360050[unk_10->unk_34 + unk_20].unk_0C;
    for (i = 0; i < unk_10->unk_0E; unk_04++, i++) {
        unk_1A4 = 0.0f;
        if (unk_04->unk_02 != 0xFFFF && !arg4[unk_04->unk_02].unk_10) {
            unk_0C = &D_00360048[unk_04->unk_06 + unk_1AC];
            unk_1C = &D_00360044[unk_04->unk_08 + unk_20];
            unk_00 = &D_00360040[*unk_1C];
            if (unk_00->unk_12 & 0x80) {
                if (unk_00->unk_12 & 0x200) {
                    unk_08 = &D_00360040[D_00360044[unk_04->unk_08]];
                    unk_1A4 = (arg3 - (f32)unk_00->unk_10) /
                              (f32)(unk_10->unk_10 + unk_08->unk_10 - unk_00->unk_10);
                } else {
                    unk_08 = unk_00;
                    unk_1A4 = 0.0f;
                }
            } else {
                unk_08 = unk_00 + 1;
                if (unk_08->unk_10 == unk_00->unk_10) {
                    unk_1A4 = 0.0f;
                } else {
                    unk_1A4 = (arg3 - (f32)unk_00->unk_10) /
                              (f32)(unk_08->unk_10 - unk_00->unk_10);
                }
            }
            if (unk_00->unk_22 != 0 && 0.0f != unk_1A4) {
                unk_1A8 = (1.0f / 8192.0f) * (f32)unk_08->unk_22;
                unk_1A4 *= (1.0f + unk_1A4 * unk_1A8) - unk_1A8;
            }
            if (D_00360054[*unk_0C].unk_00.unk_00 != 0xFFFF) {
                unk_14 = (u8)((s8)D_00360054[*unk_0C].unk_00.unk_00_u8 & 0x800);
            } else {
                unk_14 = 0;
            }
            if (func_001C06E0(arg0) == 0) {
                unk_1A4 = 0.0f;
            }
            if (arg4[unk_04->unk_02].unk_00 == NULL) {
                func_0011CBB0(unk_A0, D_0034BB00, arg2, unk_04->unk_02, D_005DFA60);
                Erm_SCE_fn_iMessageBox(unk_A0, D_0034BB60, 0);
            } else {
                func_001CB2E0(unk_00, unk_08, unk_04, arg4[unk_04->unk_02].unk_00->unk_20, unk_1A4, (s32)unk_14);
            }
        }
    }
}
