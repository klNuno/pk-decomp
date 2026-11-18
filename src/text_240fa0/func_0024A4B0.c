/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0024A4B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0024A4B0_0;

typedef struct unk_func_0024A4B0_1 {
    u8 pad_00[0x1D];
    u8 unk_1D;
    u8 pad_1E[2];
    f32 unk_20;
    u8 pad_24[0x10];
    unk_func_0024A4B0_0 unk_34;
    u8 pad_40[0x28];
    unk_func_0024A4B0_0 unk_68;
    u8 pad_74[0x28];
    unk_func_0024A4B0_0 unk_9C;
    u8 pad_A8[0x13F8];
    u32 unk_14A0;
    u32 unk_14A4;
} unk_func_0024A4B0_1;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_00246690(unk_func_0024A4B0_1 *, unk_func_0024A4B0_0 *, unk_func_0024A4B0_0 *, s32);
void func_0025CD20(s32, f32 *, f32 *, f32, void *);
extern f32 D_006053D0[];
extern f32 D_006053D4[];
extern f32 D_006053D8[];
extern void *D_00617310[];

u8 func_0024A4B0(unk_func_0024A4B0_1 *arg0) {
    unk_func_0024A4B0_0 sp38;
    f32 sp44;
    f32 sp48;
    f32 sp4C;

    sp44 = (f32)(arg0->unk_14A4 - arg0->unk_14A0);
    if (sp44 > 0.0f) {
        sp44 = (arg0->unk_20 * sp44) / 1000.0f;
    } else {
        sp44 = 1.0f;
    }
    sp38.unk_00 = arg0->unk_68.unk_00 - arg0->unk_9C.unk_00;
    sp38.unk_04 = arg0->unk_68.unk_04 - arg0->unk_9C.unk_04;
    sp38.unk_08 = arg0->unk_68.unk_08 - arg0->unk_9C.unk_08;
    func_00246690(arg0, &arg0->unk_34, &sp38, 0);
    if (0.0f == D_006053D0[0] && 0.0f == D_006053D4[0] && 0.0f == D_006053D8[0]) {
        if (0.0f != sp38.unk_00 || 0.0f != sp38.unk_04 || 0.0f != sp38.unk_08) {
            sp4C = func_001E60E0(func_00151360(sp38.unk_00) + func_00151360(sp38.unk_04) + func_00151360(sp38.unk_08));
            if (0.0f != sp4C) {
                sp4C = 1.0f / sp4C;
                sp38.unk_00 = sp4C * sp38.unk_00;
                sp38.unk_04 = sp4C * sp38.unk_04;
                sp38.unk_08 = sp4C * sp38.unk_08;
            } else {
                sp38 = sp38;
            }
            sp38.unk_00 = sp44 * sp38.unk_00;
            sp38.unk_04 = sp44 * sp38.unk_04;
            sp38.unk_08 = sp44 * sp38.unk_08;
            arg0->unk_9C.unk_00 = arg0->unk_9C.unk_00 + sp38.unk_00;
            arg0->unk_9C.unk_04 = arg0->unk_9C.unk_04 + sp38.unk_04;
            arg0->unk_9C.unk_08 = arg0->unk_9C.unk_08 + sp38.unk_08;
            sp38.unk_00 = arg0->unk_68.unk_00 - arg0->unk_9C.unk_00;
            sp38.unk_04 = arg0->unk_68.unk_04 - arg0->unk_9C.unk_04;
            sp38.unk_08 = arg0->unk_68.unk_08 - arg0->unk_9C.unk_08;
            sp48 = func_001E60E0(func_00151360(sp38.unk_00) + func_00151360(sp38.unk_04) + func_00151360(sp38.unk_08));
            return sp48 < sp44 ? 1 : 0;
        }
        return 1;
    }
    func_0025CD20(0x2D, D_006053D0, D_006053D0, 8.0f, (void *)D_00617310[arg0->unk_1D]);
    return 2;
}
