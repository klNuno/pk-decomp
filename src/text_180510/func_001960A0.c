#include "common.h"

typedef struct unk_func_001960A0_0 {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
} unk_func_001960A0_0;

typedef struct unk_func_001960A0_1 {
    u8 pad_00[0x10];
    unk_func_001960A0_0 *unk_10;
} unk_func_001960A0_1;

typedef struct unk_func_001960A0_2 {
    u8 pad_00[0x10];
    unk_func_001960A0_1 **unk_10;
} unk_func_001960A0_2;

void func_001960A0(unk_func_001960A0_2 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    unk_func_001960A0_1 *temp;

    temp = arg0->unk_10[arg1];
    temp->unk_10[arg2].unk_00 = arg3;
    temp->unk_10[arg2].unk_02 = arg4;
    temp->unk_10[arg2].unk_04 = arg5;
}
