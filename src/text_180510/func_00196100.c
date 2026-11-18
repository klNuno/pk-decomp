#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
} unk_func_00196100_2;

typedef struct {
    u8 pad_00[0xC];
    unk_func_00196100_2 *unk_0C;
} unk_func_00196100_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_00196100_1 **unk_10;
} unk_func_00196100_0;

void func_00196100(unk_func_00196100_0 *arg0, s16 arg1, s16 arg2, s16 *arg3, s16 *arg4, s16 *arg5) {
    unk_func_00196100_1 *temp = arg0->unk_10[arg1];
    *arg3 = temp->unk_0C[arg2].unk_00;
    *arg4 = temp->unk_0C[arg2].unk_02;
    *arg5 = temp->unk_0C[arg2].unk_04;
}
