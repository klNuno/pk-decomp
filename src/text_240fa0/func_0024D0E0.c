/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree();
extern s32 D_00617350[];
extern s32 D_00617354[];

s32 func_0024D0E0(s32 arg0, s32 arg1) {
    s32 temp[4];

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    D_00617350[0] = temp[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    D_00617354[0] = temp[0];
    return arg1;
}
