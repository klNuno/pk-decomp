#include "common.h"

void func_002E7480();
void func_00304B00();

u8 *func_002E7170(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 sp34;
        s32 sp38;
        u8 *sp3C;

        sp3C = arg0 + 4;
        sp38 = *(s32 *)(arg0 + 8);
        func_002E7480(&sp34, arg0, &sp38, &sp3C);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
