#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00313670_0;

typedef struct {
    u8 pad_00[8];
    f32 unk_08;
    u8 pad_0C[4];
} unk_func_00313670_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[8];
    unk_func_00313670_0 *unk_14;
    unk_func_00313670_1 *unk_18;
} unk_func_00313670_2;

void func_00313670(unk_func_00313670_2 *arg0, unk_func_00313670_0 *arg1) {
    unk_func_00313670_1 *p;
    u32 i;

    p = arg0->unk_18;
    for (i = 0; i < arg0->unk_08 - 1; i++, p++) {
        arg0->unk_14[i].unk_00 = p->unk_08 * arg1->unk_00;
        arg0->unk_14[i].unk_04 = p->unk_08 * arg1->unk_04;
        arg0->unk_14[i].unk_08 = p->unk_08 * arg1->unk_08;
    }
}
