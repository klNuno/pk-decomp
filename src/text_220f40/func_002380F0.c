/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree();
void func_001F0D60(s32, f32);

s32 func_002380F0(s32 arg0, s32 arg1) {
    s32 a[4];
    f32 b[4];

    arg1 = fn_p_stEvalTree(arg0, arg1, a);
    arg1 = fn_p_stEvalTree(arg0, arg1, b);
    func_001F0D60(a[0], b[0]);
    return arg1;
}
