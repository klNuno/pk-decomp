#include "common.h"

void *HMU_fn_p_vMalloc();
void func_0011B418();
void func_00161920();
void func_00161B00();
void func_00161B40();
s32 func_0019BEB0();
s32 func_0019BEF0();
extern char D_003497F0[];

void *func_0018AC00(s32 arg0) {
    void *p;

    func_00161920();
    p = HMU_fn_p_vMalloc(arg0, 0);
    if (func_0019BEB0() != 0) {
        func_00161B40();
    } else if (func_0019BEF0() != 0) {
        func_00161B00();
    } else {
        func_0011B418(D_003497F0);
    }
    return p;
}
