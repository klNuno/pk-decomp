#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    u32 unk_30;
    u8 pad_34[0x18];
    s32 unk_4C;
} unk_func_0012E1A0_0;

void func_0012E1A0(unk_func_0012E1A0_0 *arg0, s32 arg1, s32 arg2) {
    if (arg1) {
        arg0->unk_30 |= 0x80000;
    } else {
        arg0->unk_30 &= ~0x80000;
    }
    arg0->unk_4C = arg2;
}
