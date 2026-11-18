/* profile: o0_301 */
#include "common.h"

s32 fn_p_stEvalTree();
void func_0019A290(s32, s32);
s32 func_0019B200(s32);

s32 func_0023E4E0(s32 arg0, s32 arg1) {
    s32 sp10[4];
    s32 val;
    s32 a;
    s32 b;
    s32 mask;
    s32 c;

    arg1 = fn_p_stEvalTree(arg0, arg1, sp10);
    a = sp10[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp10);
    b = sp10[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp10);
    c = sp10[0];
    if (a != 0 && b >= 0 && b < 0x20) {
        mask = 1 << b;
        val = func_0019B200(a);
        if (c == 2) {
            c = (val & mask) ? 0 : 1;
        }
        switch (c) {
        case 0:
            val &= ~mask;
            break;
        case 1:
            val |= mask;
            break;
        }
        func_0019A290(a, val);
    }
    return arg1;
}
