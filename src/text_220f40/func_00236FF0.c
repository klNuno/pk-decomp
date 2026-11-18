/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x18];
} unk_func_00236FF0_0;

s32 HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00236FF0_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
void func_0019C1D0(s32, s32);
void func_0019C290(s32, s32);
void func_0019C300(s32, s32);
void func_0019C380(s32, s32, s32);

s32 *func_00236FF0(s32 arg0, s32 *arg1) {
    unk_func_00236FF0_0 sp60;
    s32 sp7C;
    s32 var_s0;
    s32 var_s1;
    s32 temp_s2;
    s32 var_s3;
    s32 var_s4;

    temp_s2 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s2), arg0, &sp7C);
    if (func_001971C0(sp7C) != 2) {
        var_s3 = 0;
    } else {
        var_s3 = HIE_fn_hGetSuperObjectObject(sp7C);
    }
    var_s1 = var_s3;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    var_s0 = sp60.unk_00;
    switch (temp_s2) {
    case 0x1BE:
        func_0019C1D0(var_s1, var_s0);
        return arg1;
    case 0x1BF:
        func_0019C290(var_s1, var_s0);
        return arg1;
    case 0x1C0:
        func_0019C300(var_s1, var_s0);
        return arg1;
    case 0x1C1:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
        var_s4 = sp60.unk_00;
        func_0019C380(var_s1, var_s0, var_s4);
        return arg1;
    default:
        return arg1;
    }
}
