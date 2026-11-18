/* profile: o0_301 */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 **);
void func_001553C0(s32, s32, s32);
s32 func_00208CC0(s32);

s32 *func_0021C4D0(s32 arg0, s32 *arg1, s32 arg2) {
    s32 p;
    s32 type;
    s32 *sp3C;
    type = arg1[-2];
    p = arg2;
    fn_vGetUltraOperatorPerso(func_00208CC0(type), arg0, &sp3C);
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    func_001553C0(p, sp3C[9], p);
    return arg1;
}
