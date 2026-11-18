/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00208490_0 {
    s32 unk_00;
    u8 pad_04[12];
} unk_func_00208490_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00208490_0 *);
s32 func_0015E2E0(s32);

s32 func_00208490(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp;
    unk_func_00208490_0 sp20;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp20);
    temp = sp20.unk_00;
    *arg2 = func_0015E2E0(temp);
    return arg1;
}
