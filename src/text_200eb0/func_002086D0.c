/* profile: o0_301 */
#include "common.h"

s32 func_001D5410(s32, u32);
s32 fn_p_stEvalTree(s32, s32, s32 *);
void func_001EDBB0(s32, s32);
s32 func_00208B20(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);

s32 func_002086D0(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp[4];
    s32 temp7;
    s32 temp2;

    temp2 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(temp2), arg0, &temp7);
    switch (temp2) {
    case 0x8B:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp);
        *arg2 = !func_001D5410(temp7, temp[0]);
        return arg1;
    case 0x8D:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp);
        *arg2 = func_001D5410(temp7, temp[0]);
        return arg1;
    default:
        func_001EDBB0(0x2B, 0);
        return arg1;
    }
}
