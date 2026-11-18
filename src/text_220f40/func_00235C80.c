/* profile: o0 */
#include "common.h"

s32 *fn_p_stEvalTree();
extern f32 D_00605910[];

s32 *func_00235C80(s32 arg0, s32 *arg1) {
    s32 temp;
    union {
        s32 i;
        f32 f;
    } sp20[7];
    f32 f;

    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    temp = sp20[0].i;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    f = sp20[0].f;
    if (temp >= 10) {
        temp = 9;
    }
    D_00605910[temp] = f;
    return arg1;
}
