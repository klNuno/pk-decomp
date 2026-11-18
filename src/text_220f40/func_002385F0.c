/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002385F0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_002385F0_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 func_001971C0();
s32 HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree();
void func_00238700(s32, u8);

s32 *func_002385F0(s32 arg0, s32 *arg1) {
    s32 temp;
    s32 a;
    unk_func_002385F0_0 *b;
    u8 c;
    u8 sp50[0x1C];
    s32 sp6C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp6C);
    if (func_001971C0(sp6C) != 2) {
        a = 0;
    } else {
        a = HIE_fn_hGetSuperObjectObject(sp6C);
    }
    b = (unk_func_002385F0_0 *)a;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    c = sp50[0];
    switch (temp) {
    case 0x20A:
        func_00238700(b->unk_04, c);
        return arg1;
    }
    return arg1;
}
