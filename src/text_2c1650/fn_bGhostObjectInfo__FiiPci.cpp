#include "common.h"

extern "C" {
s32 func_0011D8F0(...);
extern char D_0035B1D0[];
}

s32 fn_bGhostObjectInfo(int arg0, int arg1, char *arg2, int arg3) {
    return func_0011D8F0(arg2, D_0035B1D0, arg3) != 0;
}
