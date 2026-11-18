/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00211CB0_0;

s32 HIE_fn_hGetSuperObjectObject(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
s32 func_0019C240(s32);
s32 func_00208CC0(s32);

s32 *func_00211CB0(s32 arg0, s32 *arg1, unk_func_00211CB0_0 *arg2) {
    s32 perso;
    s32 res;
    s32 obj;
    s32 sp5C;

    perso = arg1[-2];
    res = 0;
    fn_vGetUltraOperatorPerso(func_00208CC0(perso), arg0, &sp5C);
    obj = func_001971C0(sp5C) != 2 ? 0 : HIE_fn_hGetSuperObjectObject(sp5C);
    res = func_0019C240(obj);
    arg2->unk_00 = res;
    arg2->unk_0C = 0x2C;
    return arg1;
}
