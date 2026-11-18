#include "common.h"

s32 func_002E50F0(s32);
s32 func_002E5100(s32);

void func_002DF6D0(void *arg0, s32 arg1) {
    (*(s32 *)((u8 *)arg0 + 0x34)) = arg1;
    (*(s32 *)((u8 *)arg0 + 0x50)) = func_002E5100(arg1);
    (*(s32 *)((u8 *)arg0 + 0x4C)) = func_002E50F0(arg1);
}
