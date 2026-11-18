#include "common.h"

typedef struct unk_func_001DCDD0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001DCDD0_0;

f32 func_001E60E0(f32);

static inline f32 func_001DCDD0_dist(unk_func_001DCDD0_0 *a, unk_func_001DCDD0_0 *b) {
    unk_func_001DCDD0_0 d;
    d.unk_00 = a->unk_00 - b->unk_00;
    d.unk_04 = a->unk_04 - b->unk_04;
    d.unk_08 = a->unk_08 - b->unk_08;
    return func_001E60E0(d.unk_00 * d.unk_00 + d.unk_04 * d.unk_04 + d.unk_08 * d.unk_08);
}

void func_001DCDD0(unk_func_001DCDD0_0 *arg0, f32 *arg1, unk_func_001DCDD0_0 *arg2, unk_func_001DCDD0_0 *arg3, f32 arg4) {
    f32 d;
    f32 t;

    d = func_001DCDD0_dist(arg2, arg3);
    if (d <= arg4) {
        *(s32 *)&arg0->unk_00 = *(s32 *)&arg2->unk_00;
        *(s32 *)&arg0->unk_04 = *(s32 *)&arg2->unk_04;
        *(s32 *)&arg0->unk_08 = *(s32 *)&arg2->unk_08;
        *arg1 = arg4;
        return;
    }
    t = (1.0f - arg4 / d) / 2.0f;
    arg0->unk_00 = arg2->unk_00 + t * (arg3->unk_00 - arg2->unk_00);
    arg0->unk_04 = arg2->unk_04 + t * (arg3->unk_04 - arg2->unk_04);
    arg0->unk_08 = arg2->unk_08 + t * (arg3->unk_08 - arg2->unk_08);
    *arg1 = (d + arg4) / 2.0f;
}
