/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00206C80_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x20];
    s32 unk_28;
    u8 pad_2C[0x24];
    s32 unk_50;
    u8 pad_54[0x24];
    s32 unk_78;
    u8 pad_7C[0x74];
    s32 unk_F0;
} unk_func_00206C80_0;

typedef struct unk_func_00206C80_1 {
    u16 unk_00;
    u8 pad_02[0x16];
} unk_func_00206C80_1;

u8 func_00208B20(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
unk_func_00206C80_0 *func_001F19D0(s32);
s32 fn_p_stEvalTree(s32, s32, unk_func_00206C80_1 *);
u8 func_00203AA0(s32, u16);

s32 func_00206C80(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_00206C80_1 sp50;
    s32 sp6C;
    unk_func_00206C80_0 *var_s0;
    u16 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(var_s3), arg0, &sp6C);
    if ((var_s0 = func_001F19D0(sp6C)) == NULL) {
        *arg2 = 0;
        return arg1;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    var_s2 = var_s0->unk_04;
    var_s1 = sp50.unk_00;
    *arg2 = 0;
    switch (var_s3) {
    case 0x48:
        if (var_s2 != 0) {
            *arg2 = func_00203AA0(var_s0->unk_28, var_s1);
        }
        break;
    case 0x49:
        if (var_s2 & 4) {
            *arg2 = func_00203AA0(var_s0->unk_78, var_s1);
        }
        break;
    case 0x4A:
        if (var_s2 & 1) {
            *arg2 = func_00203AA0(var_s0->unk_50, var_s1);
        }
        break;
    case 0x4B:
        if (var_s2 & 0x10) {
            *arg2 = func_00203AA0(var_s0->unk_F0, var_s1);
        }
        break;
    }
    return arg1;
}
