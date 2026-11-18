/* profile: o0_301 */
#include "common.h"

s32 fn_p_stEvalTree();
s32 func_0023E900();
extern s32 D_003601A4;
extern s32 D_006056A0[];
extern s32 D_00605770[];
extern s32 D_00605840[];

s32 func_0023EA10(s32 arg0, s32 arg1) {
    s32 sp20[4];
    s32 temp_s0;

    temp_s0 = arg1 - 8;
    D_006056A0[D_003601A4] = temp_s0;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    D_00605840[D_003601A4] = sp20[0];
    if (D_00605840[D_003601A4] == 0) {
        return func_0023E900(temp_s0);
    }
    D_00605770[D_003601A4] = arg1;
    D_003601A4 += 1;
    return arg1;
}
