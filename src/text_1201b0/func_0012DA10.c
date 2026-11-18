#include "common.h"

extern s32 D_0035F8A8;

void func_0012DA10(s32 arg0) {
    if (arg0 != -1) {
        D_0035F8A8 = arg0;
        return;
    }
    D_0035F8A8 = arg0 + 1;
}
