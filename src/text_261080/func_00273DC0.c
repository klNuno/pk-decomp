#include "common.h"

typedef struct {
    u8 pad_00[0x22];
    u8 unk_22;
    u8 pad_23[0x5];
} unk_func_00273DC0_0;

extern unk_func_00273DC0_0 D_007A5F10[];

void func_00273DC0(s32 arg0) {
    if (arg0 < 0 || arg0 >= 200) {
        return;
    }
    *((u8 *)&D_007A5F10[arg0] + 0x22) = 1;
}
