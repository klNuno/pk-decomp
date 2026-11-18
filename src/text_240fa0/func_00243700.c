/* profile: o0_301_p */
#include "common.h"

typedef union {
    s32 i;
    f32 f;
} unk_func_00243700_1;

typedef struct {
    unk_func_00243700_1 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00243700_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00243700_0 *);
s32 func_0019D550(f32);
void func_001DA060(s32);

s32 func_00243700(s32 arg0, s32 arg1) {
    unk_func_00243700_0 node;
    s32 val;

    arg1 = fn_p_stEvalTree(arg0, arg1, &node);
    if (node.unk_0C == 8) {
        val = func_0019D550(node.unk_00.f);
    } else {
        val = node.unk_00.i;
    }
    func_001DA060(val);
    return arg1;
}
