#include "common.h"

void func_002D2BB0();
extern u8 D_0035E820[];

void **func_002F4D10(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035E820;
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
