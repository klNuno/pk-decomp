/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0023E1F0_0;

typedef struct {
    unk_func_0023E1F0_0 unk_00;
    s32 unk_0C;
} unk_func_0023E1F0_1;

s32 fn_p_stEvalTree(s32, s32, unk_func_0023E1F0_1 *);
void func_00168F30(unk_func_0023E1F0_0 *);

s32 func_0023E1F0(s32 arg0, s32 arg1) {
    unk_func_0023E1F0_1 res;
    unk_func_0023E1F0_0 v;

    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    v = res.unk_00;
    v.unk_00 = 0.1f * v.unk_00;
    v.unk_04 = 0.1f * v.unk_04;
    v.unk_08 = 0.1f * v.unk_08;
    func_00168F30(&v);
    return arg1;
}
