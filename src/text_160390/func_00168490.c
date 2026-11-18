#include "common.h"

extern s32 *D_0035FB24;
extern s32 *D_0035FB28;

void func_00168490(u8 arg0) {
    s32 i;

    for (i = 0; i < 400; i++) {
        if (arg0 == D_0035FB24[i]) {
            D_0035FB24[i] = 0xC0DE0005;
            D_0035FB28[i] = 0;
        }
    }
}
