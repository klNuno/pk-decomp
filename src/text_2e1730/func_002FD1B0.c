#include "common.h"

extern s8 D_00360744;
extern s32 D_00360748;

s32 *func_002FD1B0(void) {
    if (D_00360744 == 0) {
        D_00360748 = 0x656E2020;
        D_00360744 = 1;
    }
    return &D_00360748;
}
