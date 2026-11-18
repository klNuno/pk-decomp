/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x6C];
    s32 unk_6C;
} unk_func_001FAEA0_0;

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001FAEA0_1;

typedef struct {
    unk_func_001FAEA0_1 *unk_00;
    unk_func_001FAEA0_0 *unk_04;
    unk_func_001FAEA0_0 *unk_08;
    unk_func_001FAEA0_0 *unk_0C;
    u8 pad_10[0x48];
    f32 unk_58;
    u8 pad_5C[0x18];
    u8 unk_74;
    u8 unk_75;
} unk_func_001FAEA0_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001FAEA0_2 *unk_10;
} unk_func_001FAEA0_3;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001FAEA0_4;

typedef union {
    s32 unk_00;
    f32 f;
    unk_func_001FAEA0_4 *p;
} unk_func_001FAEA0_5;

typedef struct {
    unk_func_001FAEA0_5 unk_00;
    u8 pad_04[0x14];
} unk_func_001FAEA0_6;

s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_001FAEA0_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_001FAEA0_6 *);
s32 fn_h_StandardGameGetSuperObject(s32);
void func_001B4E30(unk_func_001FAEA0_2 *);
void func_001B4E80(unk_func_001FAEA0_2 *);
void func_001B4D70(unk_func_001FAEA0_2 *);

s32 *func_001FAEA0(s32 arg0, s32 *arg1) {
    unk_func_001FAEA0_6 sp70;
    s32 perso;
    f32 f;
    unk_func_001FAEA0_2 *obj;
    s32 so;
    unk_func_001FAEA0_0 *p;
    s32 a;
    s32 b;
    s32 op;

    op = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(op), arg0, &perso);
    obj = HIE_fn_hGetSuperObjectObject(perso)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    a = sp70.unk_00.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    b = sp70.unk_00.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    so = fn_h_StandardGameGetSuperObject(sp70.unk_00.p->unk_04);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    f = sp70.unk_00.f;
    if (obj->unk_75 & 2) {
        func_001B4E30(obj);
        if (obj->unk_74 & 1) {
            func_001B4E80(obj);
        }
    }
    if (a == 1) {
        func_001B4D70(obj);
        p = obj->unk_0C;
    } else {
        p = obj->unk_04;
    }
    switch (b) {
    case -1:
        so = obj->unk_00->unk_68;
        break;
    case 0:
        so = 0;
        break;
    case 1:
        break;
    }
    p->unk_6C = so;
    if (a != 1) {
        obj->unk_08->unk_6C = so;
        obj->unk_0C->unk_6C = so;
    }
    obj->unk_58 = f;
    return arg1;
}
