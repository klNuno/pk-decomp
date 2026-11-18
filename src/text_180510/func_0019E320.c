/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
} unk_func_0019E320_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_0019E320_1;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_0019E320_2;

typedef struct {
    unk_func_0019E320_1 unk_00;
    unk_func_0019E320_0 unk_18;
} unk_func_0019E320_3;

unk_func_0019E320_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00131D10(s32);
f32 func_00151360(f32);
unk_func_0019E320_0 *func_00155EE0(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
void func_0019DE60(s32, s32, s32, s32, s32);
unk_func_0019E320_1 *func_0019E2E0(s32);
s32 func_0019E900(s32);
s32 func_0019E920(s32);
s32 func_0019E940(s32);
s32 func_0019E970(s32);
s32 func_0019E9A0(s32);
void func_0019E9C0(s32, s32, s32, s32, s32);
s32 func_001B2EF0(s32, s32);
s32 func_001B6D40(s32);
s32 func_001B6D70(s32);
s32 func_001B6DA0(s32);
s32 func_001B6DD0(s32);
s32 func_001B6E00(s32);
f32 func_001E60E0(f32);
void *memcpy(void *, const void *, u32);

void func_0019E320(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_0019E320_3 spB0;
    s32 spD8;
    unk_func_0019E320_1 *spDC;
    f32 spE0;
    volatile s32 spE4;
    volatile s32 spE8;
    volatile s32 spEC;
    volatile s32 spF0;
    volatile s32 spF4;
    volatile s32 spF8;
    volatile s32 spFC;
    s32 temp_fp;
    unk_func_0019E320_1 *temp_s7;
    s32 temp_s6;
    s32 temp_s5;
    s32 temp_s4;
    s32 temp_s3;
    s32 temp_s2;
    s32 temp_s1;
    s32 temp_s0;

    temp_s7 = NULL;
    spDC = NULL;
    spE0 = 1.0f;
    temp_s3 = func_001B2EF0(1, arg0);
    spD8 = HIE_fn_hGetSuperObjectObject(arg0)->unk_14;
    spB0.unk_18.unk_00 = func_00155EE0(arg3)->unk_00 - func_00155EE0(arg2)->unk_00;
    spB0.unk_18.unk_04 = func_00155EE0(arg3)->unk_04 - func_00155EE0(arg2)->unk_04;
    spB0.unk_18.unk_08 = func_00155EE0(arg3)->unk_08 - func_00155EE0(arg2)->unk_08;
    if (func_0019E9A0(arg0)) {
        temp_s7 = func_0019E2E0(arg0);
        memcpy(&spB0.unk_00, (void *)temp_s7, 0x18);
        if (spB0.unk_18.unk_00 > 0.0f) {
            temp_s7->unk_0C += spB0.unk_18.unk_00;
        } else {
            temp_s7->unk_00 += spB0.unk_18.unk_00;
        }
        if (spB0.unk_18.unk_04 > 0.0f) {
            temp_s7->unk_10 += spB0.unk_18.unk_04;
        } else {
            temp_s7->unk_04 += spB0.unk_18.unk_04;
        }
        if (spB0.unk_18.unk_08 > 0.0f) {
            temp_s7->unk_14 += spB0.unk_18.unk_08;
        } else {
            temp_s7->unk_08 += spB0.unk_18.unk_08;
        }
    } else {
        spDC = func_0019E2E0(arg0);
        spE0 = spDC->unk_0C;
        spDC->unk_0C = spDC->unk_0C + func_001E60E0((func_00151360(spB0.unk_18.unk_00) + func_00151360(spB0.unk_18.unk_04)) + func_00151360(spB0.unk_18.unk_08));
    }
    if (!func_001B6D70(spD8) || !func_001B6DA0(spD8) || !func_001B6DD0(spD8)) {
        temp_s6 = 0;
        spE4 = temp_s0 = func_00198540(arg1);
        while (temp_s0) {
            temp_s1 = func_00198500(temp_s0);
            if (arg0 != temp_s1) {
                func_0019DE60(arg0, temp_s3, temp_s1, arg2, arg3);
            }
            temp_s6++;
            spE8 = temp_s0 = func_00198520(temp_s0);
        }
        if (!func_001B6E00(spD8)) {
            temp_s6 = func_0019E970(arg1);
            spEC = temp_s5 = func_0019E940(arg1);
            while (temp_s6 > 0) {
                temp_s4 = 0;
                spF0 = temp_s0 = func_00198540(func_0019E920(temp_s5));
                while (temp_s0) {
                    temp_s1 = func_00198500(temp_s0);
                    if (arg0 != temp_s1) {
                        func_0019DE60(arg0, temp_s3, temp_s1, arg2, arg3);
                    }
                    temp_s4++;
                    temp_s2 = temp_s0 = func_00198520(temp_s0);
                    (void)temp_s2;
                }
                temp_s6--;
                spF4 = temp_s5 = func_0019E900(temp_s5);
            }
        }
    }
    if (!func_001B6D40(spD8) && !func_00131D10(arg1)) {
        func_0019E9C0(arg0, arg1, temp_s3, arg2, arg3);
        if (!func_001B6E00(spD8)) {
            temp_s6 = func_0019E970(arg1);
            spF8 = temp_s5 = func_0019E940(arg1);
            while (temp_s6 > 0) {
                temp_fp = func_0019E920(temp_s5);
                if (!func_00131D10(temp_fp)) {
                    func_0019E9C0(arg0, temp_fp, temp_s3, arg2, arg3);
                }
                temp_s6--;
                spFC = temp_s5 = func_0019E900(temp_s5);
            }
        }
    }
    if (func_0019E9A0(arg0)) {
        temp_s7 = func_0019E2E0(arg0);
        memcpy((void *)temp_s7, &spB0.unk_00, 0x18);
    } else {
        spDC = func_0019E2E0(arg0);
        spDC->unk_0C = spE0;
    }
}
