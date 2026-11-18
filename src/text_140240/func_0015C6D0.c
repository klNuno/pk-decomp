#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x102];
} unk_func_0015C6D0_0;

extern unk_func_0015C6D0_0 D_00367AF0[];

void func_0015C6D0(u8 arg0, u8 arg1, u8 arg2) {
    D_00367AF0[arg0].unk_00 = arg1;
    D_00367AF0[arg0].unk_01 = arg2;
}
