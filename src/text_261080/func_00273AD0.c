#include "common.h"

typedef struct {
    u8 pad_00[0x1A];
    u8 unk_1A;
    u8 pad_1B[0xD];
} unk_func_00273AD0_0;

extern unk_func_00273AD0_0 D_007A5F10[];

void func_00273AD0(s32 arg0, s32 arg1) {
    unk_func_00273AD0_0 *p;

    if (arg0 < 200) {
        p = &D_007A5F10[arg0];
        if (arg1 != 0) {
            p->unk_1A |= 8;
        } else {
            p->unk_1A &= ~8;
        }
    }
}
