#include "common.h"

typedef struct {
    f32 x, y, z, w;
} unk_Q_0;

void func_00155F50();
void func_00155EC0();

static inline void swapf(f32 *a, f32 *b) {
    f32 temp = *a;
    *a = *b;
    *b = temp;
}

void func_00165E50(s32 arg0, f32 *arg1, unk_Q_0 *arg2, s32 arg3) {
    unk_Q_0 r0, r1, r2;
    unk_Q_0 t;
    unk_Q_0 *end;

    func_00155F50(arg3, &r0, &r1, &r2);
    swapf(&r0.y, &r1.x);
    swapf(&r0.z, &r2.x);
    swapf(&r1.z, &r2.y);
    func_00155EC0(arg3, &t);
    end = arg2 + arg0;
    for (; arg2 < end; arg2++, arg1 += 3) {
        arg2->x = t.x + (r0.x * arg1[0] + r0.y * arg1[1] + r0.z * arg1[2]);
        arg2->y = t.y + (r1.x * arg1[0] + r1.y * arg1[1] + r1.z * arg1[2]);
        arg2->z = t.z + (r2.x * arg1[0] + r2.y * arg1[1] + r2.z * arg1[2]);
    }
}
