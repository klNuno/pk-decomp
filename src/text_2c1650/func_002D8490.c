#include "common.h"

typedef struct unk_func_002D8490_0 {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    s32 unk_28;
} unk_func_002D8490_0;

typedef struct unk_func_002D8490_1 {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
} unk_func_002D8490_1;

typedef struct unk_func_002D8490_2 {
    u8 pad_00[0x4];
    struct unk_func_002D8490_2 *unk_04;
    unk_func_002D8490_1 *unk_08;
} unk_func_002D8490_2;

typedef struct unk_func_002D8490_3 {
    unk_func_002D8490_2 *unk_00;
} unk_func_002D8490_3;

typedef struct unk_func_002D8490_4 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
    u8 unk_10[4];
} unk_func_002D8490_4;

typedef struct unk_func_002D8490_5 {
    u8 pad_00[0x1C];
    s32 unk_1C;
    u8 pad_20[0x1C];
    s32 unk_3C;
    s32 unk_40;
} unk_func_002D8490_5;

void func_002D86C0(unk_func_002D8490_3 *, void *);
void func_002D86B0(unk_func_002D8490_3 *, void *);
void func_002D4AB0(unk_func_002D8490_3 *, unk_func_002D8490_3 *);
void *func_002D2BC0(s32);
unk_func_002D8490_5 *f_vInit__16CExtraEventActorFRC14CLinkTypeActoriiPCQ24usnd13CEventResData(void *, s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_002CF630(void *);
void func_002D29C0(void *, void *, s32 *, unk_func_002D8490_5 **);
void func_002D9C80(unk_func_002D8490_5 *, s32);
extern s32 D_00360560;
extern s8 D_00360564;

void *func_002D8490(unk_func_002D8490_4 *arg0, s32 arg1, unk_func_002D8490_0 *arg2) {
    unk_func_002D8490_5 *sp70;
    unk_func_002D8490_3 sp74;
    unk_func_002D8490_3 sp78;
    unk_func_002D8490_3 sp7C;
    s32 sp80;
    u8 sp84[4];
    unk_func_002D8490_3 sp88;
    unk_func_002D8490_3 sp8C;
    s32 id;
    void *found;
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;
    void *mem;
    unk_func_002D8490_1 *e;
    s32 ok;

    found = NULL;
    id = 0;
    if (arg2 != NULL) {
        id = arg2->unk_28;
    }
    func_002D86C0(&sp88, arg0->unk_0C);
    func_002D4AB0(&sp78, &sp88);
    sp7C = sp78;
    while (func_002D86B0(&sp8C, arg0->unk_0C), func_002D4AB0(&sp74, &sp8C), sp7C.unk_00 != sp74.unk_00) {
        e = sp7C.unk_00->unk_08;
        if (e->unk_24 == id && e->unk_20 == arg1) {
            found = e;
            break;
        }
        sp7C.unk_00 = sp7C.unk_00->unk_04;
    }
    if (found != NULL) {
        return found;
    }
    if (D_00360564 == 0) {
        D_00360560 = 0;
        D_00360564 = 1;
    }
    f0 = 0.0f;
    id = 0;
    f1 = f0;
    f2 = f0;
    f3 = f0;
    if (arg2 != NULL) {
        id = arg2->unk_28;
        f0 = arg2->unk_18;
        f1 = arg2->unk_1C;
        f2 = arg2->unk_20;
        f3 = arg2->unk_24;
    }
    mem = func_002D2BC0(0x48);
    if (mem != NULL) {
        mem = f_vInit__16CExtraEventActorFRC14CLinkTypeActoriiPCQ24usnd13CEventResData(mem, arg0->unk_00, arg0->unk_04, arg1, id, f0, f1, f2, f3);
    }
    sp70 = mem;
    if (mem != NULL) {
        ok = ((unk_func_002D8490_5 *)mem)->unk_1C == -1;
        if (!ok) {
            ok = (u8)(((unk_func_002D8490_5 *)mem)->unk_40 != 0 && ((unk_func_002D8490_5 *)mem)->unk_3C != 0);
        }
        if (ok) {
            sp80 = func_002CF630(arg0->unk_10);
            func_002D29C0(sp84, arg0->unk_0C, &sp80, &sp70);
            found = sp70;
        } else {
            func_002D9C80(mem, 1);
        }
    }
    D_00360560++;
    return found;
}
