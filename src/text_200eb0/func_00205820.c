/* profile: o0 */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, u32 *);
extern u32 D_005AB800[];

s32 *func_00205820(s32 arg0, s32 *arg1, s32 *arg2) {
    u32 temp;
    u32 a;
    u32 temp2;
    u32 b;
    u32 sp50[4];

    temp = D_005AB800[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    a = sp50[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    b = sp50[0];
    if (temp >= a) {
        temp2 = temp - a;
    } else {
        temp2 = -(temp - a);
    }
    *arg2 = temp2 >= b;
    return arg1;
}
