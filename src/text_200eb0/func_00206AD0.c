/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00206AD0_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00206AD0_0 *);
extern unk_func_00206AD0_0 D_00605340;
extern unk_func_00206AD0_0 D_00605350;

s32 func_00206AD0(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_00206AD0_0 sp40 = D_00605340;
    unk_func_00206AD0_0 sp50 = D_00605350;
    s32 temp_s0 = 0;
    s32 temp_s1;
    s32 temp_s2;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp_s1 = sp40.unk_00;
    temp_s2 = sp50.unk_00;
    temp_s0 = temp_s1 == temp_s2;
    *arg2 = temp_s0;
    return arg1;
}
