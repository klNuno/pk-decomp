/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002268C0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_002268C0_0;

typedef struct unk_func_002268C0_1 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002268C0_1;

typedef struct unk_func_002268C0_2 {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
    u8 unk_10;
} unk_func_002268C0_2;

s32 *fn_p_stEvalTree();
s32 fn_h_StandardGameGetSuperObject();
unk_func_002268C0_1 *HIE_fn_hGetSuperObjectObject();
unk_func_002268C0_2 *fn_p_stBrainGetMind();
void func_00226760(s32, unk_func_002268C0_0 *, u8);

s32 *func_002268C0(s32 arg0, s32 *arg1) {
    unk_func_002268C0_0 *sp50[4];
    s32 temp_s1;
    unk_func_002268C0_2 *temp_s0;
    s32 flag;
    u8 temp;

    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    temp_s1 = fn_h_StandardGameGetSuperObject(sp50[0]->unk_04);
    temp_s0 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(temp_s1)->unk_0C);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    flag = 1;
    if (temp_s1 == arg0 && !temp_s0->unk_10) {
        flag = 0;
    }
    temp = flag;
    func_00226760(temp_s0->unk_08, sp50[0], temp);
    return arg1;
}
