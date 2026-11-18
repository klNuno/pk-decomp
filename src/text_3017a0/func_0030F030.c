#include "common.h"

void func_00308B80(s32);
void func_00308BE0(s32);
extern s32 D_0035F7C0;
extern s32 D_0035F7C4;
extern s32 D_00360894;
extern s8 D_00360898;
extern s32 D_003608A8;

s32 func_0030F030(s32 arg0, s32 arg1) {
    if (D_003608A8 != 0) {
        func_00308BE0(D_003608A8);
    }
    D_0035F7C0 = 0x17;
    D_0035F7C4 = 0x18;
    if (arg1 == 0) {
        D_0035F7C0 -= arg0;
    } else if (arg1 == 1) {
        D_0035F7C4 -= arg0;
    }
    D_00360894 = 0;
    D_00360898 = 1;
    if (D_003608A8 != 0) {
        func_00308B80(D_003608A8);
    }
    return 1;
}
