#include "common.h"

typedef struct unk_func_00166AC0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00166AC0_0;

typedef struct unk_func_00166AC0_1 {
    u8 pad_00[0x24];
    unk_func_00166AC0_0 unk_24;
    u8 pad_34[0x14];
    s32 unk_48;
} unk_func_00166AC0_1;

void func_00166AC0(unk_func_00166AC0_1 *arg0, s32 *arg1, unk_func_00166AC0_0 *arg2) {
    *arg2 = arg0->unk_24;
    *arg1 = arg0->unk_48;
}
