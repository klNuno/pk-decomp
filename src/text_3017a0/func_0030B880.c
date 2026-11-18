#include "common.h"

void func_00307D90(s32, s32);
s32 func_00308CA0();
void func_0030B3F0();
void func_0030BEF0();
void func_0030B200();
void func_0030B210();
void func_0030B390();
void func_0030B3C0();
void func_0030BC40();
void func_0030BE50();
void func_0030BE70();
void func_0030BE80();
extern void (*D_0036081C)();
extern void (*D_00360820)();
extern void (*D_00360824)();
extern void (*D_00360828)();
extern s32 D_0036082C;
extern s32 D_00360834;

void func_0030B880(s32 arg0, s32 arg1) {
    D_00360834 = arg0;
    D_0036082C = func_00308CA0();
    func_00307D90(arg0, arg1);
    if (arg0 == 0) {
        func_0030B3F0();
        D_0036081C = func_0030B3C0;
        D_00360820 = func_0030B390;
        D_00360824 = func_0030B210;
        D_00360828 = func_0030B200;
    } else {
        func_0030BEF0();
        D_0036081C = func_0030BE80;
        D_00360820 = func_0030BE70;
        D_00360824 = func_0030BC40;
        D_00360828 = func_0030BE50;
    }
}
