#include "common.h"

typedef struct unk_func_001669E0_0 {
    u8 pad_00[0x50];
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    s32 unk_60;
} unk_func_001669E0_0;

void func_001669E0(unk_func_001669E0_0 *arg0, f32 arg1, f32 arg2, s32 arg3, s32 arg4) {
    arg0->unk_58 = arg1;
    arg0->unk_50 = arg1;
    arg0->unk_5C = arg2;
    arg0->unk_54 = arg2;
    arg0->unk_60 = arg4;
    if (arg1 == 0.0f && arg2 == 0.0f) {
        arg0->unk_60 = 0;
    }
}
