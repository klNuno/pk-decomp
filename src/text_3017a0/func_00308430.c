#include "common.h"

void func_00308B80(s32);
void func_00308BE0(s32);
void func_0031A340(s32);
extern s32 D_003607D8;
extern s32 D_003607DC;

void func_00308430(void *arg0) {
    if (arg0 != NULL) {
        func_00308BE0(D_003607D8);
        (*(s8 *)((u8 *)arg0 + 0x14)) = 1;
        func_0031A340(D_003607DC);
        func_00308B80(D_003607D8);
    }
}
