/* profile: o0 */
#include "common.h"

typedef struct unk_func_00218FA0_0 {
    u8 pad_00[0x14];
    u8 unk_14[0x14];
} unk_func_00218FA0_0;

typedef struct unk_func_00218FA0_1 {
    void *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00218FA0_1;

s32 fn_p_stEvalTree();
extern unk_func_00218FA0_0 *D_005ABDC4[];

s32 func_00218FA0(s32 arg0, s32 arg1, unk_func_00218FA0_1 *arg2) {
    s32 sp10[3];

    arg1 = fn_p_stEvalTree(arg0, arg1, sp10);
    arg2->unk_00 = D_005ABDC4[0][sp10[0]].unk_14;
    arg2->unk_0C = 9;
    return arg1;
}
