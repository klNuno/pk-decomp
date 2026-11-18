/* profile: o0 */
#include "common.h"

u8 *fn_p_stEvalTree(s32, u8 *, s32 *);
f32 func_001F0D40(s32);

u8 *func_00219C60(s32 arg0, u8 *arg1, s32 *arg2) {
    f32 var_1C = 0.0f;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    var_1C = func_001F0D40(arg2[0]);
    *(f32 *)&arg2[0] = var_1C;
    arg2[3] = 8;
    return arg1;
}
