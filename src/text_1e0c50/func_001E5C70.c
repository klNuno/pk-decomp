#include "common.h"

void func_001E5CA0();
extern s16 D_00360110;
extern s16 D_00360114;

void func_001E5C70(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 *arg5) {
    *arg5 = 0;
    D_00360110 = 0;
    D_00360114 = 0;
    if (arg0 != NULL) {
        func_001E5CA0(*arg0);
    }
}
