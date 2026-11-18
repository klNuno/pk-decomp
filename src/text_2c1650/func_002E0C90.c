#include "common.h"

void func_002DE820();
void func_002D2BB0();
extern u8 D_0035E5B0[];

void **func_002E0C90(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035E5B0;
        func_002DE820(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
