/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001F9020_0;

typedef struct {
    unk_func_001F9020_0 *unk_00;
    unk_func_001F9020_0 *unk_04;
    unk_func_001F9020_0 *unk_08;
    unk_func_001F9020_0 *unk_0C;
    u8 pad_10[0x64];
    u8 unk_74;
    u8 unk_75;
} unk_func_001F9020_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001F9020_1 *unk_10;
} unk_func_001F9020_2;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001F9020_3;

unk_func_001F9020_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_001F9020_3 *);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
s32 func_001971C0(s32);
s32 func_00208CC0(s32);

s32 *func_001F9020(s32 arg0, s32 *arg1, unk_func_001F9020_3 *arg2) {
    s32 perso;
    unk_func_001F9020_1 *obj;
    s32 so;
    s32 v;
    s32 op;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(op), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    v = arg2->unk_00;
    if (v == 1) {
        if (obj->unk_74 & 1) {
            so = obj->unk_0C->unk_68;
        } else {
            so = obj->unk_04->unk_68;
        }
    } else if (v == -1) {
        so = obj->unk_00->unk_68;
    } else if (obj->unk_75 & 2) {
        so = obj->unk_08->unk_68;
    } else {
        so = obj->unk_04->unk_68;
    }
    arg2->unk_00 = so == 0 ? 0 : (func_001971C0(so) != 2 ? 0 : (s32)HIE_fn_hGetSuperObjectObject(so));
    arg2->unk_0C = 0xB;
    return arg1;
}
