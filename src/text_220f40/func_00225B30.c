/* profile: o0_301 */
#include "common.h"

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
void func_0019C7C0(s32, u16, s32);

s32 *func_00225B30(s32 arg0, s32 *arg1) {
    u16 temp1;
    s32 temp;
    s16 sp30[14];
    s32 sp4C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp4C);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp1 = sp30[0];
    switch (temp) {
    case 0x76:
        func_0019C7C0(sp4C, temp1, 1);
        return arg1;
    case 0x77:
        func_0019C7C0(sp4C, temp1, 0);
        return arg1;
    }
    return arg1;
}
