/* profile: o0 */
#include "common.h"

s32 *fn_p_stEvalTree();
s32 func_001D8EF0();
s32 func_001D8F90();
s32 func_001D9030();

s32 *func_0021FBD0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 a;
    s32 b;
    s32 c;
    s32 temp;
    s32 sp50[4];

    temp = arg1[-2];
    a = 0;
    b = 0;
    c = 0;
    switch (temp) {
    case 0x77:
        arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
        a = func_001D8EF0();
        arg2[0] = a;
        arg2[3] = 6;
        return arg1;
    case 0x78:
        arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
        b = func_001D8F90();
        arg2[0] = b;
        arg2[3] = 6;
        return arg1;
    case 0x79:
        arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
        c = func_001D9030();
        arg2[0] = c;
        arg2[3] = 6;
        return arg1;
    }
    return arg1;
}
