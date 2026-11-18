#include "common.h"

void func_00302A80();
void func_002D2BB0();
extern s32 D_0035EBD0[];

s32 **func_002FFBE0(s32 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035EBD0;
        func_00302A80(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
