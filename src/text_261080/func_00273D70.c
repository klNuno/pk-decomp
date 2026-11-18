#include "common.h"

typedef struct unk_func_00273D70_0 {
    u8 pad_00[0x23];
    u8 unk_23;
    u8 pad_24[4];
} unk_func_00273D70_0;

extern unk_func_00273D70_0 D_007A5F10[];

void func_00273D70(s32 arg0) {
    unk_func_00273D70_0 *p;
    if (arg0 < 0 || arg0 >= 200) return;
    p = &D_007A5F10[arg0];
    p->unk_23 = 1;
}
