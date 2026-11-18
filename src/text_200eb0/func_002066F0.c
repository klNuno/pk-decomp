/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002066F0_0;

typedef struct {
    unk_func_002066F0_0 *unk_00;
    u8 pad_04[0x18];
} unk_func_002066F0_1;

s32 fn_h_StandardGameGetSuperObject(s32);
s32 fn_p_stEvalTree(s32, s32, unk_func_002066F0_1 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
u8 func_0019AC30(s32, s32);
s32 func_00208B20(s32);

s32 func_002066F0(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_002066F0_1 sp40;
    s32 sp5C;
    unk_func_002066F0_0 *p;
    s32 ok;

    fn_vGetUltraOperatorPerso(func_00208B20(0x3D), arg0, &sp5C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    p = sp40.unk_00;
    ok = 0;
    if (p != 0 && p->unk_04 != 0) {
        ok = 1;
    }
    *arg2 = ok ? func_0019AC30(fn_h_StandardGameGetSuperObject(sp40.unk_00->unk_04), sp5C) : 0;
    return arg1;
}
