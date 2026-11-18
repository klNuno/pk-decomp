/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, s32 *);
void func_002CF3B0(u8);

s32 func_00256DA0(s32 arg0, s32 arg1) {
    s32 temp[4];

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    func_002CF3B0(temp[0] & 0xFF);
    return arg1;
}
