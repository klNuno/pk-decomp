#include "common.h"

extern s32 D_0035F640;
extern s32 D_007B8EEC[];
extern s32 D_007B8EF4[];

s32 func_002CC5D0(void) {
    return D_0035F640 - (D_007B8EF4[0] - D_007B8EEC[0]) / 16 - 1;
}
