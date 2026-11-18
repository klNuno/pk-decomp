/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_Q_0;

typedef struct {
    u8 pad_00[0x60];
} unk_Q_1;

void func_00155C70();
f32 func_00114D70(f32);
f32 func_00115110(f32);
void func_0014F6B0();
void func_00153920();

void func_001AFF80(s32 arg0, f32 arg1) {
    unk_Q_1 m;
    unk_Q_0 a;
    unk_Q_0 b;
    unk_Q_0 c;
    f32 cs;
    f32 sn;

    func_00155C70(&m);
    cs = func_00114D70(arg1);
    sn = func_00115110(arg1);
    if ((cs > 0.0f ? cs : -cs) < 0.0001f) {
        cs = 0.0f;
    }
    if ((sn > 0.0f ? sn : -sn) < 0.0001f) {
        sn = 0.0f;
    }
    a.unk_00 = cs;
    a.unk_04 = sn;
    a.unk_08 = 0.0f;
    b.unk_00 = -sn;
    b.unk_04 = cs;
    b.unk_08 = 0.0f;
    c.unk_04 = c.unk_00 = 0.0f;
    c.unk_08 = 1.0f;
    func_0014F6B0(&m, &a, &b, &c);
    func_00153920(arg0, arg0, &m);
}
