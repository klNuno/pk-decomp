#include "common.h"

extern s32 D_0035FABC;
extern s32 D_0036A050[];

void func_00165C90(s32 arg0, s32 arg1) {
    if (D_0035FABC != 0x32) {
        D_0036A050[D_0035FABC] = arg1;
        D_0035FABC++;
    }
}
