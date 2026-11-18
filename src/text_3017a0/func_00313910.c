#include "common.h"

void func_00313DE0();
extern s32 D_003608AC;

void func_00313910(void) {
    if (D_003608AC != 0) {
        func_00313DE0(D_003608AC, 1);
        D_003608AC = 0;
    }
}
