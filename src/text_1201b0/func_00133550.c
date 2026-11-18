#include "common.h"

extern s32 D_00364F50[];
extern s32 D_00364F54[];

void func_00133550(s32 arg0, s32 arg1) {
    if (arg1 < 0) {
        arg1 = 0;
    } else {
        arg1 = arg1 % D_00364F50[0];
    }
    D_00364F54[arg0] = arg1;
}
