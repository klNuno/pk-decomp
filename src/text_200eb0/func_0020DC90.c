/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0020DC90_0;

typedef struct {
    unk_func_0020DC90_0 unk_00;
    u8 pad_0C[4];
} unk_func_0020DC90_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
} unk_func_0020DC90_2;

extern char D_0034DCE8[];

unk_func_0020DC90_2 *HIE_fn_hGetSuperObjectObject(s32);
f32 func_00151360(f32);
void func_001559E0(unk_func_0020DC90_0 *, void *, const unk_func_0020DC90_0 *);
void func_00155EC0(s32, unk_func_0020DC90_0 *);
s32 func_001979C0(s32);
s32 func_00197E90(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
s32 func_00199130(s32);
s32 func_0019ABC0(s32);
s32 func_001BFBD0(s32);
f32 func_001E60E0(f32);
f32 func_0020BF70(void);
f32 func_0020BF80(void);
void func_0020D820(s32, u16, u8, u8, unk_func_0020DC90_0 *);
s32 func_0020DC60(s32);

s32 func_0020DC90(s32 arg0, f32 *arg1, f32 *arg2, s32 arg3,
                   const unk_func_0020DC90_0 *arg4, const unk_func_0020DC90_0 *arg5,
                   void *arg6, s32 arg7, f32 arg8, f32 arg9, f32 arg10, f32 arg11,
                   f32 arg12, s32 arg13, u16 arg14, s32 arg15, s32 arg16)
{
    unk_func_0020DC90_1 spC0;
    unk_func_0020DC90_0 spD0;
    f32 spDC, spE0, spE4;
    f32 spE8, spEC, spF0, spF4, spF8, spFC;
    s32 sp100;
    s32 temp0, temp1, temp2, temp3, temp4, temp5, temp6;
    char *temp7, *temp8;

    temp6 = 0;
    sp100 = temp3 = func_00198540(arg7);
    while (temp3 != 0) {
        temp0 = func_00198500(temp3);
        if (temp0 != arg3 && (arg15 == 0 || arg15 == func_00199130(HIE_fn_hGetSuperObjectObject(temp0)->unk_00))
            && !func_0020DC60(temp0)) {
            temp4 = 0;
            temp1 = HIE_fn_hGetSuperObjectObject(temp0)->unk_0C;
            if (temp1 != 0) {
                temp8 = D_0034DCE8;
            }
            temp2 = HIE_fn_hGetSuperObjectObject(temp0)->unk_04;
            if (temp2 != 0) {
                switch (arg16) {
                case 0x8A:
                case 0x8E:
                case 0x92:
                case 0x90:
                case 0x94:
                case 0x97:
                case 0x99:
                    temp4 = func_001BFBD0(temp2);
                    break;
                default:
                    temp4 = func_0019ABC0(temp2);
                    break;
                }
            }
            if (temp2 != 0 && !func_00197E90(temp2) && arg13 == (temp4 & arg13)) {
                func_00155EC0(func_001979C0(temp0), &spC0.unk_00);
                if (arg14) {
                    func_0020D820(temp0, arg14, 2, 1, &spC0.unk_00);
                }
                if (arg16 == 0x89 || arg16 == 0x8A) {
                    spDC = func_001E60E0(func_00151360(spC0.unk_00.unk_00 - arg4->unk_00)
                                       + func_00151360(spC0.unk_00.unk_04 - arg4->unk_04)
                                       + func_00151360(spC0.unk_00.unk_08 - arg4->unk_08));
                    if (!(spDC < *arg1)) {
                        goto unk_B9C;
                    }
                    if (spDC <= func_0020BF70()) {
                        if (!((func_0020BF70() > 0.0f ? func_0020BF70() : -func_0020BF70()) < 0.001f)) {
                            goto unk_B9C;
                        }
                    }
                    if (!(spDC < func_0020BF80())
                        && !((func_0020BF80() > 0.0f ? func_0020BF80() : -func_0020BF80()) < 0.001f)) {
                        goto unk_B9C;
                    }
                    *arg1 = spDC;
                    arg0 = temp0;
                    temp1 = HIE_fn_hGetSuperObjectObject(temp0)->unk_0C;
                    if (temp1 != 0) {
                        temp7 = D_0034DCE8;
                    }
                } else if (arg16 == 0x8D || arg16 == 0x8E || arg16 == 0x8F || arg16 == 0x90
                           || arg16 == 0x91 || arg16 == 0x92 || arg16 == 0x93 || arg16 == 0x94) {
                    spC0.unk_00.unk_00 = arg4->unk_00 - spC0.unk_00.unk_00;
                    spC0.unk_00.unk_04 = arg4->unk_04 - spC0.unk_00.unk_04;
                    spC0.unk_00.unk_08 = arg4->unk_08 - spC0.unk_00.unk_08;
                    spE0 = func_001E60E0(func_00151360(spC0.unk_00.unk_00)
                                       + func_00151360(spC0.unk_00.unk_04)
                                       + func_00151360(spC0.unk_00.unk_08));
                    if (spE0 != 0.0f) {
                        spE0 = 1.0f / spE0;
                        spC0.unk_00.unk_00 = spE0 * spC0.unk_00.unk_00;
                        spC0.unk_00.unk_04 = spE0 * spC0.unk_00.unk_04;
                        spC0.unk_00.unk_08 = spE0 * spC0.unk_00.unk_08;
                    } else {
                        spC0.unk_00 = spC0.unk_00;
                    }
                    spDC = arg5->unk_00 * spC0.unk_00.unk_00 + arg5->unk_04 * spC0.unk_00.unk_04
                         + arg5->unk_08 * spC0.unk_00.unk_08;
                    if (spDC <= 0.5f) {
                        goto unk_B9C;
                    }
                    spDC = func_001E60E0(func_00151360(spC0.unk_00.unk_00 - arg4->unk_00)
                                       + func_00151360(spC0.unk_00.unk_04 - arg4->unk_04)
                                       + func_00151360(spC0.unk_00.unk_08 - arg4->unk_08));
                    if (!(spDC < *arg1)) {
                        goto unk_B9C;
                    }
                    if (spDC <= func_0020BF70()) {
                        if (!((func_0020BF70() > 0.0f ? func_0020BF70() : -func_0020BF70()) < 0.001f)) {
                            goto unk_B9C;
                        }
                    }
                    if (!(spDC < func_0020BF80())
                        && !((func_0020BF80() > 0.0f ? func_0020BF80() : -func_0020BF80()) < 0.001f)) {
                        goto unk_B9C;
                    }
                    *arg1 = spDC;
                    arg0 = temp0;
                    temp1 = HIE_fn_hGetSuperObjectObject(temp0)->unk_0C;
                    if (temp1 != 0) {
                        temp7 = D_0034DCE8;
                    }
                } else {
                    spF4 = 0.0f;
                    func_001559E0(&spD0, arg6, &spC0.unk_00);
                    spE8 = spD0.unk_00;
                    spEC = spD0.unk_04;
                    spF0 = spD0.unk_08;
                    spD0.unk_08 = 0.0f;
                    spF8 = func_001E60E0(func_00151360(spD0.unk_00)
                                       + func_00151360(spD0.unk_04)
                                       + func_00151360(spD0.unk_08));
                    spD0.unk_08 = spF0;
                    spD0.unk_00 = 0.0f;
                    spFC = func_001E60E0(func_00151360(spD0.unk_00)
                                       + func_00151360(spD0.unk_04)
                                       + func_00151360(spD0.unk_08));
                    spD0.unk_00 = spE8;
                    if (-spEC <= arg11 * spF8 || -spEC <= arg12 * spFC) {
                        goto unk_B9C;
                    }
                    spE4 = func_001E60E0(func_00151360(spD0.unk_00)
                                       + func_00151360(spD0.unk_04)
                                       + func_00151360(spD0.unk_08));
                    if (spE8 == 0.0f) {
                        spF4 = 3.402822e38f;
                    } else {
                        spE8 = spE8 > 0.0f ? spE8 : -spE8;
                        spF4 = arg8 / spE8;
                        spF4 += arg9 / func_001E60E0(func_00151360(spE8) + func_00151360(spEC));
                        spF4 += arg10 / spE4;
                    }
                    if (spF4 <= *arg2) {
                        goto unk_B9C;
                    }
                    if (spE4 <= func_0020BF70()) {
                        if (!((func_0020BF70() > 0.0f ? func_0020BF70() : -func_0020BF70()) < 0.001f)) {
                            goto unk_B9C;
                        }
                    }
                    if (!(spE4 < func_0020BF80())
                        && !((func_0020BF80() > 0.0f ? func_0020BF80() : -func_0020BF80()) < 0.001f)) {
                        goto unk_B9C;
                    }
                    *arg2 = spF4;
                    arg0 = temp0;
                    temp1 = HIE_fn_hGetSuperObjectObject(temp0)->unk_0C;
                    if (temp1 != 0) {
                        temp7 = D_0034DCE8;
                    }
                }
            }
        }
    unk_B9C:;
        ++temp6;
        temp5 = temp3 = func_00198520(temp3);
        (void)temp5;
    }
    (void)temp7;
    (void)temp8;
    return arg0;
}
