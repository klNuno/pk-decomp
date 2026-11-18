#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s16 unk_04;
    u8 pad_06[0x2];
    f32 *unk_08;
    s32 *unk_0C;
} unk_func_001687E0_0;

void func_001687E0(unk_func_001687E0_0 *arg0, s32 arg1, f32 *arg2, s32 *arg3) {
    if (arg1 < arg0->unk_04) {
        *arg2 = arg0->unk_08[arg1];
        *arg3 = arg0->unk_0C[arg1];
    }
}
