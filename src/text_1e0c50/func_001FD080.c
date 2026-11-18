/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, s8 *);
extern s8 D_005ACAD2[];

s32 func_001FD080(s32 arg0, s32 arg1) {
    s8 temp[16];

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    D_005ACAD2[0] = temp[0];
    return arg1;
}
