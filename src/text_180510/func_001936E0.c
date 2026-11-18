#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    f32 unk_04;
    s16 unk_08;
    u8 pad_0A[0x2];
} unk_func_001936E0_2;

typedef struct {
    unk_func_001936E0_2 *unk_00;
} unk_func_001936E0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001936E0_1 **unk_10;
} unk_func_001936E0_0;

void func_001936E0(unk_func_001936E0_0 *arg0, s16 arg1, s16 arg2, s16 arg3) {
    arg0->unk_10[arg1]->unk_00[arg2].unk_08 = arg3;
}
