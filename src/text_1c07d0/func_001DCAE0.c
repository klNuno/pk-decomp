#include "common.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} unk_func_001DCAE0_0;

typedef struct {
    f32 unk_00;
    u8 pad_04[4];
    s16 unk_08;
    u8 pad_0A[2];
} unk_func_001DCAE0_1;

typedef struct {
    unk_func_001DCAE0_1 *unk_00;
    s16 unk_04;
} unk_func_001DCAE0_2;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[4];
    unk_func_001DCAE0_0 *unk_08;
    s16 *unk_0C;
    unk_func_001DCAE0_2 **unk_10;
} unk_func_001DCAE0_3;

void func_001DCC60(s32, f32 *, s32, unk_func_001DCAE0_0 *, f32, f32);
void func_001DCDD0(s32, f32 *, s32, unk_func_001DCAE0_0 *, f32);

void func_001DCAE0(unk_func_001DCAE0_3 *arg0, s32 arg1, f32 *arg2) {
    unk_func_001DCAE0_0 *p;
    s32 i;
    s32 j;
    s32 k;
    unk_func_001DCAE0_2 *g;
    unk_func_001DCAE0_0 *q;
    unk_func_001DCAE0_0 v;

    p = arg0->unk_08;
    for (i = 0; i < arg0->unk_00; i++, p++) {
        func_001DCDD0(arg1, arg2, arg1, p, *arg2);
    }
    for (j = 0; j < arg0->unk_02; j++) {
        if (arg0->unk_0C[j] == 7) {
            i = 0;
            g = arg0->unk_10[j];
            for (; i < g->unk_04; i++) {
                q = &arg0->unk_08[g->unk_00[i].unk_08];
                v = *q;
                func_001DCC60(arg1, arg2, arg1, &v, *arg2, g->unk_00[i].unk_00);
            }
        }
    }
}
