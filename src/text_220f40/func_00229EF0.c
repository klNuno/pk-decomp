/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00229EF0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00229EF0_0;

typedef struct unk_func_00229EF0_1 {
    u8 pad_00[0x8];
    struct unk_func_00229EF0_1 *unk_08;
    u8 pad_0C[0x8];
    struct unk_func_00229EF0_1 *unk_14;
} unk_func_00229EF0_1;

typedef struct unk_func_00229EF0_2 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00229EF0_2;

typedef struct unk_func_00229EF0_3 {
    unk_func_00229EF0_1 *unk_00;
    unk_func_00229EF0_0 unk_04;
    unk_func_00229EF0_0 unk_10;
    u16 unk_1C;
    u8 unk_1E;
} unk_func_00229EF0_3;

void func_0012DAE0();
unk_func_00229EF0_2 *HIE_fn_hGetSuperObjectObject();
s32 func_001979C0();
void func_00155810();
void func_00227E60(s32, unk_func_00229EF0_0 *, unk_func_00229EF0_0 *, u16);
void func_0012D940();
void func_0012D450();
void func_0012D550();
s32 func_001B84B0();
void func_00139A90();

void func_00229EF0(unk_func_00229EF0_3 *arg0) {
    unk_func_00229EF0_1 *p;
    unk_func_00229EF0_1 *q;
    unk_func_00229EF0_1 *obj;
    s16 n;
    s32 b;
    s32 a;
    unk_func_00229EF0_1 *first;
    unk_func_00229EF0_0 sp80;
    unk_func_00229EF0_0 sp90;

    obj = arg0->unk_00;
    func_0012DAE0(obj);
    a = HIE_fn_hGetSuperObjectObject(obj)->unk_08;
    b = func_001979C0(obj);
    if (!arg0->unk_1E) {
        func_00155810(&sp80, b, &arg0->unk_04);
        func_00155810(&sp90, b, &arg0->unk_10);
    } else {
        sp80 = arg0->unk_04;
        sp90 = arg0->unk_10;
    }
    func_00227E60(b, &sp80, &sp90, arg0->unk_1C);
    func_0012D940(obj);
    for (n = 0, p = obj->unk_08, first = p; p != NULL;
         n++, q = p = p->unk_14, (void)q) {
        func_0012D450(p);
    }
    func_0012D550(obj);
    if (a != 0) {
        func_00139A90(func_001B84B0(a), b);
    }
}
