#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001DD290_1;

typedef struct {
    u8 pad_00[0x8];
    unk_func_001DD290_1 *unk_08;
} unk_func_001DD290_0;

void func_001DD290(unk_func_001DD290_0 *arg0, unk_func_001DD290_1 *arg1, s16 arg2) {
    *arg1 = arg0->unk_08[arg2];
}
