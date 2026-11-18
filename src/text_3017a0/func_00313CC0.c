#include "common.h"

void func_0014F9B0(s32, s32);
s32 func_001979A0();
s32 func_001979C0();
void func_00313D30(s32);

void func_00313CC0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0x10) {
        func_0014F9B0(func_001979C0(), arg2);
        func_00313D30(arg0);
        return;
    }
    func_0014F9B0(func_001979A0(), arg2);
}
