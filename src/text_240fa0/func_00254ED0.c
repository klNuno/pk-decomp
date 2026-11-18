/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00254ED0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00254ED0_0;

typedef struct unk_func_00254ED0_1 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00254ED0_1;

typedef struct unk_func_00254ED0_2 {
    u8 pad_00[0xA0];
    unk_func_00254ED0_1 **unk_A0;
    u8 pad_A4[0x24];
    s8 *unk_C8;
    s8 *unk_CC;
    u8 pad_D0[0x38];
    s32 unk_108;
    u8 pad_10C[0xC];
    unk_func_00254ED0_1 *unk_118;
    unk_func_00254ED0_0 *unk_11C;
    u8 pad_120[0x28];
    unk_func_00254ED0_0 unk_148;
    u8 pad_154[0xE0];
    f32 unk_234;
    u8 pad_238[0x14];
    f32 unk_24C;
} unk_func_00254ED0_2;

typedef struct unk_func_00254ED0_3 {
    u8 pad_00[0x30];
    f32 unk_30;
} unk_func_00254ED0_3;

typedef struct unk_func_00254ED0_4 {
    u8 pad_00[0xC];
    unk_func_00254ED0_3 *unk_0C;
} unk_func_00254ED0_4;

extern unk_func_00254ED0_4 *D_003601D8;
extern u8 D_003370E8[];

f32 func_00151360(f32);
unk_func_00254ED0_0 *func_00155EE0(s32);
f32 func_001E60E0(f32);
void func_0024D860(unk_func_00254ED0_4 *, s32, s32, s32, f32);
void func_0024DD10(unk_func_00254ED0_4 *, s32, s32, unk_func_00254ED0_0 *, u8 *);
void func_0024E2F0(unk_func_00254ED0_2 *);
void func_0024E540(unk_func_00254ED0_2 *);
void func_0024E650(unk_func_00254ED0_2 *);
void func_0024EEE0(unk_func_00254ED0_2 *);
void func_0024F1E0(unk_func_00254ED0_2 *);
void func_0024FFE0(unk_func_00254ED0_2 *);
void func_00250130(unk_func_00254ED0_2 *);
void func_00255660(unk_func_00254ED0_2 *);
void func_00255D80(unk_func_00254ED0_2 *);
s32 func_00257420(unk_func_00254ED0_1 *);
void func_002574D0(unk_func_00254ED0_0 *, s32);
f32 func_00257A60(const unk_func_00254ED0_0 *, const unk_func_00254ED0_0 *);

#define NORMALIZE(temp) \
    sp20.unk_08 = 0.0f; \
    if (sp20.unk_00 != 0.0f || sp20.unk_04 != 0.0f || sp20.unk_08 != 0.0f) { \
        temp = func_001E60E0(func_00151360(sp20.unk_00) + func_00151360(sp20.unk_04) + func_00151360(sp20.unk_08)); \
        if (temp != 0.0f) { \
            temp = 1.0f / temp; \
            arg0->unk_148.unk_00 = temp * sp20.unk_00; \
            arg0->unk_148.unk_04 = temp * sp20.unk_04; \
            arg0->unk_148.unk_08 = temp * sp20.unk_08; \
        } else { \
            arg0->unk_148 = sp20; \
        } \
    } else { \
        func_002574D0(&sp20, arg0->unk_108); \
    }

s32 func_00254ED0(unk_func_00254ED0_2 *arg0) {
    unk_func_00254ED0_0 sp20;
    unk_func_00254ED0_0 sp30;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;

    if (*arg0->unk_C8) {
        func_00250130(arg0);
        func_0024E2F0(arg0);
        func_0024FFE0(arg0);
        if (*arg0->unk_CC) {
            arg0->unk_118 = *arg0->unk_A0;
            if (func_00257420(arg0->unk_118) != 0) {
                sp30.unk_00 = arg0->unk_11C->unk_00 - func_00155EE0(arg0->unk_118->unk_24)->unk_00;
                sp30.unk_04 = arg0->unk_11C->unk_04 - func_00155EE0(arg0->unk_118->unk_24)->unk_04;
                sp30.unk_08 = arg0->unk_11C->unk_08 - func_00155EE0(arg0->unk_118->unk_24)->unk_08;
                sp20.unk_00 = sp30.unk_00;
                sp20.unk_04 = sp30.unk_04;
                sp20.unk_08 = 0.0f;
                sp44 = func_00257A60(&sp30, &sp20);
                sp40 = (sp44 > 0.0f ? sp44 : -sp44) *
                       (sp30.unk_08 > 0.0f ? 1.0f : (sp30.unk_08 < 0.0f ? -1.0f : 0.0f));
                func_0024D860(D_003601D8, 0x239, 0, 1, 0.15f + sp40);
                func_002574D0(&sp20, arg0->unk_108);
                NORMALIZE(sp48)
            } else {
                func_002574D0(&sp20, arg0->unk_108);
                NORMALIZE(sp4C)
                func_0024D860(D_003601D8, 0x239, 0, 1, 0.15f);
            }
        } else {
            arg0->unk_118 = NULL;
            func_002574D0(&sp20, arg0->unk_108);
            NORMALIZE(sp50)
            func_0024D860(D_003601D8, 0x239, 0, 1, 0.15f);
        }
        func_0024DD10(D_003601D8, 0, 1, &arg0->unk_148, D_003370E8);
        func_00255D80(arg0);
        func_00255660(arg0);
        arg0->unk_234 = D_003601D8->unk_0C->unk_30;
        func_0024E540(arg0);
        func_0024F1E0(arg0);
        func_0024E650(arg0);
        func_0024EEE0(arg0);
        func_0024D860(D_003601D8, 0x233, 0, 1, arg0->unk_24C);
        func_0024D860(D_003601D8, 0x234, 0, 1, arg0->unk_24C);
        return 0;
    }
    return 2;
}
