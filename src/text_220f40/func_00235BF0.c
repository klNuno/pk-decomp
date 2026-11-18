/* profile: o0 */
#include "common.h"

typedef struct unk_func_00235BF0_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00235BF0_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00235BF0_0 *);
extern s32 D_00605940[];

s32 func_00235BF0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    unk_func_00235BF0_0 sp30;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp_s0 = sp30.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp_s1 = sp30.unk_00;
    if (temp_s0 >= 10) {
        temp_s0 = 9;
    }
    D_00605940[temp_s0] = temp_s1;
    return arg1;
}
