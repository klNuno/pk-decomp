#include "common.h"

extern s16 D_0035F840;
extern s32 D_003637D0[];

s32 func_0012E2F0(s16 arg0) {
    if (arg0 < D_0035F840) {
        return D_003637D0[arg0];
    }
    return 0;
}
