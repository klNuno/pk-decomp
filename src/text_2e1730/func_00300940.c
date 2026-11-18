#include "common.h"

void func_003021D0();

void func_00300940(void *arg0, s32 arg1) {
    (*(s32 *)((u8 *)arg0 + 0x18)) = arg1;
    func_003021D0();
}
