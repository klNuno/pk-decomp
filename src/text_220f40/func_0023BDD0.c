/* profile: o0_301_p */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
void func_0023BB00(s32, s32 *, s32);

s32 *func_0023BDD0(s32 arg0, s32 *arg1) {
    s32 a;
    s32 temp;
    s32 *p;
    s32 sp40[4];

    temp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp40);
    a = sp40[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp40);
    p = sp40;
    if (a == 0) {
        return arg1;
    }
    func_0023BB00(a, p, temp);
    return arg1;
}
