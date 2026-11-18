/* profile: o0_301 */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
void func_001EDBB0();

s32 *func_002357F0(s32 arg0, s32 *arg1) {
    s32 sp80[4];
    s32 temp_s0;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;

    temp_s0 = arg1[-2];
    switch (temp_s0) {
    case 0x19A:
        arg1 = fn_p_stEvalTree(arg0, arg1, sp80);
        a = sp80[0];
        break;
    case 0x19B:
        arg1 = fn_p_stEvalTree(arg0, arg1, sp80);
        b = sp80[0];
        arg1 = fn_p_stEvalTree(arg0, arg1, sp80);
        c = sp80[0];
        break;
    case 0x19C:
        arg1 = fn_p_stEvalTree(arg0, arg1, sp80);
        d = sp80[0];
        arg1 = fn_p_stEvalTree(arg0, arg1, sp80);
        e = sp80[0];
        arg1 = fn_p_stEvalTree(arg0, arg1, sp80);
        f = sp80[0];
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    return arg1;
}
