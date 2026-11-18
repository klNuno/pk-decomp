#include "common.h"

void HMU_fn_vFree(s32 *, s32);
s32 func_00162090(s32);
void func_00162130(void);

void func_00162180(s32 arg0) {
    if (func_00162090(arg0) == 0) {
        func_00162130();
    }
    HMU_fn_vFree(&arg0, 0);
}
