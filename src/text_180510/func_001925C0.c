#include "common.h"

extern s32 D_0035FC3C;
extern s32 D_0035FC40;

s32 func_001925C0(void) {
    s32 temp_v0;

    temp_v0 = D_0035FC3C - D_0035FC40;
    if (temp_v0 > 0) {
        return temp_v0;
    }
    return 0;
}
