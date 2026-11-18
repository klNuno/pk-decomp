#include "common.h"

void func_00119548();
void func_00304B00();

s32 *func_00312AD0(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0[2] != 0) {
            func_00119548(arg0[4]);
            func_00119548(arg0[5]);
            func_00119548(arg0[6]);
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
