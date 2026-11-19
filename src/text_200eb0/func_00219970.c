/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_00219970_0;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00219970_1;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00219970_2;

s32 func_00208CC0();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
unk_func_00219970_1 *fn_h_StandardGameGetSuperObject();
unk_func_00219970_2 *func_00155EE0();
f32 func_00151360(f32);
f32 func_001E60E0(f32);

s32 *func_00219970(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp;
    unk_func_00219970_1 *so;
    unk_func_00219970_2 *a;
    unk_func_00219970_2 *b;
    unk_func_00219970_2 d;
    unk_func_00219970_1 *perso;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &perso);
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    {
        const f32 zero = 0.0f;
        if (zero == *(f32 *)arg2) {
            *(f32 *)arg2 = 3.40282205e38f;
            arg2[3] = 8;
            return arg1;
        }
    }
    so = fn_h_StandardGameGetSuperObject(((unk_func_00219970_0 *)arg2[0])->unk_04);
    a = func_00155EE0(so->unk_24);
    b = func_00155EE0(perso->unk_24);
    d.unk_00 = a->unk_00 - b->unk_00;
    d.unk_04 = a->unk_04 - b->unk_04;
    d.unk_08 = a->unk_08 - b->unk_08;
    *(f32 *)arg2 = func_001E60E0(func_00151360(d.unk_00) + func_00151360(d.unk_04) + func_00151360(d.unk_08));
    arg2[3] = 8;
    return arg1;
}
