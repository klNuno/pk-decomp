#include "common.h"

void func_00162130();
s32 func_001622A0(s32, s32);

s32 func_00161ED0(s32 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 ok;

    if ((u16)arg1 == 0) {
        return 1;
    }
    ok = arg0 != (s32 *)0xCDCDCDCD && arg0 != NULL;
    if (!ok) {
        func_00162130();
    }
    temp_a0 = arg0[1];
    if (temp_a0 == 0 || temp_a0 == -1) {
        return 0;
    }
    return func_001622A0(temp_a0, arg1);
}
