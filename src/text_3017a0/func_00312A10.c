#include "common.h"

typedef struct unk_func_00312A10_2 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00312A10_2;

typedef struct unk_func_00312A10_1 {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0xC];
    unk_func_00312A10_2 *unk_14;
} unk_func_00312A10_1;

typedef struct unk_func_00312A10_0 {
    u8 pad_00[0x1C];
    unk_func_00312A10_1 *unk_1C;
    u8 pad_20[0x4C];
    unk_func_00312A10_2 *unk_6C;
} unk_func_00312A10_0;

void func_00312A10(unk_func_00312A10_0 *arg0) {
    u32 i;

    for (i = 0; i < arg0->unk_1C->unk_04; i++) {
        arg0->unk_1C->unk_14[i].unk_00 = arg0->unk_6C[i].unk_00;
        arg0->unk_1C->unk_14[i].unk_04 = arg0->unk_6C[i].unk_04;
        arg0->unk_1C->unk_14[i].unk_08 = arg0->unk_6C[i].unk_08;
    }
}
