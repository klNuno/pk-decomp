#include "common.h"

extern s32 D_0035FCC4;
void func_00154B00();

void func_00179750(s32 arg0, u8 *arg1) {
    s32 temp = **(s32 **)(arg1 + 0x68);
    D_0035FCC4 = temp;
    func_00154B00(arg0, temp + 0x10);
}
