#include "common.h"

extern u8 D_0035E540[];
void func_002D2BB0(void *);

void **func_002DE820(void **arg0, s16 arg1) {
    if (arg0 != 0) {
        *arg0 = D_0035E540;
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
