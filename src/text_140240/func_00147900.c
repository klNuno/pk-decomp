#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00147900_0;

typedef struct {
    u8 pad_00[0x8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x20];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0x44];
    u8 unk_80[0x60];
    u8 unk_E0[1];
} unk_func_00147900_1;

void func_00154B00(void *, void *);
void func_001553C0(unk_func_00147900_0 *, void *, unk_func_00147900_0 *);
void func_00155DA0(void *, unk_func_00147900_0 *, unk_func_00147900_0 *);
unk_func_00147900_0 *func_00155EE0(void *);

void func_00147900(unk_func_00147900_1 *arg0, void *arg1, void *arg2, f32 arg3) {
    void *q;
    unk_func_00147900_0 v;
    unk_func_00147900_0 *a;
    unk_func_00147900_0 *b;
    f32 x;
    f32 y;
    f32 z;

    q = arg0->unk_E0;
    x = arg3 * arg0->unk_30;
    y = arg3 * arg0->unk_34;
    z = arg3 * arg0->unk_38;
    a = func_00155EE0(arg0->unk_80);
    b = func_00155EE0(q);
    v.unk_00 = b->unk_00 - a->unk_00;
    v.unk_04 = b->unk_04 - a->unk_04;
    v.unk_08 = b->unk_08 - a->unk_08;
    if (((arg0->unk_08 & 0x8000) ? 0 : 1) != 0) {
        if (v.unk_00 != 0.0f || v.unk_04 != 0.0f || v.unk_08 != 0.0f) {
            if (((arg0->unk_0C & 0x800) ? 1 : 0) != 0) {
                func_00154B00(arg2, arg1);
                arg0->unk_0C = arg0->unk_0C &= ~0x800;
            }
            func_001553C0(&v, arg2, &v);
        }
    }
    if (((arg0->unk_08 & 0x100000) ? 1 : 0) != 0) {
        v.unk_00 = x;
    }
    if (((arg0->unk_08 & 0x200000) ? 1 : 0) != 0) {
        v.unk_04 = y;
    }
    if (((arg0->unk_08 & 0x400000) ? 1 : 0) != 0) {
        v.unk_08 = z;
    }
    if (((arg0->unk_08 & 0x8000) ? 0 : 1) != 0) {
        if (v.unk_00 != 0.0f || v.unk_04 != 0.0f || v.unk_08 != 0.0f) {
            func_001553C0(&v, arg1, &v);
        }
    }
    func_00155DA0(q, a, &v);
}
