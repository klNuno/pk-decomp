#include "common.h"

void func_002D15D0();

void func_002D0E40(s32 *arg0) {
    if (arg0[1] != 0) {
        func_002D15D0(arg0, arg0[1]);
        arg0[0] = 0;
        arg0[1] = 0;
        *(s32 **)((u8 *)arg0 + 0x8) = arg0 + 1;
    }
}
