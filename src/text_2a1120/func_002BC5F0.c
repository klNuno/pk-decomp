#include "common.h"

typedef struct unk_func_002BC5F0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002BC5F0_0;

extern unk_func_002BC5F0_0 *D_007B25B0[];

void func_002BC5F0(s32 arg0, s32 arg1, f32 arg2) {
    if (arg0 == 0x2300 && arg1 == 0x2200) {
        D_007B25B0[0]->unk_10 = (s32)arg2;
    }
}
