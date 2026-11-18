/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 i;
        s8 c;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0023C500_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0023C500_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
void func_0012E1A0(s32, u8, s32);
void func_001EDBB0(s32, s32);

s32 *func_0023C500(s32 arg0, s32 *arg1) {
    s32 op;
    s32 r;
    s32 g;
    s32 b;
    u8 a;
    unk_func_0023C500_0 res;
    s32 obj;

    op = arg1[-2];
    switch (op) {
    case 0x1D3:
        fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &obj);
        break;
    case 0x1D4:
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        obj = res.unk_00.i;
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    a = res.unk_00.c;
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    r = res.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    g = res.unk_00.i;
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    b = res.unk_00.i;
    func_0012E1A0(obj, a, b | ((r << 16) | (g << 8)));
    return arg1;
}
