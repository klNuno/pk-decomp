#include "common.h"

void func_003057D0();
void func_00305800();

s32 func_00306470(void *arg0) {
    s32 temp_s0;

    func_00305800();
    temp_s0 = *(s32 *)((u8 *)(*(void **)((u8 *)arg0 + 0x1C)) + 8);
    func_003057D0();
    return temp_s0 != 0;
}
