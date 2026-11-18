/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00238730_0;

typedef struct {
    union {
        unk_func_00238730_0 unk_00;
        f32 unk_01;
        s32 unk_02;
    } unk_00;
    s32 unk_0C;
} unk_func_00238730_1;

typedef struct {
    u8 pad_00[0x60];
} unk_func_00238730_2;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00238730_1 *);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
f32 func_001156B8(f32);
f32 func_00151360(f32);
void func_00154B00(unk_func_00238730_2 *, unk_func_00238730_2 *);
void func_001559E0(unk_func_00238730_0 *, unk_func_00238730_2 *, unk_func_00238730_0 *);
unk_func_00238730_2 *func_001979C0(s32);
f32 func_001E60E0(f32);
void func_001EB640(s32);
s32 func_001F1CD0(s32, f32);
extern u32 D_005AB848[];

s32 *func_00238730(s32 arg0, s32 *arg1) {
    unk_func_00238730_1 sp30;
    unk_func_00238730_2 sp40;
    unk_func_00238730_0 spA8;
    unk_func_00238730_0 spB8;
    unk_func_00238730_0 spC8;
    unk_func_00238730_0 spD8;
    f32 spE8;
    f32 spEC;
    s32 spF0;
    s32 temp;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &spF0);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    spA8 = sp30.unk_00.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    spE8 = sp30.unk_0C == 8 ? sp30.unk_00.unk_01 : (f32)sp30.unk_00.unk_02;
    spE8 = 0.017453292f * (spE8 > 0.0f ? spE8 : -spE8);
    func_00154B00(&sp40, func_001979C0(spF0));
    func_001559E0(&spB8, &sp40, &spA8);
    if (0.0f == spB8.unk_00 && 0.0f == spB8.unk_04 && 0.0f == spB8.unk_08) {
        return arg1;
    }
    spC8.unk_00 = 0.0f;
    spC8.unk_04 = -1.0f;
    spC8.unk_08 = 0.0f;
    spB8.unk_08 = 0.0f;
    spEC = spC8.unk_00 * spB8.unk_00 + spC8.unk_04 * spB8.unk_04 + spC8.unk_08 * spB8.unk_08;
    spEC /= func_001E60E0(func_00151360(spB8.unk_00) + func_00151360(spB8.unk_04) + func_00151360(spB8.unk_08));
    spEC = func_001156B8(spEC);
    if (temp == 0x20C) {
        spE8 *= 0.001f * (f32)D_005AB848[0];
    }
    spEC = spEC < spE8 ? spEC : spE8;
    spD8.unk_00 = spC8.unk_04 * spB8.unk_08 - spC8.unk_08 * spB8.unk_04;
    spD8.unk_04 = spC8.unk_08 * spB8.unk_00 - spC8.unk_00 * spB8.unk_08;
    spD8.unk_08 = spC8.unk_00 * spB8.unk_04 - spC8.unk_04 * spB8.unk_00;
    if (spD8.unk_08 < 0.0f) {
        spEC = -spEC;
    }
    if (func_001F1CD0(spF0, spEC) == 0) {
        func_001EB640(1);
    }
    return arg1;
}
