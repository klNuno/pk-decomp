#include "common.h"

void func_00302260();
void func_002D2BB0();
extern u8 D_0035EB10[];

void *func_002FF290(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035EB10;
        func_00302260(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
