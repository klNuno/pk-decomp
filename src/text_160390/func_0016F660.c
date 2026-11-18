#include "common.h"

void func_00119548(s32);
extern s32 D_0035FC00;
extern s32 D_0036EEE0[];

void func_0016F660(void) {
    if (D_0035FC00 == 0) {
        func_00119548(D_0036EEE0[0]);
        func_00119548(D_0036EEE0[1]);
        func_00119548(D_0036EEE0[2]);
        func_00119548(D_0036EEE0[3]);
        func_00119548(D_0035FC00);
        D_0035FC00 = 0;
    }
}
