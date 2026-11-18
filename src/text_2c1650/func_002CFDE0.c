#include "common.h"

extern s32 D_00360524;
extern s8 D_00360528;

s32 func_002CFDE0(void) {
    if (D_00360528 == 0) {
        D_00360524 = -2;
        D_00360528 = 1;
    }
    return D_00360524;
}
