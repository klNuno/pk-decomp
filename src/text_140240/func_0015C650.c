#include "common.h"

extern u8 D_00367AF4[];
extern u8 D_00367AF5[];

void func_0015C650(u8 arg0, u8 arg1, u8 arg2) {
    D_00367AF4[arg0 * 0x104] = arg1;
    D_00367AF5[arg0 * 0x104] = arg2;
}
