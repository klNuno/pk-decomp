/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F89C0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_001F89C0_0;

typedef struct unk_func_001F89C0_1 {
    u8 pad_00[0x10];
    unk_func_001F89C0_0 *unk_10;
} unk_func_001F89C0_1;

unk_func_001F89C0_1 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_001F89C0_0 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 *func_001F8900(unk_func_001F89C0_0 *, s32, s32, s32, s32, s32);
s32 func_00208CC0(s32);

s32 *func_001F89C0(s32 arg0, s32 *arg1, unk_func_001F89C0_0 *arg2) {
    s32 perso;
    unk_func_001F89C0_0 *obj;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 val;
    s32 id;

    a = 0;
    b = 0;
    c = 0;
    d = 0;
    id = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(id), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    val = arg2->unk_00;
    switch (id) {
    case 0x166:
        a = obj->unk_00;
        b = obj->unk_04;
        c = obj->unk_0C;
        d = obj->unk_08;
        break;
    case 0x167:
        a = obj->unk_00 + 0xC;
        b = obj->unk_04 + 0xC;
        c = obj->unk_0C + 0xC;
        d = obj->unk_08 + 0xC;
        break;
    }
    arg2->unk_00 = func_001F8900(obj, a, b, c, d, val)[0];
    arg2->unk_04 = func_001F8900(obj, a, b, c, d, val)[1];
    arg2->unk_08 = func_001F8900(obj, a, b, c, d, val)[2];
    arg2->unk_0C = 0x15;
    return arg1;
}
