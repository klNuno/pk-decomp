#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001DD2D0_0;

typedef struct {
    u8 pad_00[0x8];
    unk_func_001DD2D0_0 *unk_08;
} unk_func_001DD2D0_1;

void func_001DD2D0(unk_func_001DD2D0_1 *arg0, unk_func_001DD2D0_0 *arg1, s16 arg2) {
    arg0->unk_08[arg2] = *arg1;
}
