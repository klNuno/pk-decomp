#include "common.h"

s32 func_002D2BC0();
s32 func_0030C170();
void func_002D2BB0();

s32 func_0030BE80(s32 arg0) {
    s32 temp;

    temp = func_002D2BC0(8);
    if (temp == 0) {
        return -1;
    }
    if (func_0030C170(temp, arg0) != 0) {
        return temp;
    }
    func_002D2BB0(temp);
    return -1;
}
