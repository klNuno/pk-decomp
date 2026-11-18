/* profile: o0 */
#include "common.h"

s32 fn_p_stOperatorGetPerso();
void func_00222F50();
s32 fn_p_stEvalTree();

s32 func_00222FF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp1C;

    arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &sp1C);
    func_00222F50(arg0, sp1C);
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    return arg1;
}
