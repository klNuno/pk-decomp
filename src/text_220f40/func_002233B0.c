/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002233B0_0 {
    union {
        s32 unk_00;
        f32 unk_00_f32;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002233B0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002233B0_0 *);
s32 func_0019D550(f32);
void func_001A4330(s32, u8);

s32 *func_002233B0(s32 arg0, s32 *arg1, s32 arg2) {
    unk_func_002233B0_0 sp30;
    s32 var_s0;
    u8 var_s1;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    if (sp30.unk_0C == 8) {
        var_s0 = func_0019D550(sp30.unk_00.unk_00_f32);
    } else {
        var_s0 = sp30.unk_00.unk_00;
    }
    var_s1 = var_s0;
    func_001A4330(arg2, var_s1);
    return arg1;
}
