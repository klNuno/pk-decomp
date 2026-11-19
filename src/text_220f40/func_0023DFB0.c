/* profile: o0_301 */
#include "common.h"

s32 *fn_p_stEvalTree();
void func_00168F80(s32, s32, s32);
void func_00168F60(s32, s32, s32);

s32 *func_0023DFB0(s32 arg0, s32 *arg1) {
    s32 temp;
    s32 c;
    s32 a;
    s32 b;
    s32 v[4];

    temp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, v);
    a = (s16)v[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, v);
    b = (s16)v[0];
    c = 0;
    if (temp != 0x3A) {
        arg1 = fn_p_stEvalTree(arg0, arg1, v);
        c = (s16)v[0];
    }
    if (temp == 0x3A || temp == 0x3D) {
        func_00168F80(a, b, c);
        func_00168F60(a, b, c);
    } else if (temp == 0x3E) {
        func_00168F80(a, b, c);
    } else if (temp == 0x3F) {
        func_00168F60(a, b, c);
    }
    return arg1;
}
