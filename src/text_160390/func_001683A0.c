#include "common.h"

extern s32 *D_0035FB24;
extern s32 *D_0035FB28;

void func_001683A0(void) {
    s32 i;

    for (i = 0; i < 0x190; i++) {
        D_0035FB24[i] = 0xC0DE0005;
        D_0035FB28[i] = 0;
    }
}
