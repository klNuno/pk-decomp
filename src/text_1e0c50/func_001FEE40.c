/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001FEE40_0;

typedef struct {
    u8 pad_00[0x20];
    unk_func_001FEE40_0 unk_20;
    u8 pad_2C[0x24];
    unk_func_001FEE40_0 unk_50;
} unk_func_001FEE40_1;

#define UNK_COPY(dst, src) { \
    ((u32 *)(dst))[0] = ((const u32 *)(src))[0]; \
    ((u32 *)(dst))[1] = ((const u32 *)(src))[1]; \
    ((u32 *)(dst))[2] = ((const u32 *)(src))[2]; \
}

extern void func_001F49F0(unk_func_001FEE40_1 *);
extern f32 func_00151360(f32);
extern f32 func_001E60E0(f32);

void func_001FEE40(unk_func_001FEE40_1 *arg0, unk_func_001FEE40_0 *arg1,
                   unk_func_001FEE40_0 *arg2, unk_func_001FEE40_0 *arg3, f32 arg4) {
    unk_func_001FEE40_0 sp30;
    unk_func_001FEE40_0 sp40;
    unk_func_001FEE40_0 sp50;
    unk_func_001FEE40_0 sp60;
    unk_func_001FEE40_0 sp70;
    unk_func_001FEE40_0 sp80;
    unk_func_001FEE40_0 sp90;
    unk_func_001FEE40_0 spA0;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    s8 temp;

    temp = 0;
    func_001F49F0(arg0);
    sp80.unk_00 = arg2->unk_00 - arg0->unk_20.unk_00;
    sp80.unk_04 = arg2->unk_04 - arg0->unk_20.unk_04;
    sp80.unk_08 = arg2->unk_08 - arg0->unk_20.unk_08;
    UNK_COPY(&spA0, arg2);
    sp40.unk_00 = arg0->unk_50.unk_00 - arg0->unk_20.unk_00;
    sp40.unk_04 = arg0->unk_50.unk_04 - arg0->unk_20.unk_04;
    sp40.unk_08 = arg0->unk_50.unk_08 - arg0->unk_20.unk_08;
    spC0 = func_00151360(sp80.unk_00) + func_00151360(sp80.unk_04) + func_00151360(sp80.unk_08);
    if (0.0f == spC0) {
        sp80.unk_00 = arg0->unk_20.unk_00 - arg3->unk_00;
        sp80.unk_04 = arg0->unk_20.unk_04 - arg3->unk_04;
        sp80.unk_08 = arg0->unk_20.unk_08 - arg3->unk_08;
        UNK_COPY(&spA0, arg3);
        spC0 = func_00151360(sp80.unk_00) + func_00151360(sp80.unk_04) + func_00151360(sp80.unk_08);
        if (0.0f == spC0) {
            UNK_COPY(arg1, &arg0->unk_20);
            return;
        }
        temp = 1;
    }

    spB4 = sp80.unk_00 * sp40.unk_00 + sp80.unk_04 * sp40.unk_04 + sp80.unk_08 * sp40.unk_08;
    spB0 = spB4 / spC0;
    if (spB0 > 0.0f) {
        spCC = spB0;
    } else {
        spCC = -spB0;
    }
    if (!(spCC < 0.0001f)) {
        if (temp) {
            sp80.unk_00 = arg0->unk_20.unk_00 - spA0.unk_00;
            sp80.unk_04 = arg0->unk_20.unk_04 - spA0.unk_04;
            sp80.unk_08 = arg0->unk_20.unk_08 - spA0.unk_08;
        } else {
            sp80.unk_00 = spA0.unk_00 - arg0->unk_20.unk_00;
            sp80.unk_04 = spA0.unk_04 - arg0->unk_20.unk_04;
            sp80.unk_08 = spA0.unk_08 - arg0->unk_20.unk_08;
        }

        sp70.unk_00 = spB0 * sp80.unk_00;
        sp70.unk_04 = spB0 * sp80.unk_04;
        sp70.unk_08 = spB0 * sp80.unk_08;
        sp60.unk_00 = sp40.unk_00 - sp70.unk_00;
        sp60.unk_04 = sp40.unk_04 - sp70.unk_04;
        sp60.unk_08 = sp40.unk_08 - sp70.unk_08;
        sp90.unk_00 = arg0->unk_20.unk_00 + sp70.unk_00;
        sp90.unk_04 = arg0->unk_20.unk_04 + sp70.unk_04;
        sp90.unk_08 = arg0->unk_20.unk_08 + sp70.unk_08;
        spB8 = func_00151360(sp60.unk_00) + func_00151360(sp60.unk_04) + func_00151360(sp60.unk_08);
        spC4 = func_00151360(arg4);
        spBC = func_001E60E0(func_00151360(sp90.unk_00 - arg0->unk_20.unk_00) +
                            func_00151360(sp90.unk_04 - arg0->unk_20.unk_04) +
                            func_00151360(sp90.unk_08 - arg0->unk_20.unk_08));
        if (spB8 <= spC4) {
            spB8 = func_001E60E0(spC4 - spB8);
            if (!(spB8 <= spBC)) {
                spB8 = spB8 - spBC;
                if (spB0 > 0.0f) {
                    UNK_COPY(&spA0, arg3);
                } else if (temp) {
                    return;
                }
            } else {
                spB8 = spBC - spB8;
                if (spB0 < 0.0f) {
                    UNK_COPY(&spA0, arg3);
                } else if (temp) {
                    return;
                }
            }
        } else {
            if (spB0 < 0.0f) {
                UNK_COPY(&spA0, arg3);
            } else if (temp) {
                return;
            }
            spB8 = spBC;
        }

        sp30.unk_00 = spA0.unk_00 - arg0->unk_20.unk_00;
        sp30.unk_04 = spA0.unk_04 - arg0->unk_20.unk_04;
        sp30.unk_08 = spA0.unk_08 - arg0->unk_20.unk_08;
        if (!(spB8 <= func_001E60E0(func_00151360(sp30.unk_00) + func_00151360(sp30.unk_04) +
                                 func_00151360(sp30.unk_08)))) {
            UNK_COPY(arg1, &spA0);
            return;
        }

        spC8 = func_001E60E0(func_00151360(sp30.unk_00) + func_00151360(sp30.unk_04) +
                            func_00151360(sp30.unk_08));
        if (0.0f != spC8) {
            spC8 = 1.0f / spC8;
            sp30.unk_00 = spC8 * sp30.unk_00;
            sp30.unk_04 = spC8 * sp30.unk_04;
            sp30.unk_08 = spC8 * sp30.unk_08;
        } else {
            sp30 = sp30;
        }
        sp50.unk_00 = spB8 * sp30.unk_00;
        sp50.unk_04 = spB8 * sp30.unk_04;
        sp50.unk_08 = spB8 * sp30.unk_08;
        arg1->unk_00 = arg0->unk_20.unk_00 + sp50.unk_00;
        arg1->unk_04 = arg0->unk_20.unk_04 + sp50.unk_04;
        arg1->unk_08 = arg0->unk_20.unk_08 + sp50.unk_08;
    }
}
