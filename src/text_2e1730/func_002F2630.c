#include "common.h"

void func_002F32B0(s32 *, s32, s32);
s32 func_002F26A0(s32);
void func_002F2690(s32 *, s32);

s32 func_002F2630(s32 arg0, s32 arg1) {
    s32 sp28;
    s32 sp2C;
    s32 temp;

    func_002F32B0(&sp28, arg0, arg1);
    temp = sp28;
    func_002F2690(&sp2C, func_002F26A0(arg0));
    if (temp == sp2C) {
        return 0;
    }
    return temp + 0x10;
}
