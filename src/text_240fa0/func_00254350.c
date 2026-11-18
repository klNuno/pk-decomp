/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00254350_0;

typedef struct {
    u8 pad_00[0x104];
    void *unk_104;
    u8 pad_108[0xB8];
    f32 unk_1C0;
    f32 unk_1C4;
    f32 unk_1C8;
    unk_00254350_0 unk_1CC;
    unk_00254350_0 unk_1D8;
    u8 pad_1E4[0x3C];
    unk_00254350_0 *unk_220;
    u8 pad_224[0x30];
    f32 unk_254;
    u8 pad_258[0x38];
    s32 unk_290;
} unk_00254350_1;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_00257510(unk_00254350_0 *, void *);
void func_00257570(unk_00254350_0 *, void *);
extern s32 D_003601DC;
extern s32 D_003601E0;
extern s32 D_003601EC;
extern s32 D_003601F0;

void func_00254350(unk_00254350_1 *arg0)
{
    unk_00254350_0 sp40;
    unk_00254350_0 sp50;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    s32 temp0;
    s32 temp1;

    if (D_003601F0 != 0) {
        if (D_003601DC < 0) {
            temp0 = D_003601DC + 25;
        } else {
            temp0 = D_003601DC - 25;
        }
        sp60 = (f32)temp0;
    } else {
        sp60 = 0.0f;
    }
    if (D_003601EC != 0) {
        if (D_003601E0 < 0) {
            temp1 = 25 - D_003601E0;
        } else {
            temp1 = -D_003601E0 - 25;
        }
        sp64 = (f32)temp1;
    } else {
        sp64 = 0.0f;
    }
    func_00257510(&sp40, arg0->unk_104);
    sp40.unk_00 = sp60 * sp40.unk_00;
    sp40.unk_04 = sp60 * sp40.unk_04;
    sp40.unk_08 = sp60 * sp40.unk_08;
    func_00257570(&sp50, arg0->unk_104);
    sp50.unk_00 = sp64 * sp50.unk_00;
    sp50.unk_04 = sp64 * sp50.unk_04;
    sp50.unk_08 = sp64 * sp50.unk_08;
    arg0->unk_1CC.unk_00 = sp40.unk_00 + sp50.unk_00;
    arg0->unk_1CC.unk_04 = sp40.unk_04 + sp50.unk_04;
    arg0->unk_1CC.unk_08 = sp40.unk_08 + sp50.unk_08;
    if (0.0f != arg0->unk_1CC.unk_00 || 0.0f != arg0->unk_1CC.unk_04 || 0.0f != arg0->unk_1CC.unk_08) {
        sp68 = func_001E60E0(func_00151360(arg0->unk_1CC.unk_08) +
            (func_00151360(arg0->unk_1CC.unk_00) + func_00151360(arg0->unk_1CC.unk_04)));
        if (0.0f != sp68) {
            sp68 = 1.0f / sp68;
            arg0->unk_1CC.unk_00 = sp68 * arg0->unk_1CC.unk_00;
            arg0->unk_1CC.unk_04 = sp68 * arg0->unk_1CC.unk_04;
            arg0->unk_1CC.unk_08 = sp68 * arg0->unk_1CC.unk_08;
        } else {
            arg0->unk_1CC = arg0->unk_1CC;
        }
    }
    if (arg0->unk_290 != 0) {
        func_00257510(&arg0->unk_1D8, arg0->unk_104);
        if (!(arg0->unk_254 <= 0.0f)) {
            arg0->unk_1D8.unk_00 = -arg0->unk_1D8.unk_00;
            arg0->unk_1D8.unk_04 = -arg0->unk_1D8.unk_04;
            arg0->unk_1D8.unk_08 = -arg0->unk_1D8.unk_08;
        }
    } else {
        arg0->unk_1D8.unk_00 = arg0->unk_220->unk_00 - arg0->unk_1C0;
        arg0->unk_1D8.unk_04 = arg0->unk_220->unk_04 - arg0->unk_1C4;
        arg0->unk_1D8.unk_08 = arg0->unk_220->unk_08 - arg0->unk_1C8;
        if (!(func_001E60E0(func_00151360(arg0->unk_1D8.unk_08) +
                (func_00151360(arg0->unk_1D8.unk_00) + func_00151360(arg0->unk_1D8.unk_04))) <= 0.05f)) {
            sp6C = func_001E60E0(func_00151360(arg0->unk_1D8.unk_08) +
                (func_00151360(arg0->unk_1D8.unk_00) + func_00151360(arg0->unk_1D8.unk_04)));
            if (0.0f != sp6C) {
                sp6C = 1.0f / sp6C;
                arg0->unk_1D8.unk_00 = sp6C * arg0->unk_1D8.unk_00;
                arg0->unk_1D8.unk_04 = sp6C * arg0->unk_1D8.unk_04;
                arg0->unk_1D8.unk_08 = sp6C * arg0->unk_1D8.unk_08;
            } else {
                arg0->unk_1D8 = arg0->unk_1D8;
            }
        } else {
            arg0->unk_1D8.unk_08 = arg0->unk_1D8.unk_04 = arg0->unk_1D8.unk_00 = 0.0f;
        }
    }
}
