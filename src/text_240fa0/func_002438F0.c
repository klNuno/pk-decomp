/* profile: o0_301 */
#include "common.h"

typedef union {
    s32 w;
    s16 h;
    s8 b;
    u8 pad[0x10];
} unk_func_002438F0_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
s16 MOR_fn_xPrepareMorph(s32, s16, s16 *, s32, s32, f32 *, f32 *, u8, s16);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034E830[];
extern char D_0034E870[];
extern u8 D_0035F588;

s32 *func_002438F0(s32 arg0, s32 *arg1) {
    s16 a;
    unk_func_002438F0_0 n0;
    unk_func_002438F0_0 n1;
    unk_func_002438F0_0 n2;
    unk_func_002438F0_0 n3;
    unk_func_002438F0_0 n4;
    f32 f0;
    f32 f1;
    s32 perso;
    s16 h;
    s32 c;
    u8 d;
    s16 e;
    s32 op;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, &n0);
    arg1 = fn_p_stEvalTree(arg0, arg1, &n1);
    arg1 = fn_p_stEvalTree(arg0, arg1, &n2);
    arg1 = fn_p_stEvalTree(arg0, arg1, &n3);
    arg1 = fn_p_stEvalTree(arg0, arg1, &n4);
    a = n0.h;
    h = n1.h;
    c = n2.w;
    d = n3.b;
    e = n4.h;
    f0 = 0.0f;
    f1 = 1.0f;
    if (MOR_fn_xPrepareMorph(arg0, a, &h, 1, c, &f0, &f1, d, e) == -1) {
        Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, 0x4D, -1, 0xFF, 0, D_0034E830, D_0034E870, 0x61);
        Erm_fn_ClearLastError(0, D_0034E870, 0x61);
    }
    return arg1;
}
