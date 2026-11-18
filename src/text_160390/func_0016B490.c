#include "common.h"

void func_0018EB60();
extern u32 D_0035FB98;
extern s32 D_0036EC90[];

void func_0016B490(s32 arg0) {
    if (D_0035FB98 < 100) {
        D_0036EC90[D_0035FB98] = arg0;
        D_0035FB98++;
        func_0018EB60();
    }
}
