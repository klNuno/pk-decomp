/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree();
void func_00273300(f32, f32, f32);

s32 func_00227210(s32 arg0, s32 arg1) {
    s32 temp3[5];
    f32 temp0;
    f32 temp1;
    f32 temp2;

    arg1 = fn_p_stEvalTree(arg0, arg1, temp3);
    temp0 = (f32)temp3[0] / 255.0f;
    arg1 = fn_p_stEvalTree(arg0, arg1, temp3);
    temp1 = (f32)temp3[0] / 255.0f;
    arg1 = fn_p_stEvalTree(arg0, arg1, temp3);
    temp2 = (f32)temp3[0] / 255.0f;
    func_00273300(temp0, temp1, temp2);
    return arg1;
}
