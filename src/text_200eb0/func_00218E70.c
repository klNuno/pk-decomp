/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00218E70_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00218E70_1;

s32 fn_p_stEvalTree();
s32 func_0015B530();

s32 func_00218E70(s32 arg0, s32 arg1, unk_func_00218E70_0 *arg2) {
    unk_func_00218E70_1 val;
    s32 temp;

    arg1 = fn_p_stEvalTree(arg0, arg1, &val);
    temp = val.unk_00;
    arg2->unk_00 = func_0015B530(temp);
    arg2->unk_0C = 9;
    return arg1;
}
