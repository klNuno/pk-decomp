/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0021C5A0_0 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_0021C5A0_0;

s32 func_00208CC0();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
void func_00150C20(u8 *, s32);
void func_00155810(s32 *, u8 *, s32 *);

s32 *func_0021C5A0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 *p;
    s32 temp;
    u8 sp30[0x6C];
    unk_func_0021C5A0_0 *sp9C;

    temp = arg1[-2];
    p = arg2;
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &sp9C);
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    func_00150C20(sp30, sp9C->unk_24);
    func_00155810(p, sp30, p);
    return arg1;
}
