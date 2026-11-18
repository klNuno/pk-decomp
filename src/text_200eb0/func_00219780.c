/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00219780_0;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00219780_1;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00219780_2;

typedef struct {
    unk_func_00219780_2 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00219780_3;

unk_func_00219780_1 *fn_h_StandardGameGetSuperObject();
s32 *fn_p_stEvalTree();
void fn_vGetUltraOperatorPerso();
f32 func_00151360(f32);
void func_001559E0();
unk_func_00219780_0 *func_00155EE0();
s32 func_0019E2E0();
f32 func_001E60E0(f32);
s32 func_00208CC0();

s32 *func_00219780(s32 arg0, s32 *arg1, unk_func_00219780_3 *arg2) {
    unk_func_00219780_0 *a;
    unk_func_00219780_0 *b;
    unk_func_00219780_1 *obj;
    s32 ha;
    s32 hb;
    s32 op;
    unk_func_00219780_0 va;
    unk_func_00219780_0 vb;
    unk_func_00219780_0 d;
    unk_func_00219780_1 *perso;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(op), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    obj = fn_h_StandardGameGetSuperObject(arg2->unk_00->unk_04);
    ha = func_0019E2E0(obj);
    hb = func_0019E2E0(perso);
    if (ha != 0) {
        a = &va;
        func_001559E0(a, obj->unk_24, ha);
    } else {
        a = func_00155EE0(obj->unk_24);
    }
    if (hb != 0) {
        b = &vb;
        func_001559E0(b, perso->unk_24, hb);
    } else {
        b = func_00155EE0(perso->unk_24);
    }
    d.unk_00 = a->unk_00 - b->unk_00;
    d.unk_04 = a->unk_04 - b->unk_04;
    d.unk_08 = a->unk_08 - b->unk_08;
    *(f32 *)arg2 = func_001E60E0(func_00151360(d.unk_00) + func_00151360(d.unk_04) + func_00151360(d.unk_08));
    arg2->unk_0C = 8;
    return arg1;
}
