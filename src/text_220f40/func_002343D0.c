/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002343D0_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002343D0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002343D0_0 *);
u8 func_001273A8(f32);
void func_0015C8F0(u8, s32, s32, s32, s32, s32);

s32 *func_002343D0(s32 arg0, s32 *arg1) {
    unk_func_002343D0_0 sp70;
    u8 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    a = func_001273A8(sp70.unk_0C == 8 ? sp70.unk_00.f : (f32)sp70.unk_00.i);
    if (a > 15) {
        a = 0;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    b = sp70.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    c = sp70.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    d = sp70.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    e = sp70.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    f = sp70.unk_00.i;
    func_0015C8F0(a, d, e, b, c, f);
    return arg1;
}
