#include "common.h"

void func_00308C80();
void func_00304B00();

s32 *func_002E8730(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            func_00308C80(*arg0);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
