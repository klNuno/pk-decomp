/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00206E50_0 {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00206E50_0;

typedef union unk_func_00206E50_1 {
    s16 unk_00;
    s32 unk_00_w;
    u8 pad_00[0x18];
} unk_func_00206E50_1;

unk_func_00206E50_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00206E50_1 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_00197860(s32);
s32 func_0019ABC0(s32);
u8 func_001ABBB0(s32);
s32 func_001BFBD0(s32);
s32 func_00208B20(s32);

s32 *func_00206E50(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 op;
    unk_func_00206E50_1 param;
    s32 perso;
    s32 m1;
    s32 m2;
    s16 bit;
    s32 obj;
    s32 mask;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208B20(op), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, &param);
    switch (op) {
    case 0x56:
        bit = param.unk_00 - 1;
        if (bit < 0x20) {
            m1 = 1 << bit;
            *arg2 = (m1 & func_0019ABC0(HIE_fn_hGetSuperObjectObject(perso)->unk_04)) ? 1 : 0;
        } else {
            m2 = 1 << (bit - 0x20);
            *arg2 = (m2 & func_001BFBD0(HIE_fn_hGetSuperObjectObject(perso)->unk_04)) ? 1 : 0;
        }
        break;
    case 0x59:
        mask = param.unk_00_w;
        obj = func_00197860(*(s32 *)HIE_fn_hGetSuperObjectObject(perso));
        *arg2 = (obj != 0 && (mask & func_001ABBB0(obj))) ? 1 : 0;
        break;
    default:
        *arg2 = 0;
        break;
    }
    return arg1;
}
