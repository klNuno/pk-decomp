/* profile: o0_301 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, s32 *);
void func_001EEEC0();

s32 func_002371B0(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 temp2;

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    temp2 = temp[0];
    func_001EEEC0(temp2);
    return arg1;
}
