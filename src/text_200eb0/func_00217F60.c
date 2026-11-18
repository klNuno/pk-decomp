/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00217F60_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00217F60_0;

typedef struct unk_func_00217F60_1 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_00217F60_1;

unk_func_00217F60_1 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00217F60_0 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
u8 func_001B7740(s32, s32, s16);
void func_001EDBB0(s32, s32);
s32 func_00208CC0(s32);

s32 *func_00217F60(s32 arg0, s32 *arg1, unk_func_00217F60_0 *arg2) {
    s32 id;
    s32 idx;
    s32 obj;
    u8 b;
    unk_func_00217F60_0 temp;
    s32 perso;

    id = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(id), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_14;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    idx = temp.unk_00;
    idx--;
    switch (id) {
    case 0x13B:
        b = func_001B7740(0, obj, (u16)idx);
        arg2->unk_00 = (u16)b;
        arg2->unk_0C = 6;
        break;
    case 0x13C:
        b = func_001B7740(1, obj, (u16)idx);
        arg2->unk_00 = (u16)b;
        arg2->unk_0C = 6;
        break;
    case 0x13D:
        b = func_001B7740(2, obj, (u16)idx);
        arg2->unk_00 = (u16)b;
        arg2->unk_0C = 6;
        break;
    case 0x13E:
        b = func_001B7740(3, obj, (u16)idx);
        arg2->unk_00 = (u16)b;
        arg2->unk_0C = 6;
        break;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
    return arg1;
}
