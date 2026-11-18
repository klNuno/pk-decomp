/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00234560_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00234560_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00234560_0 *);
u8 func_001273A8(f32);
void func_0015C2A0(u8, u8, s32, s32);

s32 *func_00234560(s32 arg0, s32 *arg1) {
    unk_func_00234560_0 sp50;
    u8 a;
    u8 b;
    s32 c;
    s32 d;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    a = func_001273A8(sp50.unk_0C == 8 ? sp50.unk_00.f : (f32)sp50.unk_00.i);
    if (a > 15) {
        a = 0;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    b = func_001273A8(sp50.unk_0C == 8 ? sp50.unk_00.f : (f32)sp50.unk_00.i);
    if (b > 16) {
        b = 0;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    c = sp50.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    d = sp50.unk_00.i;
    func_0015C2A0(a, b, c, d);
    return arg1;
}
