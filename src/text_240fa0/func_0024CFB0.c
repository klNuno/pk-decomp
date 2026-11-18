/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0024CFB0_0 {
    f32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_0024CFB0_0;

typedef struct unk_func_0024CFB0_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0024CFB0_1;

typedef struct unk_func_0024CFB0_2 {
    u8 pad_00[0x11C];
    unk_func_0024CFB0_1 *unk_11C;
    u8 pad_120[0x10];
    f32 unk_130;
    f32 unk_134;
    f32 unk_138;
    u8 pad_13C[0x328 - 0x13C];
} unk_func_0024CFB0_2;

typedef struct unk_func_0024CFB0_3 {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_0024CFB0_3;

typedef struct unk_func_0024CFB0_4 {
    u8 pad_00[4];
    unk_func_0024CFB0_3 *unk_04;
} unk_func_0024CFB0_4;

typedef struct unk_func_0024CFB0_5 {
    u8 pad_00[0x10];
    unk_func_0024CFB0_4 *unk_10;
} unk_func_0024CFB0_5;

unk_func_0024CFB0_5 *HIE_fn_hGetSuperObjectObject();
s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
f32 func_00151360(f32);
f32 func_001E60E0(f32);
extern unk_func_0024CFB0_4 *D_003601D8;
extern unk_func_0024CFB0_2 D_006173A0[];

s32 *func_0024CFB0(s32 arg0, s32 *arg1, unk_func_0024CFB0_0 *arg2) {
    unk_func_0024CFB0_1 sp40;
    s32 sp4C;
    s32 temp_s1;
    unk_func_0024CFB0_2 *temp_s0;

    temp_s1 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s1), arg0, &sp4C);
    D_003601D8 = HIE_fn_hGetSuperObjectObject(sp4C)->unk_10;
    temp_s0 = &D_006173A0[D_003601D8->unk_04->unk_74];
    sp40.unk_00 = temp_s0->unk_130 - temp_s0->unk_11C->unk_00;
    sp40.unk_04 = temp_s0->unk_134 - temp_s0->unk_11C->unk_04;
    sp40.unk_08 = temp_s0->unk_138 - temp_s0->unk_11C->unk_08;
    arg2->unk_00 = func_001E60E0(func_00151360(sp40.unk_00) + func_00151360(sp40.unk_04) + func_00151360(sp40.unk_08));
    arg2->unk_0C = 8;
    return arg1;
}
