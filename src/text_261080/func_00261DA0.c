#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00261DA0_0;

typedef struct {
    f32 unk_00[3];
} unk_func_00261DA0_1;

s32 rand(void);
void func_00266E40(s32, unk_func_00261DA0_0 *, unk_func_00261DA0_1 *, s32, f32, f32, f32);

void func_00261DA0(unk_func_00261DA0_0 *arg0, unk_func_00261DA0_1 *arg1, s32 arg2, f32 arg3) {
    unk_func_00261DA0_0 sp60;
    unk_func_00261DA0_1 sp70;
    f32 t;
    f32 s;
    s32 i;
    unk_func_00261DA0_1 *p;

    p = &sp70;
    for (i = 0; i < 3; i++) {
        p->unk_00[i] = arg1->unk_00[i];
    }
    for (i = 0; i < 3; i++) {
        t = 0.05f + 0.9f * (f32)rand() / 2147483648.0f;
        sp60.unk_00 = arg0->unk_00 + t * (arg1->unk_00[0] - arg0->unk_00);
        sp60.unk_04 = arg0->unk_04 + t * (arg1->unk_00[1] - arg0->unk_04);
        sp60.unk_08 = arg0->unk_08 + t * (arg1->unk_00[2] - arg0->unk_08);
        s = 0.2f + 0.8f * (f32)rand() / 2147483648.0f;
        func_00266E40(0x5400, &sp60, &sp70, arg2, arg3, s, s);
    }
}
