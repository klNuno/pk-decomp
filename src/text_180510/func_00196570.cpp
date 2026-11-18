#include "common.h"

typedef struct unk_func_00196570_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00196570_0;

typedef struct unk_func_00196570_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00196570_1;

extern "C" {
f32 func_001E60E0(f32);
}

extern "C" void func_00196570(unk_func_00196570_0 *arg0, f32 *arg1, unk_func_00196570_0 *arg2, unk_func_00196570_0 *arg3, f32 arg4, f32 arg5) {
    unk_func_00196570_0 v;
    f32 d;
    f32 t;

    v.unk_00 = arg2->unk_00 - arg3->unk_00;
    v.unk_04 = arg2->unk_04 - arg3->unk_04;
    v.unk_08 = arg2->unk_08 - arg3->unk_08;
    d = func_001E60E0(v.unk_00 * v.unk_00 + v.unk_04 * v.unk_04 + v.unk_08 * v.unk_08);
    if (d + arg4 <= arg5) {
        *(unk_func_00196570_1 *)arg0 = *(unk_func_00196570_1 *)arg3;
        *arg1 = arg5;
    } else if (d + arg5 < arg4) {
        *(unk_func_00196570_1 *)arg0 = *(unk_func_00196570_1 *)arg2;
        *arg1 = arg4;
    } else {
        t = (1.0f - (arg4 - arg5) / d) / 2.0f;
        arg0->unk_00 = arg2->unk_00 + t * (arg3->unk_00 - arg2->unk_00);
        arg0->unk_04 = arg2->unk_04 + t * (arg3->unk_04 - arg2->unk_04);
        arg0->unk_08 = arg2->unk_08 + t * (arg3->unk_08 - arg2->unk_08);
        *arg1 = (arg5 + (d + arg4)) / 2.0f;
    }
}
