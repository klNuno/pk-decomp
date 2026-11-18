#include "common.h"

typedef struct unk_func_0015C8C0_0 {
    u8 unk_00;
    u8 pad_01[0x103];
} unk_func_0015C8C0_0;

extern unk_func_0015C8C0_0 D_00367B1C[];

void func_0015C8C0(u8 arg0, u8 arg1) {
    D_00367B1C[arg0].unk_00 = arg1;
}
