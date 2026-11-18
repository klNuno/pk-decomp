#include "common.h"

extern u8 D_0035F1E0[];

void func_00318C80(void *, s32);
void func_00304B00(void *);

void **func_00316730(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0[1] = D_0035F1E0;
        func_00318C80(arg0, 0);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
