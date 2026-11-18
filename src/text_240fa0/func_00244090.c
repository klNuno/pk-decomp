/* profile: o0_301_p */
#include "common.h"

typedef union unk_func_00244090_0 {
    s16 h;
    s32 w;
} unk_func_00244090_0;

typedef struct unk_func_00244090_1 {
    unk_func_00244090_0 unk_00;
    u8 pad_04[0xC];
} unk_func_00244090_1;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00244090_1 *);
s32 func_001C04C0(s32);
void func_00136010(s32, s16);
s16 MOR_fn_xMorphing(s32, s16, s16 *, s32, f32 *, s16, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern u8 D_0035F588;
extern char D_0034E830[];
extern char D_0034E870[];

s32 *func_00244090(s32 arg0, s32 *arg1) {
    unk_func_00244090_1 sp50;
    unk_func_00244090_1 sp60;
    unk_func_00244090_1 sp70;
    unk_func_00244090_1 sp80;
    f32 f;
    s32 perso;
    s16 c;
    s16 a;
    s16 b;
    s32 op;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp50);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp80);
    a = sp50.unk_00.h;
    c = sp60.unk_00.h;
    f = sp70.unk_00.w;
    b = sp80.unk_00.h;
    a = a - 1;
    c = c - 1;
    f = f / 100.0f;
    if (func_001C04C0(arg0) == 0) {
        func_00136010(arg0, b);
    }
    if (MOR_fn_xMorphing(arg0, a, &c, 1, &f, b, 2) == -1) {
        Erm_fn_v_UpdateLastError(0x43, D_0035F588, 0, 0x4D, -1, 0xFF, 0, D_0034E830, D_0034E870, 0x151);
        Erm_fn_ClearLastError(0, D_0034E870, 0x151);
    }
    return arg1;
}
