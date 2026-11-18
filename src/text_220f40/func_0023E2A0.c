/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023E2A0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0023E2A0_0;

s32 *fn_p_stEvalTree();
void func_00168C60(f32, f32, f32);
void func_00168C80(f32, f32, f32);

s32 *func_0023E2A0(s32 arg0, s32 *arg1) {
    s32 temp;
    f32 sp20[6];
    unk_func_0023E2A0_0 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;

    temp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    temp2 = sp20[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    temp3 = sp20[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    temp4 = sp20[0];
    temp1.unk_00 = temp2;
    temp1.unk_04 = temp3;
    temp1.unk_08 = temp4;
    if (temp == 0x41) {
        func_00168C60(temp2, temp3, temp4);
    } else if (temp == 0x40) {
        func_00168C80(temp2, temp3, temp4);
    }
    return arg1;
}
