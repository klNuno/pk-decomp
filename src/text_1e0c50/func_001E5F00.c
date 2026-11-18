#include "common.h"

void func_001E5F30();
extern s16 D_00360110;
extern s16 D_00360114;

void func_001E5F00(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s16 *arg4) {
    *arg4 = 0;
    D_00360110 = 0;
    D_00360114 = 0;
    if (arg0 != NULL) {
        func_001E5F30(*arg0);
    }
}
