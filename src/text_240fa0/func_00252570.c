/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00252570_0;

typedef struct {
    u8 pad_00[0x104];
    s32 unk_104;
    s32 unk_108;
    u8 pad_10C[0x10];
    unk_func_00252570_0 *unk_11C;
    unk_func_00252570_0 *unk_120;
    u8 pad_124[0x3C];
    unk_func_00252570_0 unk_160;
    unk_func_00252570_0 unk_16C;
    unk_func_00252570_0 unk_178;
    unk_func_00252570_0 unk_184;
    u8 pad_190[0x24];
    unk_func_00252570_0 unk_1B4;
    u8 pad_1C0[0xC];
    unk_func_00252570_0 unk_1CC;
    unk_func_00252570_0 unk_1D8;
    u8 pad_1E4[0x18];
    unk_func_00252570_0 unk_1FC;
    unk_func_00252570_0 unk_208;
    unk_func_00252570_0 unk_214;
    unk_func_00252570_0 *unk_220;
    s32 unk_224;
    u8 pad_228[0x20];
    f32 unk_248;
    u8 pad_24C[0x18];
    s32 unk_264;
    u8 pad_268[0xC];
    s32 unk_274;
    u8 pad_278[0x18];
    s32 unk_290;
    s32 unk_294;
    u8 pad_298[4];
    s32 unk_29C;
    u8 pad_2A0[0xC];
    s32 unk_2AC;
} unk_func_00252570_1;

extern unk_func_00252570_0 D_003370E8;
extern s32 D_003601E0;
extern s32 D_003601F0;
extern unk_func_00252570_0 D_006053C0;
extern unk_func_00252570_0 D_006053D0;
extern f32 D_006053D4[];
extern f32 D_006053D8[];

s32 func_00127318(f32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
s32 func_0024DE90(s32, s32);
void func_002507E0(unk_func_00252570_0 *, unk_func_00252570_1 *, s32);
void func_00250EE0(unk_func_00252570_1 *, unk_func_00252570_0 *, f32);
void func_002513F0(unk_func_00252570_1 *, unk_func_00252570_0 *, unk_func_00252570_0 *, unk_func_00252570_0 *);
s32 func_00253630(unk_func_00252570_1 *);
s32 func_002537A0(unk_func_00252570_1 *);
void func_002574D0(unk_func_00252570_0 *, s32);
void func_00257510(unk_func_00252570_0 *, s32);
f32 func_00257A60(const unk_func_00252570_0 *, const unk_func_00252570_0 *);
void func_002580D0(unk_func_00252570_0 *, f32, unk_func_00252570_0 *);
void func_00258210(s32, unk_func_00252570_0 *, unk_func_00252570_0 *, s32);

#define UNK_00252570_0(dst, src) { \
    ((s32 *)(dst))[0] = ((const s32 *)(src))[0]; \
    ((s32 *)(dst))[1] = ((const s32 *)(src))[1]; \
    ((s32 *)(dst))[2] = ((const s32 *)(src))[2]; \
}

#define UNK_00252570_1(arg) \
    func_001E60E0(func_00151360((arg).unk_00) + func_00151360((arg).unk_04) + func_00151360((arg).unk_08))

void func_00252570(unk_func_00252570_1 *arg0)
{
    unk_func_00252570_0 spB0, spC0, spD0, spE0, spF0, sp100, sp110, sp120, sp130;
    f32 sp13C, sp140, sp144, sp148, sp14C, sp150, sp154;
    s32 temp0, temp1, temp2, temp3;

    UNK_00252570_0(&spE0, arg0->unk_11C);
    temp3 = 1;
    if (func_0024DE90(arg0->unk_108, arg0->unk_274) == 0 &&
        func_0024DE90(arg0->unk_108, arg0->unk_264) == 0) {
        temp3 = 0;
    }
    if (temp3) {
        sp154 = 3.5f;
    } else {
        sp154 = 1.5f;
    }
    spE0.unk_08 += sp154;

    if (arg0->unk_290) {
        func_002507E0(&spF0, arg0, 0);
        spB0.unk_00 = spF0.unk_00 - spE0.unk_00;
        spB0.unk_04 = spF0.unk_04 - spE0.unk_04;
        spB0.unk_08 = spF0.unk_08 - spE0.unk_08;
    } else {
        spB0.unk_00 = arg0->unk_1B4.unk_00 - spE0.unk_00;
        spB0.unk_04 = arg0->unk_1B4.unk_04 - spE0.unk_04;
        spB0.unk_08 = arg0->unk_1B4.unk_08 - spE0.unk_08;
    }

    if (0.0f != arg0->unk_1CC.unk_00 || 0.0f != arg0->unk_1CC.unk_04 || 0.0f != arg0->unk_1CC.unk_08) {
        sp14C = UNK_00252570_1(arg0->unk_1CC);
        if (0.0f != sp14C) {
            sp14C = 1.0f / sp14C;
            sp100.unk_00 = sp14C * arg0->unk_1CC.unk_00;
            sp100.unk_04 = sp14C * arg0->unk_1CC.unk_04;
            sp100.unk_08 = sp14C * arg0->unk_1CC.unk_08;
        } else {
            sp100 = arg0->unk_1CC;
        }
        temp0 = 1;
    } else if (0.0f != arg0->unk_1D8.unk_00 || 0.0f != arg0->unk_1D8.unk_04 || 0.0f != arg0->unk_1D8.unk_08) {
        sp150 = UNK_00252570_1(arg0->unk_1D8);
        if (0.0f != sp150) {
            sp150 = 1.0f / sp150;
            sp100.unk_00 = sp150 * arg0->unk_1D8.unk_00;
            sp100.unk_04 = sp150 * arg0->unk_1D8.unk_04;
            sp100.unk_08 = sp150 * arg0->unk_1D8.unk_08;
        } else {
            sp100 = arg0->unk_1D8;
        }
        temp0 = 1;
    } else {
        sp100.unk_08 = sp100.unk_04 = sp100.unk_00 = 0.0f;
        temp0 = 0;
    }

    if (temp0) {
        sp148 = sp100.unk_00 * arg0->unk_214.unk_00 + sp100.unk_04 * arg0->unk_214.unk_04
              + sp100.unk_08 * arg0->unk_214.unk_08;
        sp148 = sp148 > 0.0f ? sp148 : -sp148;
        temp0 = sp148 < 0.95f;
    }
    func_00257510(&sp110, arg0->unk_104);
    if (!arg0->unk_2AC && temp0) {
        sp148 = func_00257A60(&sp100, &sp110);
        arg0->unk_224 = func_00127318(sp148 / 1.5707964f);
        sp148 = 1.5707964f * (f32)arg0->unk_224;
        UNK_00252570_0(&arg0->unk_178, &sp110);
        UNK_00252570_0(&arg0->unk_184, &sp110);
        if (!(sp148 < 0.0f)) {
            func_002580D0(&arg0->unk_178, 0.7853982f + sp148, &arg0->unk_214);
            func_002580D0(&arg0->unk_184, (f32)(sp148 - 0.7853982f), &arg0->unk_214);
        } else {
            func_002580D0(&arg0->unk_178, sp148 - 0.7853982f, &arg0->unk_214);
            func_002580D0(&arg0->unk_184, (f32)(0.7853982f + sp148), &arg0->unk_214);
        }
    }

    func_002513F0(arg0, &spC0, &spB0, &arg0->unk_178);
    func_002513F0(arg0, &spD0, &spB0, &arg0->unk_184);
    sp120.unk_00 = spE0.unk_00 + arg0->unk_178.unk_00;
    sp120.unk_04 = spE0.unk_04 + arg0->unk_178.unk_04;
    sp120.unk_08 = spE0.unk_08 + arg0->unk_178.unk_08;
    func_00258210(arg0->unk_104, &sp120, &spC0, 0);

    temp1 = !(0.0f == D_006053D0.unk_00 && 0.0f == *D_006053D4 && 0.0f == *D_006053D8);
    spF0.unk_00 = sp120.unk_00 - D_006053D0.unk_00;
    spF0.unk_04 = sp120.unk_04 - *D_006053D4;
    spF0.unk_08 = sp120.unk_08 - *D_006053D8;
    sp140 = UNK_00252570_1(spF0);
    UNK_00252570_0(&arg0->unk_160, &D_006053C0);
    UNK_00252570_0(&arg0->unk_16C, &D_006053D0);
    sp130.unk_00 = spE0.unk_00 + arg0->unk_184.unk_00;
    sp130.unk_04 = spE0.unk_04 + arg0->unk_184.unk_04;
    sp130.unk_08 = spE0.unk_08 + arg0->unk_184.unk_08;
    func_00258210(arg0->unk_104, &sp130, &spD0, 0);
    spF0.unk_00 = sp130.unk_00 - D_006053D0.unk_00;
    spF0.unk_04 = sp130.unk_04 - *D_006053D4;
    spF0.unk_08 = sp130.unk_08 - *D_006053D8;
    sp144 = UNK_00252570_1(spF0);
    temp2 = !(0.0f == D_006053D0.unk_00 && 0.0f == *D_006053D4 && 0.0f == *D_006053D8);
    arg0->unk_29C = temp1 || temp2;

    if ((!(sp140 <= sp144) || !temp1) && temp2) {
        UNK_00252570_0(&arg0->unk_160, &D_006053C0);
        UNK_00252570_0(&arg0->unk_16C, &D_006053D0);
        UNK_00252570_0(&arg0->unk_208, &spD0);
        UNK_00252570_0(&arg0->unk_1FC, &sp130);
    } else {
        UNK_00252570_0(&arg0->unk_1FC, &sp120);
        UNK_00252570_0(&arg0->unk_208, &spC0);
    }

    if (arg0->unk_29C) {
        spF0.unk_00 = spE0.unk_00 - arg0->unk_16C.unk_00;
        spF0.unk_04 = spE0.unk_04 - arg0->unk_16C.unk_04;
        spF0.unk_08 = spE0.unk_08 - arg0->unk_16C.unk_08;
        sp13C = UNK_00252570_1(spF0);
        spF0.unk_00 = arg0->unk_1FC.unk_00 + arg0->unk_208.unk_00;
        spF0.unk_04 = arg0->unk_1FC.unk_04 + arg0->unk_208.unk_04;
        spF0.unk_08 = arg0->unk_1FC.unk_08 + arg0->unk_208.unk_08;
        spC0.unk_00 = -arg0->unk_208.unk_00;
        spC0.unk_04 = -arg0->unk_208.unk_04;
        spC0.unk_08 = -arg0->unk_208.unk_08;
        func_00258210(arg0->unk_104, &spF0, &spC0, 0);
        if ((temp0 = func_002537A0(arg0)) != 0) {
            if (!D_003601F0) {
                if ((temp0 = func_00253630(arg0)) != 0) {
                    if (!(UNK_00252570_1(*arg0->unk_120) <= 0.1f)) {
                        if (!arg0->unk_290) {
                            arg0->unk_294 = 1;
                        }
                        arg0->unk_2AC = 0;
                        return;
                    }
                    func_00250EE0(arg0, &spE0, sp13C);
                    return;
                }

                sp148 = func_00257A60(&D_006053C0, &D_003370E8);
                sp148 = sp148 > 0.0f ? sp148 : -sp148;
                spF0.unk_00 = D_006053D0.unk_00 - arg0->unk_220->unk_00;
                spF0.unk_04 = *D_006053D4 - arg0->unk_220->unk_04;
                spF0.unk_08 = *D_006053D8 - arg0->unk_220->unk_08;
                if (D_003601E0 >= 0x1A || arg0->unk_2AC) {
                    func_00250EE0(arg0, &spE0, sp13C);
                    return;
                }
                func_002574D0(&spC0, arg0->unk_108);
                spC0.unk_00 = arg0->unk_248 * spC0.unk_00;
                spC0.unk_04 = arg0->unk_248 * spC0.unk_04;
                spC0.unk_08 = arg0->unk_248 * spC0.unk_08;
                func_00258210(arg0->unk_104, &spE0, &spC0, 0);
                if (0.0f == D_006053D0.unk_00 && 0.0f == *D_006053D4 && 0.0f == *D_006053D8) {
                    if (!arg0->unk_290) {
                        arg0->unk_294 = 1;
                    }
                    arg0->unk_2AC = 0;
                    return;
                }
                func_00250EE0(arg0, &spE0, sp13C);
                return;
            }
            func_00250EE0(arg0, &spE0, sp13C);
            return;
        }
        func_00250EE0(arg0, &spE0, sp13C);
        return;
    }
    arg0->unk_2AC = 0;
}
