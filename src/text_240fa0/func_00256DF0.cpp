/* profile: o0 */
#include "common.h"

f32 int2dB(s32);

extern "C" {
s32 fn_p_stEvalTree(s32, s32, f32 *);
s32 func_001274A8(f32);
void func_002CF390(f32);

s32 func_00256DF0(s32 arg0, s32 arg1) {
    f32 temp[4];

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    func_002CF390(int2dB(func_001274A8(temp[0])));
    return arg1;
}
}
