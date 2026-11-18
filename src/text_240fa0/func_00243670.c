/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00243670_0 {
    union {
        f32 f;
        s32 i;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00243670_0;

s32 *fn_p_stEvalTree();
s32 func_0019D550(f32);
void func_001DA040();

s32 *func_00243670(s32 arg0, s32 *arg1) {
    s32 val;
    unk_func_00243670_0 sp20;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp20);
    if (sp20.unk_0C == 8) {
        val = func_0019D550(sp20.unk_00.f);
    } else {
        val = sp20.unk_00.i;
    }
    func_001DA040(val);
    return arg1;
}
