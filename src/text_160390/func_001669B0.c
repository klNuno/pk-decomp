#include "common.h"

typedef struct {
    u8 pad_00[0x58];
    f32 unk_58;
    f32 unk_5C;
    s32 unk_60;
} unk_func_001669B0_0;

void func_001669B0(unk_func_001669B0_0 *arg0, s32 arg1, s32 *arg2, f32 *arg3, f32 *arg4) {
    *arg3 = arg0->unk_58;
    *arg4 = arg0->unk_5C;
    *arg2 = arg0->unk_60;
}
