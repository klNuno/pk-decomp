#include "common.h"

void func_00162130();
s32 func_001622C0(s32, s32);

s32 func_00161F70(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    var_v0 = arg0 != 0xCDCDCDCD;
    if (var_v0 != 0) {
        var_v0 = arg0 != 0;
    }
    if (var_v0 == 0) {
        func_00162130();
    }
    temp_a0 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_a0 == -1) {
        return 0;
    }
    return func_001622C0(temp_a0, arg1);
}
