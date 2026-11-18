/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00226AB0_0 {
    s32 unk_00[4];
} unk_func_00226AB0_0;

typedef struct unk_func_00226AB0_1 {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
} unk_func_00226AB0_1;

typedef struct unk_func_00226AB0_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00226AB0_2;

unk_func_00226AB0_2 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_00226AB0_1 *fn_p_stBrainGetMind(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00226AB0_0 *);
void func_00226760(s32, s32, s32);

s32 *func_00226AB0(s32 arg0, s32 *arg1) {
    unk_func_00226AB0_1 *temp_s0;
    s32 *temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    unk_func_00226AB0_0 sp50;

    temp_s0 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C);
    temp_s1 = sp50.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp_s2 = *temp_s1;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    temp_s3 = *temp_s1;
    func_00226760(temp_s0->unk_04, temp_s2, 0);
    func_00226760(temp_s0->unk_08, temp_s3, 0);
    return arg1;
}
