/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0022DDB0_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_0022DDB0_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
unk_func_0022DDB0_0 *HIE_fn_hGetSuperObjectObject();
s32 func_001B84B0();
f32 *func_00138800();

s32 *func_0022DDB0(s32 arg0, s32 *arg1) {
    s32 b;
    s32 a;
    s32 temp;
    f32 sp50[4];
    f32 v[3];
    s32 sp6C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp6C);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    v[0] = sp50[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    v[1] = sp50[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    v[2] = sp50[0];
    a = HIE_fn_hGetSuperObjectObject(sp6C)->unk_08;
    if (a == 0) {
        return arg1;
    }
    b = func_001B84B0(a);
    switch (temp) {
    case 0x12F:
        func_00138800(b)[0] = v[0];
        func_00138800(b)[1] = v[1];
        func_00138800(b)[2] = v[2];
        break;
    }
    return arg1;
}
