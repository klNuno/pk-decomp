#include "common.h"

void func_00304B00();
extern s32 D_0035ED70[];
extern s32 D_0035E530[];

s32 **func_00304BE0(s32 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_0035ED70;
        if (arg0 != NULL) {
            *arg0 = D_0035E530;
        }
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
