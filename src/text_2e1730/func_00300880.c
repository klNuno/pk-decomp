#include "common.h"

void func_00302260();
void func_002D2BB0();
extern u8 D_0035EC30[];

void *func_00300880(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035EC30;
        func_00302260(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
