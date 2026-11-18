/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, s32 *);

s32 func_00235250(s32 arg0, s32 arg1) {
    s32 sp20[4];
    s32 temp;

    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    temp = sp20[0];
    return arg1;
}
