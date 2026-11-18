#include "common.h"

typedef struct {
    s8 *unk_00;
    u8 pad_04[0x24];
} unk_func_002738B0_0;

extern unk_func_002738B0_0 D_007A5F10[];

void func_002738B0(s32 arg0, s32 arg1, s8 arg2) {
    if (arg0 < 0xC8 && D_007A5F10[arg0].unk_00 != NULL) {
        D_007A5F10[arg0].unk_00[arg1] = arg2;
    }
}
