/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00235970_0 {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00235970_0;

extern u8 D_00331410[];
s32 fn_p_stEvalTree(s32, s32, unk_func_00235970_0 *);
u8 func_001273A8(f32);
void func_0015BF00(u8, s32, s32, s32, s32);

s32 func_00235970(s32 arg0, s32 arg1) {
    unk_func_00235970_0 v;
    u8 idx;
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    arg1 = fn_p_stEvalTree(arg0, arg1, &v);
    idx = func_001273A8(v.unk_0C == 8 ? v.unk_00.f : (f32)v.unk_00.i);
    if (idx > 15) {
        idx = 0;
    }
    D_00331410[idx] = 1;
    arg1 = fn_p_stEvalTree(arg0, arg1, &v);
    a = v.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &v);
    b = v.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &v);
    c = v.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &v);
    d = v.unk_00.i;
    func_0015BF00(idx, a, b, c, d);
    return arg1;
}
