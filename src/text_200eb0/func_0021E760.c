/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0021E760_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021E760_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0021E760_0 *);
s32 func_0019D550(f32);

s32 *func_0021E760(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 result;
    unk_func_0021E760_0 sp20;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp20);
    if (sp20.unk_0C == 8) {
        result = func_0019D550(sp20.unk_00.f);
    } else {
        result = sp20.unk_00.i;
    }
    *arg2 = result;
    if (*arg2 > 100) {
        *arg2 = 100;
    } else if (*arg2 < 0) {
        *arg2 = 0;
    }
    return arg1;
}
