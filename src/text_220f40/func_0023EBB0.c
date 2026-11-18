/* profile: o0_p */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
s32 *func_0023E900(s32);
extern s32 D_003601A4;
extern s32 D_006056A0[];

s32 *func_0023EBB0(s32 arg0, s32 *arg1) {
    s32 temp;
    s32 sp20[4];

    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    temp = sp20[0];
    if (D_003601A4 <= 0) {
        return arg1;
    }
    if (temp > D_003601A4 - 1) {
        temp = D_003601A4 - 1;
    }
    arg1 = func_0023E900(D_006056A0[D_003601A4 - temp - 1]);
    D_003601A4 -= temp + 1;
    return arg1;
}
