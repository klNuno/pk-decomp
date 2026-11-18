/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_fn_p_stEndWhileKeyWord_0;

s32 fn_p_stEvalTree(s32, s32, s32 *);
extern s32 D_00360188;
extern unk_fn_p_stEndWhileKeyWord_0 D_00605410[];

s32 fn_p_stEndWhileKeyWord(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp30[4];
    s32 temp_s1;
    unk_fn_p_stEndWhileKeyWord_0 *temp_s0;

    temp_s1 = arg1;
    if (D_00360188 == 0) {
        return arg1;
    }
    temp_s0 = &D_00605410[D_00360188 - 1];
    arg1 = temp_s0->unk_08;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp30);
    if (sp30[0] != 0) {
        return temp_s0->unk_00;
    }
    D_00360188 -= 1;
    return temp_s1;
}
