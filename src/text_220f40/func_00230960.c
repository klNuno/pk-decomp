/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00230960_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00230960_0;

typedef struct unk_func_00230960_1 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00230960_1;

typedef struct unk_func_00230960_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x38];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
} unk_func_00230960_2;

typedef struct unk_func_00230960_3 {
    u8 pad_00[0x14];
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} unk_func_00230960_3;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_00230960_1 *HIE_fn_hGetSuperObjectObject();
unk_func_00230960_2 *func_001B84B0();
s32 *fn_p_stEvalTree();
unk_func_00230960_3 *func_00138800();

s32 *func_00230960(s32 arg0, s32 *arg1) {
    unk_func_00230960_2 *p;
    s32 a;
    s32 temp;
    s32 sp60;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp60);
    a = HIE_fn_hGetSuperObjectObject(sp60)->unk_08;
    if (a == 0) {
        return arg1;
    }
    p = func_001B84B0(a);
    if (p == NULL) {
        return arg1;
    }
    {
    f32 sp50[4];
    f32 x;
    f32 y;
    f32 z;
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    x = sp50[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    y = sp50[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    z = sp50[0];
    switch (temp) {
    case 0x144:
        p->unk_48 = x;
        p->unk_4C = y;
        p->unk_50 = z;
        p->unk_0C = p->unk_0C |= 0x1000;
        break;
    case 0x145:
        func_00138800(p)->unk_14 = x;
        func_00138800(p)->unk_18 = y;
        func_00138800(p)->unk_1C = z;
        break;
    }
    }
    return arg1;
}
