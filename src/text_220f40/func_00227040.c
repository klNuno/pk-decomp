/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00227040_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00227040_0;

typedef struct unk_func_00227040_1 {
    union {
        s16 h;
        s32 i;
        f32 f;
        unk_func_00227040_0 v;
    } unk_00;
    u8 pad_0C[0xC];
} unk_func_00227040_1;

u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, s32 *);
s32 fn_p_stEvalTree(s32, s32, unk_func_00227040_1 *);
void func_001BFDD0(s32, s32, f32);
void func_001BFEC0(s32, s32, s32);
void func_001BFFF0(s32, s32, unk_func_00227040_0 *);

s32 func_00227040(s32 arg0, s32 arg1) {
    unk_func_00227040_1 sp40;
    unk_func_00227040_0 sp58;
    s32 sp68;
    f32 sp6C;
    s32 var_s1;
    s16 var_s0;
    s32 var_s2;

    var_s1 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(var_s1), arg0, &sp68);
    switch (var_s1) {
    case 0xC6:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        var_s0 = sp40.unk_00.h;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        sp6C = sp40.unk_00.f;
        func_001BFDD0(sp68, var_s0, sp6C);
        break;
    case 0xC7:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        var_s0 = sp40.unk_00.h;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        var_s2 = sp40.unk_00.i;
        func_001BFEC0(sp68, var_s0, var_s2);
        break;
    case 0xC8:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        var_s0 = sp40.unk_00.h;
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
        sp58 = sp40.unk_00.v;
        func_001BFFF0(sp68, var_s0, &sp58);
        break;
    }
    return arg1;
}
