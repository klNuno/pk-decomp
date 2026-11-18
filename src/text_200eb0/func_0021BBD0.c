/* profile: o0_301 */
#include "common.h"

typedef union unk_func_0021BBD0_1 {
    s32 unk_00;
    f32 unk_04;
} unk_func_0021BBD0_1;

s32 *fn_p_stEvalTree();
s32 func_00133410(s32, s32, s32);
s32 func_0019D550(f32);

s32 *func_0021BBD0(s32 arg0, s32 *arg1, unk_func_0021BBD0_1 *arg2) {
    s32 temp;
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;

    temp = arg1[-2];
    temp0 = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    if (arg2[3].unk_00 == 8) {
        temp1 = func_0019D550(arg2[0].unk_04);
    } else {
        temp1 = arg2[0].unk_00;
    }
    temp0 = temp1;
    switch (temp) {
    case 21:
        break;
    case 22:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        if (arg2[3].unk_00 == 8) {
            temp2 = func_0019D550(arg2[0].unk_04);
        } else {
            temp2 = arg2[0].unk_00;
        }
        temp3 = temp2;
        temp0 = func_00133410(0, temp0, temp3);
        break;
    default:
        arg2[0].unk_00 = temp0;
        arg2[3].unk_00 = 6;
        return arg1;
    }
    arg2[0].unk_00 = temp0;
    arg2[3].unk_00 = 6;
    return arg1;
}
