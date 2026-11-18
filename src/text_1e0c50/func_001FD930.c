/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001FD930_0;

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0x4];
    s32 unk_10;
} unk_func_001FD930_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001FD930_0 unk_10;
} unk_func_001FD930_2;

typedef struct {
    u8 pad_00[0x130];
    f32 unk_130;
    f32 unk_134;
    f32 unk_138;
} unk_func_001FD930_3;

unk_func_001FD930_1 *HIE_fn_hGetSuperObjectObject(s32);
void func_0014BE80(s32, s32, unk_func_001FD930_0 *, unk_func_001FD930_0 *, unk_func_001FD930_0 *, unk_func_001FD930_0 *, unk_func_001FD930_0 *);
void func_0014F6B0(s32, unk_func_001FD930_0 *, unk_func_001FD930_0 *, unk_func_001FD930_0 *);
void func_00155EC0(s32, unk_func_001FD930_0 *);
s32 func_001979A0(s32);
s32 func_001979C0(s32);
s32 func_001B84B0(s32);
unk_func_001FD930_2 *func_001B8500(s32);
unk_func_001FD930_3 *func_001F19D0(s32);

void func_001FD930(s32 arg0, unk_func_001FD930_0 *arg1, unk_func_001FD930_0 *arg2) {
    unk_func_001FD930_0 a;
    unk_func_001FD930_0 b;
    unk_func_001FD930_0 c;
    unk_func_001FD930_0 d;
    unk_func_001FD930_3 *p;
    unk_func_001FD930_2 *q;
    s32 r;
    s32 t;

    t = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    r = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    p = func_001F19D0(arg0);
    q = func_001B8500(r);
    func_00155EC0(func_001979C0(arg0), &d);
    ((s32 *)&c)[0] = ((s32 *)arg2)[0];
    ((s32 *)&c)[1] = ((s32 *)arg2)[1];
    ((s32 *)&c)[2] = ((s32 *)arg2)[2];
    func_0014BE80(func_001B84B0(r), arg0, &d, arg1, &a, &b, &c);
    func_0014F6B0(func_001979A0(arg0), &a, &b, &c);
    func_0014F6B0(func_001979C0(arg0), &a, &b, &c);
    ((s32 *)&q->unk_10)[0] = ((s32 *)arg1)[0];
    ((s32 *)&q->unk_10)[1] = ((s32 *)arg1)[1];
    ((s32 *)&q->unk_10)[2] = ((s32 *)arg1)[2];
    p->unk_138 = p->unk_134 = p->unk_130 = 0.0f;
}
