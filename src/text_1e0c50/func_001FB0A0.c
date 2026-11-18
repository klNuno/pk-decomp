/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        s8 c;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001FB0A0_0;

typedef struct {
    u8 pad_00[0x78];
    s8 unk_78;
} unk_func_001FB0A0_1;

typedef struct {
    unk_func_001FB0A0_1 *unk_00;
    unk_func_001FB0A0_1 *unk_04;
    unk_func_001FB0A0_1 *unk_08;
    unk_func_001FB0A0_1 *unk_0C;
} unk_func_001FB0A0_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001FB0A0_2 *unk_10;
} unk_func_001FB0A0_3;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_001FB0A0_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_001FB0A0_3 *HIE_fn_hGetSuperObjectObject(s32);
void func_001B4D70(unk_func_001FB0A0_2 *);

s32 *func_001FB0A0(s32 arg0, s32 *arg1) {
    unk_func_001FB0A0_2 *p;
    s8 v;
    unk_func_001FB0A0_1 *q;
    s32 a;
    s32 b;
    s32 op;
    unk_func_001FB0A0_0 res;
    s32 obj;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &obj);
    p = HIE_fn_hGetSuperObjectObject(obj)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    a = res.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    b = res.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    v = res.unk_00.c;
    if (a == 1) {
        func_001B4D70(p);
        q = p->unk_0C;
    } else {
        q = p->unk_04;
    }
    switch (b) {
    case -1:
        v = p->unk_00->unk_78;
        break;
    case 0:
        v = -1;
        break;
    case 1:
        break;
    }
    q->unk_78 = v;
    if (a != 1) {
        p->unk_08->unk_78 = v;
        p->unk_0C->unk_78 = v;
    }
    return arg1;
}
