#include "common.h"

typedef struct unk_func_00147E00_0 {
    u8 pad_00[0x8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x14];
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
} unk_func_00147E00_0;

void func_00154B00(s32, s32);
void func_001553C0(f32 *, s32, f32 *);
void func_00155DA0(void *, void *, f32 *);
f32 *func_00155EE0(void *);

void func_00147E00(unk_func_00147E00_0 *arg0, s32 arg1, s32 arg2, f32 arg3) {
    f32 v[3];
    f32 x;
    f32 y;
    f32 z;
    void *b;
    f32 *a;
    f32 *c;

    b = (u8 *)arg0 + 0xE0;
    x = arg3 * arg0->unk_24;
    y = arg3 * arg0->unk_28;
    z = arg3 * arg0->unk_2C;
    a = func_00155EE0((u8 *)arg0 + 0x80);
    c = func_00155EE0(b);
    v[0] = c[0] - a[0];
    v[1] = c[1] - a[1];
    v[2] = c[2] - a[2];
    if (((arg0->unk_08 & 0x4000) ? 0 : 1) && (v[0] != 0.0f || v[1] != 0.0f || v[2] != 0.0f)) {
        if ((arg0->unk_0C & 0x800) ? 1 : 0) {
            func_00154B00(arg2, arg1);
            arg0->unk_0C = (arg0->unk_0C &= ~0x800);
        }
        func_001553C0(v, arg2, v);
    }
    if ((arg0->unk_08 & 0x20000) ? 1 : 0) {
        v[0] = x;
    }
    if ((arg0->unk_08 & 0x40000) ? 1 : 0) {
        v[1] = y;
    }
    if ((arg0->unk_08 & 0x80000) ? 1 : 0) {
        v[2] = z;
    }
    if (((arg0->unk_08 & 0x4000) ? 0 : 1) && (v[0] != 0.0f || v[1] != 0.0f || v[2] != 0.0f)) {
        func_001553C0(v, arg1, v);
    }
    func_00155DA0(b, a, v);
}
