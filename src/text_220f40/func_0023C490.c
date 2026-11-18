/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023C490_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_0023C490_0;

typedef struct unk_func_0023C490_1 {
    unk_func_0023C490_0 *unk_00;
    u8 pad_04[0xC];
} unk_func_0023C490_1;

s32 fn_p_stEvalTree(s32, s32, unk_func_0023C490_1 *);
s32 fn_h_StandardGameGetSuperObject(s32);
void func_0020DC40(s32);

s32 func_0023C490(s32 arg0, s32 arg1) {
    s32 temp;
    unk_func_0023C490_1 sp20;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp20);
    temp = fn_h_StandardGameGetSuperObject(sp20.unk_00->unk_04);
    func_0020DC40(temp);
    return arg1;
}
