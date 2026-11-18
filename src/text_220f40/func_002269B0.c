/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x8];
    u8 unk_10;
} unk_func_002269B0_0;

s32 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_002269B0_0 *fn_p_stBrainGetMind(s32);
s32 fn_p_stEvalTree(s32, s32, s32 *);
void func_00226760(s32, s32, u8);

s32 func_002269B0(s32 arg0, s32 arg1) {
    unk_func_002269B0_0 *temp_s0;
    s32 sp20[4];

    temp_s0 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)[3]);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp20);
    func_00226760(temp_s0->unk_04, sp20[0], !temp_s0->unk_10);
    return arg1;
}
