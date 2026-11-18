/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, s32 *);

s32 func_002351A0(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 temp2;

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    temp2 = temp[0];
    return arg1;
}
