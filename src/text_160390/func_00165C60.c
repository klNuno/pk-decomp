#include "common.h"

extern s32 D_0035FABC;

void func_00165C60(s32 arg0, s32 arg1) {
    D_0035FABC -= arg1;
    if (D_0035FABC < 0) {
        D_0035FABC = 0;
    }
}
