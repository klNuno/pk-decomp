#include "common.h"

typedef struct unk_func_00313700_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00313700_1;

typedef struct unk_func_00313700_2 {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_00313700_2;

typedef struct unk_func_00313700_0 {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[4];
    unk_func_00313700_1 *unk_10;
    u8 pad_14[4];
    unk_func_00313700_2 *unk_18;
} unk_func_00313700_0;

void func_00313700(unk_func_00313700_0 *arg0, unk_func_00313700_1 *arg1) {
    unk_func_00313700_2 *p = arg0->unk_18;
    u32 i;

    for (i = 0; i < arg0->unk_08 - 1; i++, p++) {
        arg0->unk_10[i].unk_00 = p->unk_00 * arg1->unk_00;
        arg0->unk_10[i].unk_04 = p->unk_00 * arg1->unk_04;
        arg0->unk_10[i].unk_08 = p->unk_00 * arg1->unk_08;
    }
}
