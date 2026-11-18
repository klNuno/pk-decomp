/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001F56E0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001F56E0_0;

typedef struct unk_func_001F56E0_1 {
    u8 pad_00[0x75];
    u8 unk_75;
} unk_func_001F56E0_1;

typedef struct unk_func_001F56E0_2 {
    u8 pad_00[0x30];
    f32 unk_30;
    u8 pad_34[0x34];
    s32 unk_68;
} unk_func_001F56E0_2;

typedef struct unk_func_001F56E0_3 {
    u8 pad_00[8];
    unk_func_001F56E0_1 *unk_08;
    unk_func_001F56E0_2 *unk_0C;
    u8 pad_10[8];
    unk_func_001F56E0_2 *unk_18;
    u8 pad_1C[0x34];
    unk_func_001F56E0_0 unk_50;
} unk_func_001F56E0_3;

s32 func_001FDD00(s32, unk_func_001F56E0_0 *);
void func_001F41C0(unk_func_001F56E0_3 *, unk_func_001F56E0_0 *);
void func_001FDEF0(unk_func_001F56E0_0 *, unk_func_001F56E0_0 *, unk_func_001F56E0_0 *);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
f32 func_001FE030(unk_func_001F56E0_0 *, unk_func_001F56E0_0 *, s32);

s32 func_001F56E0(unk_func_001F56E0_3 *arg0, unk_func_001F56E0_0 *arg1) {
    unk_func_001F56E0_0 sp28;
    unk_func_001F56E0_0 sp38;
    unk_func_001F56E0_0 sp48;
    unk_func_001F56E0_0 sp58;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;

    if (func_001FDD00(arg0->unk_0C->unk_68, &sp58) == 0) {
        return 0;
    }
    func_001F41C0(arg0, &sp48);
    func_001FDEF0(&sp28, &sp48, &sp58);
    sp70 = func_001E60E0(func_00151360(sp28.unk_00) + func_00151360(sp28.unk_04) + func_00151360(sp28.unk_08));
    if (0.0f != sp70) {
        sp70 = 1.0f / sp70;
        sp28.unk_00 = sp70 * sp28.unk_00;
        sp28.unk_04 = sp70 * sp28.unk_04;
        sp28.unk_08 = sp70 * sp28.unk_08;
    } else {
        sp28 = sp28;
    }

    sp38.unk_00 = 0.0f;
    sp38.unk_04 = 0.0f;
    sp38.unk_08 = 1.0f;
    sp64 = func_001FE030(&sp38, &sp28, 0);
    sp64 -= 1.5707964f;
    sp38.unk_00 = arg0->unk_50.unk_00 - arg1->unk_00;
    sp38.unk_04 = arg0->unk_50.unk_04 - arg1->unk_04;
    sp38.unk_08 = arg0->unk_50.unk_08 - arg1->unk_08;
    sp74 = func_001E60E0(func_00151360(sp38.unk_00) + func_00151360(sp38.unk_04) + func_00151360(sp38.unk_08));
    if (0.0f != sp74) {
        sp74 = 1.0f / sp74;
        sp38.unk_00 = sp74 * sp38.unk_00;
        sp38.unk_04 = sp74 * sp38.unk_04;
        sp38.unk_08 = sp74 * sp38.unk_08;
    } else {
        sp38 = sp38;
    }

    sp6C = sp38.unk_00 * sp28.unk_00 + sp38.unk_04 * sp28.unk_04 + sp38.unk_08 * sp28.unk_08;
    sp64 *= sp6C;
    if (arg0->unk_08->unk_75 & 2) {
        sp68 = arg0->unk_18->unk_30;
    } else {
        sp68 = arg0->unk_0C->unk_30;
    }
    if (sp68 * sp64 < 0.0f) {
        sp64 = sp64;
    } else if ((sp68 > 0.0f ? sp68 : -sp68) <= (sp64 > 0.0f ? sp64 : -sp64)) {
        sp64 -= sp68;
    } else {
        sp64 = 0.0f;
        return 0;
    }

    arg0->unk_0C->unk_30 = sp68 + sp64;
    return 1;
}
