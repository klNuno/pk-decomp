/* profile: o0_301 */
#include "common.h"

s32 func_001D52C0(s32, s32, s32);
s32 fn_p_stEvalTree(s32, s32, s32 *);
void func_001EDBB0(s32, s32);
s32 func_00208B20(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);

s32 func_002087F0(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp[4];
    s32 temp7;
    s32 temp2;
    s32 temp3;
    s32 temp4;

    temp2 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp2), arg0, &temp7);
    switch (temp2) {
    case 0x8C:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp);
        temp3 = temp[0];
        arg1 = fn_p_stEvalTree(arg0, arg1, temp);
        temp4 = temp[0];
        *arg2 = func_001D52C0(temp7, temp3, temp4);
        return arg1;
    default:
        func_001EDBB0(0x2B, 0);
        return arg1;
    }
}
