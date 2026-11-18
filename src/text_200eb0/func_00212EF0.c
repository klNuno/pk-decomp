/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00212EF0_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00212EF0_1;

typedef struct unk_func_00212EF0_0 {
    f32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00212EF0_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00212EF0_0 *);

s32 func_00212EF0(s32 arg0, s32 arg1, unk_func_00212EF0_0 *arg2) {
    unk_func_00212EF0_1 *p;
    unk_func_00212EF0_1 v;
    f32 dot;

    p = (unk_func_00212EF0_1 *)arg2;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    v = *p;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    dot = v.unk_08 * p->unk_08 + (v.unk_00 * p->unk_00 + v.unk_04 * p->unk_04);
    arg2->unk_00 = dot;
    arg2->unk_0C = 8;
    return arg1;
}
