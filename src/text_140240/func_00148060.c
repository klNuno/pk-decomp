#include "common.h"

typedef struct unk_func_00148060_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00148060_0;

typedef struct unk_func_00148060_1 {
    u8 pad_00[0x8];
    f32 unk_08;
    f32 unk_0C;
} unk_func_00148060_1;

unk_func_00148060_1 *func_001387B0(void *);
void func_0014FDE0(void *, unk_func_00148060_0 *);
unk_func_00148060_0 *func_00155EE0(void *);
void func_001508D0(void *, unk_func_00148060_0 *, f32);
void func_00155E80(void *, unk_func_00148060_0 *);

void func_00148060(u8 *arg0) {
    unk_func_00148060_0 sp50;
    unk_func_00148060_0 sp60;
    unk_func_00148060_0 sp70;
    f32 t;
    f32 x;
    f32 y;
    f32 z;
    unk_func_00148060_0 *v;
    u8 *p;
    s32 *d;

    t = func_001387B0(arg0)->unk_0C;
    if (0.0f != t) {
        p = arg0 + 0xE0;
        func_0014FDE0(p, &sp70);
        v = func_00155EE0(p);
        sp60.unk_00 = 0.0f;
        sp60.unk_04 = 1.0f;
        sp60.unk_08 = 0.0f;
        x = sp70.unk_00 * func_001387B0(arg0)->unk_08;
        y = sp70.unk_04 * func_001387B0(arg0)->unk_08;
        z = sp70.unk_08 * func_001387B0(arg0)->unk_08;
        d = (s32 *)&sp50;
        d[0] = ((s32 *)v)[0];
        d[1] = ((s32 *)v)[1];
        d[2] = ((s32 *)v)[2];
        v->unk_00 -= x;
        v->unk_04 -= y;
        v->unk_08 -= z;
        func_001508D0(p, &sp60, -t);
        func_00155E80(p, &sp50);
        func_001387B0(arg0)->unk_0C = 0.0f;
    }
}
