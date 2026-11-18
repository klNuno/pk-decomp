#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002615D0_0;

f32 func_00114D70(f32);
f32 func_00115110(f32);
f32 func_001E60E0(f32);
void func_002592B0(unk_func_002615D0_0 *, unk_func_002615D0_0 *, unk_func_002615D0_0 *);
void func_00266E40(s32, unk_func_002615D0_0 *, unk_func_002615D0_0 *, s32, f32, f32, f32);
s32 rand(void);
extern s32 D_00360214;

void func_002615D0(unk_func_002615D0_0 *arg0, unk_func_002615D0_0 *arg1, s32 arg2, f32 arg3) {
    unk_func_002615D0_0 p;
    unk_func_002615D0_0 q;
    unk_func_002615D0_0 u;
    unk_func_002615D0_0 w;
    unk_func_002615D0_0 d;
    f32 inv;
    f32 a;
    f32 s;
    f32 c;
    f32 k;

    d.unk_00 = arg0->unk_00 - arg1->unk_00;
    d.unk_04 = arg0->unk_04 - arg1->unk_04;
    d.unk_08 = arg0->unk_08 - arg1->unk_08;
    inv = 1.0f / func_001E60E0(d.unk_00 * d.unk_00 + d.unk_04 * d.unk_04 + d.unk_08 * d.unk_08);
    d.unk_00 = d.unk_00 * inv;
    d.unk_04 = d.unk_04 * inv;
    d.unk_08 = d.unk_08 * inv;
    func_002592B0(&d, &u, &w);
    a = -6.28f + (12.56f * (f32)rand()) / 2147483648.0f;
    s = func_00114D70(a);
    c = func_00115110(a);
    d.unk_00 = s * u.unk_00 + c * w.unk_00;
    d.unk_04 = s * u.unk_04 + c * w.unk_04;
    d.unk_08 = s * u.unk_08 + c * w.unk_08;
    k = d.unk_00 * d.unk_00 + d.unk_04 * d.unk_04 + d.unk_08 * d.unk_08;
    if (k < 1.0f && D_00360214 != 0) {
        k = k * arg3;
    } else {
        k = arg3 * (1.0f / func_001E60E0(k));
    }
    p.unk_00 = arg1->unk_00 + k * d.unk_00;
    p.unk_04 = arg1->unk_04 + k * d.unk_04;
    p.unk_08 = arg1->unk_08 + k * d.unk_08;
    q.unk_00 = arg0->unk_00;
    q.unk_04 = arg0->unk_04;
    q.unk_08 = arg0->unk_08;
    func_00266E40(0x4000000A, &p, &q, arg2, 2.0f, 0.9f, 0.9f);
}
