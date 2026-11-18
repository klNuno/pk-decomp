/* profile: o0_p */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
void func_001A4550(s32);
void func_001BF9B0(s32);
s32 *func_002234F0(s32, s32 *, s32);
s32 *func_00223590(s32, s32 *, s32);
s32 *func_00223630(s32, s32 *, s32);

s32 *func_002246B0(s32 arg0, s32 *arg1) {
    s32 temp[4];
    s32 type;

    type = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    switch (type) {
    case 6:
        return func_002234F0(arg0, arg1, temp[0]);
    case 7:
        func_001BF9B0(temp[0]);
        return arg1;
    case 8:
        func_001A4550(temp[0]);
        return arg1;
    case 9:
        return func_00223590(arg0, arg1, temp[0]);
    case 10:
        return func_00223630(arg0, arg1, temp[0]);
    default:
        return arg1;
    }
}
