#include "common.h"

void func_002D1F50();

void func_002F5FD0(s32 *arg0) {
    if (arg0[1] != 0) {
        func_002D1F50(arg0, arg0[1]);
        arg0[0] = 0;
        arg0[1] = 0;
        *(s32 **)((u8 *)arg0 + 0xC) = arg0 + 1;
    }
}
