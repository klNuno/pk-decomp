/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} unk_func_00218390_1;

typedef struct {
    union {
        s32 i;
        f32 f;
        s16 s;
    } unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00218390_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00218390_0 *);
s32 func_00208CC0(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
f32 func_001BFD60(s32, s32);
s32 func_001BFE50(s32, s32);
void func_001BFF40(s32, s32, unk_func_00218390_1 *);
void func_001EDBB0(s32, s32);

s32 *func_00218390(s32 arg0, s32 *arg1, unk_func_00218390_0 *arg2) {
    s16 idx;
    s32 op;
    unk_func_00218390_0 res;
    unk_func_00218390_1 v;
    s32 obj;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(op), arg0, &obj);
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    idx = res.unk_00.s;
    switch (op) {
    case 0x145:
        arg2->unk_00.f = func_001BFD60(obj, idx);
        arg2->unk_0C = 8;
        break;
    case 0x146:
        arg2->unk_00.i = func_001BFE50(obj, idx);
        arg2->unk_0C = 6;
        break;
    case 0x147:
        func_001BFF40(obj, idx, &v);
        arg2->unk_00.i = ((s32 *)&v)[0];
        arg2->unk_04 = ((s32 *)&v)[1];
        arg2->unk_08 = ((s32 *)&v)[2];
        arg2->unk_0C = 0x15;
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    return arg1;
}
