#include "common.h"

extern u8 D_0035EC50[];

void func_00302260(void *, s32);
void func_002D2BB0(void *);

void **func_003009C0(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035EC50;
        func_00302260(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
