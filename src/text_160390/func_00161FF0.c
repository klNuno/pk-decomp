#include "common.h"

void func_00162130();

s32 func_00161FF0(s32 arg0) {
    s32 var_v0;

    var_v0 = arg0 != 0xCDCDCDCD;
    if (var_v0 != 0) {
        var_v0 = arg0 != 0;
    }
    if (var_v0 == 0) {
        func_00162130();
    }
    return *(s32 *)((u8 *)arg0 + 4);
}
