#include "common.h"

s32 func_00157780(s32, s32);
s32 func_001577B0(s32, s32);
void func_00167450(s32, s32, s32);
extern s32 D_0035FAF0;
extern s32 D_0035FB00;
extern s32 D_0035FB84;

void func_001686C0(s32 arg0, s32 **arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a1;
    if (arg4 != 0) {
        D_0035FB00 = func_001577B0(arg4, 0);
        D_0035FB84 = func_001577B0(arg4, 0);
        D_0035FAF0 = func_00157780(arg4, 0);
    } else {
        D_0035FB00 = 0;
        D_0035FB84 = 0;
        D_0035FAF0 = 0;
    }
    temp_a1 = *arg1[3];
    if (temp_a1 != 0) {
        func_00167450(arg0, temp_a1, arg3);
    }
    D_0035FB00 = 0;
    D_0035FB84 = 0;
    D_0035FAF0 = 0;
}
