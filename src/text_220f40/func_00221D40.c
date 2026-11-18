/* profile: o0_301 */
#include "common.h"

s32 fn_p_stOperatorGetPerso();
s32 fn_p_stEvalTree();
void func_00221C60(u8, u8, s32, s8 *);

s32 func_00221D40(s32 arg0, s8 *arg1, s8 *arg2) {
    u8 temp0 = 0;
    u8 temp1 = 0;
    s32 sp4C;
    s32 temp2;

    sp4C = arg0;
    temp2 = (u8)((u8 *)arg1)[7];
    if (temp2 == 2) {
        arg1 += 8;
        arg1 = (s8 *)fn_p_stOperatorGetPerso(arg0, arg1, &sp4C);
    }
    temp0 = *arg1;
    arg1 += 8;
    arg1 = (s8 *)fn_p_stEvalTree(arg0, arg1, arg2);
    temp1 = *arg2;
    func_00221C60(temp0, temp1, sp4C, arg2);
    return (s32)arg1;
}
