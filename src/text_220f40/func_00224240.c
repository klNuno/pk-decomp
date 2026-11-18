/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_0[0x4];
    s32 unk_4;
} unk_func_00224240_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00224240_0 **);
s32 fn_h_StandardGameGetSuperObject(s32);
void func_00198910(s32, s32);

s32 func_00224240(s32 arg0, s32 arg1) {
    unk_func_00224240_0 *temp[4];
    unk_func_00224240_0 *temp2[4];
    s32 temp3;
    s32 temp4;
    s32 temp5;

    temp5 = ((s32 *)arg1)[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    arg1 = fn_p_stEvalTree(arg0, arg1, temp2);
    switch (temp5) {
    case 0x6B:
        if (temp2[0] != NULL) {
            temp3 = fn_h_StandardGameGetSuperObject(temp2[0]->unk_4);
        } else {
            temp3 = 0;
        }
        if (temp[0] != NULL) {
            temp4 = fn_h_StandardGameGetSuperObject(temp[0]->unk_4);
        } else {
            temp4 = 0;
        }
        func_00198910(temp4, temp3);
        return arg1;
    default:
        return arg1;
    }
}
