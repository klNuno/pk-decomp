/* profile: o0_301 */
#include "common.h"

typedef struct unk_fn_p_stTraceProcedure_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_fn_p_stTraceProcedure_0;

s32 fn_p_stEvalTree(s32, s32, unk_fn_p_stTraceProcedure_0 *);
void func_0011B418(char *, s32);
s32 func_0019D550(f32);
extern char D_0034E3B0[];
extern s32 D_00360198;

s32 fn_p_stTraceProcedure(s32 arg0, s32 arg1) {
    unk_fn_p_stTraceProcedure_0 sp20;
    s32 var_s0;
    arg0 = arg0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp20);
    if (D_00360198 != 0) {
        if (sp20.unk_0C == 8) {
            var_s0 = func_0019D550(sp20.unk_00.f);
        } else {
            var_s0 = sp20.unk_00.i;
        }
        func_0011B418(D_0034E3B0, var_s0);
    }
    return arg1;
}
