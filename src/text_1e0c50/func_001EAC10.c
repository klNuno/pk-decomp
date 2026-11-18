/* profile: o0 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        f32 f;
    } unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
} unk_func_001EAC10_0;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} unk_func_001EAC10_1;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_001EAC10_0 *);

s32 *func_001EAC10(s32 arg0, s32 *arg1, unk_func_001EAC10_0 *arg2) {
    unk_func_001EAC10_1 v;

    arg1 += 2;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    v.x = arg2->unk_0C == 8 ? arg2->unk_00.f : (f32)arg2->unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    v.y = arg2->unk_0C == 8 ? arg2->unk_00.f : (f32)arg2->unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    v.z = arg2->unk_0C == 8 ? arg2->unk_00.f : (f32)arg2->unk_00.i;
    arg2->unk_00.f = v.x;
    arg2->unk_04 = v.y;
    arg2->unk_08 = v.z;
    arg2->unk_0C = 0x15;
    return arg1;
}
