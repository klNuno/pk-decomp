#include "common.h"

void func_00118800();
s64 func_00118CF0(s32);

s64 func_002D28E0(s32 arg0) {
    func_00118800();
    return (s64) (func_00118CF0(arg0) << 0x20) >> 0x20;
}
