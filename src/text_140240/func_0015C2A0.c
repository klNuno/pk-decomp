#include "common.h"

extern s32 D_00367B20[][65];
extern s32 D_00367B60[][65];

void func_0015C2A0(u8 arg0, u8 arg1, s32 arg2, s32 arg3) {
    D_00367B20[arg0][arg1] = arg2;
    D_00367B60[arg0][arg1] = arg3;
}
