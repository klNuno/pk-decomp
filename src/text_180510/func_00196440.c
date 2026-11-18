#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00196440_0;

f32 func_001E60E0(f32);

void func_00196440(unk_func_00196440_0 *arg0, f32 *arg1, unk_func_00196440_0 *arg2, unk_func_00196440_0 *arg3, f32 arg4) {
    f32 dx;
    f32 dy;
    f32 dz;
    f32 dist;
    f32 t;

    dx = arg2->unk_00 - arg3->unk_00;
    dy = arg2->unk_04 - arg3->unk_04;
    dz = arg2->unk_08 - arg3->unk_08;
    dist = func_001E60E0(dx * dx + dy * dy + dz * dz);
    if (dist <= arg4) {
        ((s32 *)arg0)[0] = ((s32 *)arg2)[0];
        ((s32 *)arg0)[1] = ((s32 *)arg2)[1];
        ((s32 *)arg0)[2] = ((s32 *)arg2)[2];
        *arg1 = arg4;
        return;
    }
    t = (1.0f - arg4 / dist) / 2.0f;
    arg0->unk_00 = arg2->unk_00 + t * (arg3->unk_00 - arg2->unk_00);
    arg0->unk_04 = arg2->unk_04 + t * (arg3->unk_04 - arg2->unk_04);
    arg0->unk_08 = arg2->unk_08 + t * (arg3->unk_08 - arg2->unk_08);
    *arg1 = (dist + arg4) / 2.0f;
}
