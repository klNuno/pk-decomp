/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_001FD190_0;

typedef struct {
    u8 pad_00[0x2C];
    f32 unk_2C;
} unk_func_001FD190_1;

typedef struct {
    u8 pad_00[4];
    unk_func_001FD190_1 *unk_04;
    u8 pad_08[0x20];
    unk_func_001FD190_0 unk_28;
    unk_func_001FD190_0 unk_34;
} unk_func_001FD190_2;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
    unk_func_001FD190_2 *unk_10;
} unk_func_001FD190_3;

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
} unk_func_001FD190_4;

unk_func_001FD190_3 *HIE_fn_hGetSuperObjectObject(void *);
void func_0014F6B0(void *, unk_func_001FD190_0 *, unk_func_001FD190_0 *, unk_func_001FD190_0 *);
void func_00150580(void *, unk_func_001FD190_0 *, f32);
f32 func_00151360(f32);
void func_00155E80(void *, unk_func_001FD190_0 *);
void *func_00155EE0(void *);
void func_00155FA0(void *, void *);
void *func_001979A0(void *);
void *func_001979C0(void *);
void func_001B4D70(unk_func_001FD190_2 *);
void func_001B6070(unk_func_001FD190_2 *, s32);
unk_func_001FD190_4 *func_001B84B0(void *);
void func_001BE120(void *, void *);
f32 func_001E60E0(f32);

s32 func_001FD190(void *arg0, s32 arg1) {
    unk_func_001FD190_2 *temp0;
    void *temp1;
    void *temp2;
    void *temp3;
    u32 temp4;
    unk_func_001FD190_0 sp78, sp88, sp98;
    f32 spA8, spAC;

    temp0 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    temp1 = func_001979A0(arg0);
    temp3 = func_001979C0(arg0);
    func_001B6070(temp0, 1);
    func_001B4D70(temp0);
    func_00155E80(temp1, &temp0->unk_34);
    func_00155E80(temp3, &temp0->unk_34);

    sp78.unk_00 = sp78.unk_04 = 0.0f;
    sp78.unk_08 = 1.0f;
    sp98.unk_00 = temp0->unk_28.unk_00 - temp0->unk_34.unk_00;
    sp98.unk_04 = temp0->unk_28.unk_04 - temp0->unk_34.unk_04;
    sp98.unk_08 = temp0->unk_28.unk_08 - temp0->unk_34.unk_08;
    if (0.0f != sp98.unk_00 || 0.0f != sp98.unk_04 || 0.0f != sp98.unk_08) {
        spA8 = func_001E60E0(func_00151360(sp98.unk_08) + (func_00151360(sp98.unk_00) + func_00151360(sp98.unk_04)));
        if (0.0f != spA8) {
            spA8 = 1.0f / spA8;
            sp98.unk_00 = spA8 * sp98.unk_00;
            sp98.unk_04 = spA8 * sp98.unk_04;
            sp98.unk_08 = spA8 * sp98.unk_08;
        } else {
            sp98 = sp98;
        }
    } else {
        sp98.unk_00 = 1.0f;
        sp98.unk_04 = sp98.unk_08 = 0.0f;
    }
    sp88.unk_00 = sp78.unk_04 * sp98.unk_08 - sp78.unk_08 * sp98.unk_04;
    sp88.unk_04 = sp78.unk_08 * sp98.unk_00 - sp78.unk_00 * sp98.unk_08;
    sp88.unk_08 = sp78.unk_00 * sp98.unk_04 - sp78.unk_04 * sp98.unk_00;

    spAC = func_001E60E0(func_00151360(sp88.unk_08) + (func_00151360(sp88.unk_00) + func_00151360(sp88.unk_04)));
    if (0.0f != spAC) {
        spAC = 1.0f / spAC;
        sp88.unk_00 = spAC * sp88.unk_00;
        sp88.unk_04 = spAC * sp88.unk_04;
        sp88.unk_08 = spAC * sp88.unk_08;
    } else {
        sp88 = sp88;
    }

    sp78.unk_00 = sp98.unk_04 * sp88.unk_08 - sp98.unk_08 * sp88.unk_04;
    sp78.unk_04 = sp98.unk_08 * sp88.unk_00 - sp98.unk_00 * sp88.unk_08;
    sp78.unk_08 = sp98.unk_00 * sp88.unk_04 - sp98.unk_04 * sp88.unk_00;
    sp98.unk_00 = -sp98.unk_00;
    sp98.unk_04 = -sp98.unk_04;
    sp98.unk_08 = -sp98.unk_08;
    func_0014F6B0(temp1, &sp88, &sp98, &sp78);
    sp98.unk_00 = 0.0f;
    sp98.unk_04 = -1.0f;
    sp98.unk_08 = 0.0f;
    func_00150580(temp1, &sp98, 0.017453292f * temp0->unk_04->unk_2C);
    func_00155FA0(temp3, temp1);
    temp2 = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (temp2 != 0) {
        temp4 = (func_001B84B0(temp2)->unk_0C |= 0x80);
        func_001B84B0(temp2)->unk_0C = temp4;
    }
    func_001BE120(arg0, func_00155EE0(temp3));
    return arg1;
}
