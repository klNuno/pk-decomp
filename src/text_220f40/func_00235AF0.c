/* profile: o0 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        f32 f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00235AF0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00235AF0_0 *);
u8 func_001273A8(f32);
extern u8 D_00331410[];

s32 *func_00235AF0(s32 arg0, s32 *arg1) {
    unk_func_00235AF0_0 res;
    u8 idx;

    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    idx = func_001273A8(res.unk_0C == 8 ? res.unk_00.f : (f32)res.unk_00.i);
    if (idx > 15) {
        idx = 0;
    }
    D_00331410[idx] = 0;
    return arg1;
}
