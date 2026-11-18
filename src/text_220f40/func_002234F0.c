/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002234F0_0;

s32 *fn_p_stEvalTree();
s32 func_0019D550(f32);
void func_001A44E0(s32, u8);

s32 *func_002234F0(s32 arg0, s32 *arg1, s32 arg2) {
    unk_func_002234F0_0 sp30;
    s32 temp;
    u8 b;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    if (sp30.unk_0C == 8) {
        temp = func_0019D550(sp30.unk_00.f);
    } else {
        temp = sp30.unk_00.i;
    }
    b = temp;
    func_001A44E0(arg2, b);
    return arg1;
}
