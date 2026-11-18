/* profile: o0_301 */
#include "common.h"

s8 *fn_p_stOperatorGetPerso();
s8 *fn_p_stEvalTree();
void func_00221C60(u8, u8, s32, s32);
void func_00221BA0(s32, s32, s32);

s8 *func_00221E30(s32 arg0, s8 *arg1, s32 arg2) {
    s32 sp5C;
    u8 temp_s1 = 0;
    s32 temp_s0;
    u8 temp_s2;
    s32 temp_s3;

    arg1 = fn_p_stOperatorGetPerso(arg0, arg1, &sp5C);
    temp_s0 = (u8)((u8 *)arg1)[7];
    if (temp_s0 == 0xB) {
        temp_s2 = *arg1;
        arg1 += 8;
        func_00221C60(temp_s2, temp_s1, sp5C, arg2);
    } else if (temp_s0 == 9) {
        temp_s3 = *(s32 *)arg1;
        arg1 += 8;
        func_00221BA0(temp_s3, sp5C, arg2);
    } else if (temp_s0 == 2 && *(s32 *)arg1 == 0x1A) {
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    }
    return arg1;
}
