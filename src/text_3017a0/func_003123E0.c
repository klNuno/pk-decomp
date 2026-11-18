#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_003123E0_0;

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
    u8 pad_10[0x80];
    unk_func_003123E0_0 *unk_90;
    u8 pad_94[0x8];
    unk_func_003123E0_0 *unk_9C;
} unk_func_003123E0_1;

void func_003123E0(unk_func_003123E0_1 *arg0, s32 arg1, f32 arg2) {
    f32 inv;

    arg0->unk_90[arg1].unk_00 = arg2;
    arg0->unk_90[arg1].unk_04 = arg2;
    arg0->unk_90[arg1].unk_08 = arg2;
    if (arg2 > 0.0f) {
        arg0->unk_0C = arg2;
        inv = 1.0f / arg2;
        arg0->unk_9C[arg1].unk_00 = inv;
        arg0->unk_9C[arg1].unk_04 = inv;
        arg0->unk_9C[arg1].unk_08 = inv;
    } else {
        arg0->unk_9C[arg1].unk_00 = 0.0f;
        arg0->unk_9C[arg1].unk_04 = 0.0f;
        arg0->unk_9C[arg1].unk_08 = 0.0f;
    }
}
