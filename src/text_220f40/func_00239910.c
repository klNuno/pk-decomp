/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, f32 *);
void func_00168C50(f32);

s32 func_00239910(s32 arg0, s32 arg1) {
    f32 temp[4];
    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    func_00168C50(temp[0]);
    return arg1;
}
