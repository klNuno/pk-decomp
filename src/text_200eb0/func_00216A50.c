/* profile: o0_301 */
#include "common.h"

typedef union unk_func_00216A50_0 {
    s32 unk_00;
    f32 unk_04;
} unk_func_00216A50_0;

typedef struct unk_func_00216A50_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00216A50_1;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00216A50_0 *);

s32 *func_00216A50(s32 arg0, s32 *arg1, unk_func_00216A50_0 *arg2) {
    unk_func_00216A50_1 b;
    unk_func_00216A50_1 a;
    unk_func_00216A50_1 r;
    f32 f;
    f32 k;
    f32 t;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    a = *(unk_func_00216A50_1 *)arg2;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    b = *(unk_func_00216A50_1 *)arg2;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    if (arg2[3].unk_00 == 8) {
        t = arg2[0].unk_04;
    } else {
        t = arg2[0].unk_00;
    }
    f = t;
    k = -2.0f * (a.unk_08 * b.unk_08 + (a.unk_00 * b.unk_00 + a.unk_04 * b.unk_04));
    r.unk_00 = k * b.unk_00;
    r.unk_04 = k * b.unk_04;
    r.unk_08 = k * b.unk_08;
    r.unk_00 = r.unk_00 + a.unk_00;
    r.unk_04 = r.unk_04 + a.unk_04;
    r.unk_08 = r.unk_08 + a.unk_08;
    r.unk_00 = f * r.unk_00;
    r.unk_04 = f * r.unk_04;
    r.unk_08 = f * r.unk_08;
    arg2[0].unk_00 = ((s32 *)&r)[0];
    arg2[1].unk_00 = ((s32 *)&r)[1];
    arg2[2].unk_00 = ((s32 *)&r)[2];
    arg2[3].unk_00 = 0x15;
    return arg1;
}
