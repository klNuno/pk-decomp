/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_0[0x4];
    s32 unk_4;
} unk_fn_p_stOperatorGetPerso_0;

s32 fn_p_stEvalTree(s32, s32, unk_fn_p_stOperatorGetPerso_0 **);
s32 fn_h_StandardGameGetSuperObject(s32);

s32 fn_p_stOperatorGetPerso(s32 arg0, s32 arg1, s32 *arg2) {
    unk_fn_p_stOperatorGetPerso_0 *temp[4];
    s32 temp2;

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    temp2 = fn_h_StandardGameGetSuperObject(temp[0]->unk_4);
    *arg2 = temp2;
    return arg1;
}
