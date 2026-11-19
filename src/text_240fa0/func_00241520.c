/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00241520_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00241520_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00241520_0 *);
s32 func_0019D550(f32);

s32 *func_00241520(s32 arg0, s32 *arg1) {
    s32 type;
    s32 result;
    s32 c;
    unk_func_00241520_0 sp40;

    type = arg1[-2];
    switch (type) {
    case 0x2B0:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        if (sp40.unk_0C == 8) {
            result = func_0019D550(sp40.unk_00.f);
        } else {
            result = sp40.unk_00.i;
        }
        c = (s8)result;
        return arg1;
    default:
        return arg1;
    }
}
