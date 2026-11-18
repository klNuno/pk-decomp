/* profile: o0_301 */
#include "common.h"

typedef union unk_func_002397F0_0 {
    s32 unk_00;
    u8 pad_00[0x1C];
} unk_func_002397F0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002397F0_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
void func_001BEEB0(s32, u8);
void func_001BEE80(s32, u8);

s32 *func_002397F0(s32 arg0, s32 *arg1) {
    unk_func_002397F0_0 sp60;
    s32 sp7C;
    s32 temp_s2;
    s32 *temp_s0;
    s32 temp_s3;
    s32 temp_s4;

    temp_s2 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s2), arg0, &sp7C);
    temp_s0 = (func_001971C0(sp7C) != 2) ? NULL : HIE_fn_hGetSuperObjectObject(sp7C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp_s3 = sp60.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp_s4 = sp60.unk_00;
    if (temp_s0 != NULL && temp_s0[1] != 0) {
        func_001BEEB0(temp_s0[1], temp_s3);
        func_001BEE80(temp_s0[1], temp_s4);
    }
    return arg1;
}
