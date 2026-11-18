#include "common.h"

extern s8 D_00367AF0[][0x104];
extern s8 D_00367AF1[][0x104];

void func_0015C790(u8 arg0, s8 *arg1, s8 *arg2) {
    *arg1 = D_00367AF0[arg0][0];
    *arg2 = D_00367AF1[arg0][0];
}
