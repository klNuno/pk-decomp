#include "common.h"

void func_002D2BB0();
void func_002DEA50();
void func_00304B00();

s32 *func_002E0AF0(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (arg0[0] != 0) {
            func_002D2BB0(arg0[0]);
            arg0[0] = 0;
        }
        func_002DEA50(arg0 + 2, -1);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
