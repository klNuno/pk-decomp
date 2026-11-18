#include "common.h"

extern s8 D_0036076C;
extern s32 D_00360770;

s32 *func_00302CA0(void) {
    if (!D_0036076C) {
        D_0036076C = 1;
    }
    return &D_00360770;
}
