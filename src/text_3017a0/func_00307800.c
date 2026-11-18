#include "common.h"

void func_002D2BB0();
extern u8 D_0035EF80[];
extern u8 D_0035E9D0[];

void **func_00307800(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035EF80;
        if (arg0 != NULL) {
            *arg0 = D_0035E9D0;
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
