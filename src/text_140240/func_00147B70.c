#include "common.h"

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x70];
    u8 unk_80[0x60];
    u8 unk_E0[0x60];
} unk_func_00147B70_0;

typedef struct {
    u8 pad_00[0x3C];
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
} unk_func_00147B70_1;

unk_func_00147B70_1 *func_00138800(unk_func_00147B70_0 *);
void func_00154B00(void *, void *);
void func_001553C0(f32 *, void *, f32 *);
void func_00155DA0(void *, f32 *, f32 *);
f32 *func_00155EE0(void *);

void func_00147B70(unk_func_00147B70_0 *arg0, void *arg1, void *arg2, f32 arg3) {
    f32 v[3];
    f32 x;
    f32 y;
    f32 z;
    void *m;
    f32 *a;
    f32 *b;
    f32 *p1;
    f32 *p2;
    unk_func_00147B70_1 *p;
    u32 flags;

    m = arg0->unk_E0;
    p = func_00138800(arg0);
    x = arg3 * p->unk_3C;
    y = arg3 * p->unk_40;
    z = arg3 * p->unk_44;
    a = func_00155EE0(arg0->unk_80);
    b = func_00155EE0(m);
    p1 = &v[1];
    p2 = &v[2];
    v[0] = b[0] - a[0];
    *p1 = b[1] - a[1];
    *p2 = b[2] - a[2];
    if (((arg0->unk_08 & 0x10000) ? 0 : 1) && (v[0] != 0.0f || *p1 != 0.0f || *p2 != 0.0f)) {
        if ((arg0->unk_0C & 0x800) ? 1 : 0) {
            func_00154B00(arg2, arg1);
            flags = arg0->unk_0C & ~0x800;
            arg0->unk_0C = flags;
            arg0->unk_0C = flags;
        }
        func_001553C0(v, arg2, v);
    }
    if ((arg0->unk_08 & 0x800000) ? 1 : 0) {
        v[0] += x;
    }
    if ((arg0->unk_08 & 0x1000000) ? 1 : 0) {
        *p1 += y;
    }
    if ((arg0->unk_08 & 0x2000000) ? 1 : 0) {
        *p2 += z;
    }
    if (((arg0->unk_08 & 0x10000) ? 0 : 1) && (v[0] != 0.0f || *p1 != 0.0f || *p2 != 0.0f)) {
        func_001553C0(v, arg1, v);
    }
    func_00155DA0(m, a, v);
}
