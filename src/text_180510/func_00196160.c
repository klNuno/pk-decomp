#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
} unk_func_00196160_0;

typedef struct {
    u8 pad_00[0xC];
    unk_func_00196160_0 *unk_0C;
} unk_func_00196160_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_00196160_1 **unk_10;
} unk_func_00196160_2;

void func_00196160(unk_func_00196160_2 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    unk_func_00196160_1 *temp;

    temp = arg0->unk_10[arg1];
    temp->unk_0C[arg2].unk_00 = arg3;
    temp->unk_0C[arg2].unk_02 = arg4;
    temp->unk_0C[arg2].unk_04 = arg5;
}
