/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002437F0_0 {
    void *unk_00;
    u8 pad_04[0xC];
} unk_func_002437F0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002437F0_0 *);
s32 fn_szGetStringFromTextOrStringParam(unk_func_002437F0_0 *);
void func_0027FB20(u8, s32);

s32 *func_002437F0(s32 arg0, s32 *arg1) {
    unk_func_002437F0_0 sp30;
    u8 temp_s0;
    s32 temp_s1;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp_s0 = (u8)(u32)sp30.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp_s1 = fn_szGetStringFromTextOrStringParam(&sp30);
    func_0027FB20(temp_s0, temp_s1);
    return arg1;
}
