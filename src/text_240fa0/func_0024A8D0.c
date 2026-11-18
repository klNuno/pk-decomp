/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_0024A8D0_0;

typedef struct {
    unk_func_0024A8D0_0 unk_00;
    u8 pad_0C[0x28];
} unk_func_0024A8D0_1;

typedef struct {
    u8 pad_00[0x1C];
    u8 unk_1C;
    u8 pad_1D[3];
    f32 unk_20;
    u8 pad_24[0x10];
    unk_func_0024A8D0_1 unk_34[100];
    u8 pad_1484[0x1C];
    u32 unk_14A0;
    u32 unk_14A4;
} unk_func_0024A8D0_2;

extern f32 func_00151360(f32);
extern f32 func_001E60E0(f32);
extern f32 func_00246760(unk_func_0024A8D0_2 *, u8, u8);

s32 func_0024A8D0(unk_func_0024A8D0_2 *arg0)
{
    unk_func_0024A8D0_0 sp40;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    u8 temp0;
    u8 temp1;

    sp54 = 0.0f;
    temp1 = arg0->unk_1C;
    sp5C = (f32)(arg0->unk_14A4 - arg0->unk_14A0);
    if (sp5C > 0.0f) {
        sp5C = (arg0->unk_20 * sp5C) / 1000.0f;
    } else {
        sp5C = 1.0f;
    }

    sp40.unk_08 = sp40.unk_04 = sp40.unk_00 = 0.0f;
    if (temp1 > 1) {
        sp50 = func_00246760(arg0, 0, (u8)(temp1 - 1)) - sp5C;
        for (temp0 = 0; temp0 < temp1 - 1 && sp54 < sp50; ++temp0) {
            sp40.unk_00 = arg0->unk_34[temp0 + 1].unk_00.unk_00 - arg0->unk_34[temp0].unk_00.unk_00;
            sp40.unk_04 = arg0->unk_34[temp0 + 1].unk_00.unk_04 - arg0->unk_34[temp0].unk_00.unk_04;
            sp40.unk_08 = arg0->unk_34[temp0 + 1].unk_00.unk_08 - arg0->unk_34[temp0].unk_00.unk_08;
            sp54 += func_001E60E0(func_00151360(sp40.unk_08) + (func_00151360(sp40.unk_00) + func_00151360(sp40.unk_04)));
        }
        arg0->unk_1C = temp1 = (u8)((s8)temp0 + 1);
        sp58 = func_001E60E0(func_00151360(sp40.unk_08) + (func_00151360(sp40.unk_00) + func_00151360(sp40.unk_04)));
        if (sp58 > 0.0f) {
            sp54 -= func_001E60E0(func_00151360(sp40.unk_08) + (func_00151360(sp40.unk_00) + func_00151360(sp40.unk_04)));
            sp40.unk_00 *= (sp50 - sp54) / sp58;
            sp40.unk_04 *= (sp50 - sp54) / sp58;
            sp40.unk_08 *= (sp50 - sp54) / sp58;
            arg0->unk_34[temp1 - 1].unk_00.unk_00 = sp40.unk_00 + arg0->unk_34[temp1 - 2].unk_00.unk_00;
            arg0->unk_34[temp1 - 1].unk_00.unk_04 = sp40.unk_04 + arg0->unk_34[temp1 - 2].unk_00.unk_04;
            arg0->unk_34[temp1 - 1].unk_00.unk_08 = sp40.unk_08 + arg0->unk_34[temp1 - 2].unk_00.unk_08;
        }
    } else {
        return 1;
    }

    return 0;
}
