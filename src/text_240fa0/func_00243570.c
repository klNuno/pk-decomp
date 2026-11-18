/* profile: o0_301 */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
void func_001992C0(s32);

s32 *func_00243570(s32 arg0, s32 *arg1) {
    s32 temp_s0 = arg1[-2];
    s32 temp_s1;
    s32 sp30[4];

    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    temp_s1 = sp30[0];
    switch (temp_s0) {
    case 0x312:
        func_001992C0(temp_s1);
        break;
    }
    return arg1;
}
