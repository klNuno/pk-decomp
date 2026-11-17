#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 pad_04[0x100];
} unk_func_0015C690_0;

extern unk_func_0015C690_0 D_00367AF0[];

void func_0015C690(u8 arg0, u8 arg1, u8 arg2) {
    D_00367AF0[arg0].unk_02 = arg1;
    D_00367AF0[arg0].unk_03 = arg2;
}
