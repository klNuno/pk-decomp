/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree();
void func_0020BF30(f32);
void func_0020BF50(f32);

s32 func_002382C0(s32 arg0, s32 arg1) {
    f32 sp10[3];

    arg1 = fn_p_stEvalTree(arg0, arg1, sp10);
    func_0020BF30(sp10[0]);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp10);
    func_0020BF50(sp10[0]);
    return arg1;
}
