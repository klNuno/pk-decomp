/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_0[0x4];
    s32 unk_4;
} unk_func_002267D0_0;

typedef struct {
    u8 pad_0[0xC];
    s32 unk_C;
} unk_func_002267D0_1;

typedef struct {
    u8 pad_0[0x4];
    s32 unk_4;
    u8 pad_8[0x8];
    u8 unk_10;
} unk_func_002267D0_2;

s32 fn_p_stEvalTree();
s32 fn_h_StandardGameGetSuperObject();
unk_func_002267D0_1 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_002267D0_2 *fn_p_stBrainGetMind();
void func_00226760(s32, unk_func_002267D0_0 *, u8);

s32 func_002267D0(s32 arg0, s32 arg1) {
    unk_func_002267D0_0 *temp[4];
    s32 temp2;
    unk_func_002267D0_2 *temp3;
    s32 temp4;
    u8 temp5;

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    temp2 = fn_h_StandardGameGetSuperObject(temp[0]->unk_4);
    temp3 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp2)->unk_C);
    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    temp4 = 1;
    if (temp2 == arg0 && !temp3->unk_10 == 0) {
        temp4 = 0;
    }
    temp5 = temp4;
    func_00226760(temp3->unk_4, temp[0], temp5);
    return arg1;
}
