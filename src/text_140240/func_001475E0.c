/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001475E0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001475E0_0;

typedef struct unk_func_001475E0_1 {
    u8 pad_00[0x48];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
} unk_func_001475E0_1;

typedef struct unk_func_001475E0_2 {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[0x74];
    u8 unk_80[0x60];
    u8 unk_E0[4];
} unk_func_001475E0_2;

unk_func_001475E0_1 *func_00138800();
void func_00155E20(u8 *, f32);
void func_00155E40(u8 *, f32);
void func_00155E60(u8 *, f32);
unk_func_001475E0_0 *func_00155EE0();

#define AXIS(M, F, G, CALL) \
    if (((arg0->unk_08 & M) ? 1 : 0)) { \
        f32 lo; \
        f32 hi; \
        f32 v; \
        f32 a; \
        f32 b; \
        a = s1->F; \
        b = s2->F; \
        lo = a < b ? a : b; \
        hi = a > b ? a : b; \
        v = func_00138800(arg0)->G; \
        if (lo <= v && v < hi) { \
            CALL(s0, arg1->F); \
        } \
    }

void func_001475E0(unk_func_001475E0_2 *arg0, unk_func_001475E0_0 *arg1) {
    u8 *s0;
    unk_func_001475E0_0 *s1;
    unk_func_001475E0_0 *s2;

    if (((arg0->unk_08 & 0x1C000000) ? 1 : 0)) {
        s0 = arg0->unk_E0;
        s1 = func_00155EE0(arg0->unk_80);
        s2 = func_00155EE0(s0);
        AXIS(0x4000000, unk_00, unk_48, func_00155E60)
        AXIS(0x8000000, unk_04, unk_4C, func_00155E40)
        AXIS(0x10000000, unk_08, unk_50, func_00155E20)
    }
}
