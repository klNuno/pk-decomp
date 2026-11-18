#include "common.h"

void func_003224C0();
void func_00322508();
void func_0031A330(s32);

s32 func_00279C90(u8 *arg0) {
    func_003224C0();
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000;
    *(volatile u32 *)0x1000B400 = 5;
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & ~0x10000;
    func_00322508();
    *(volatile u32 *)0x1000B420 = 0;
    *(volatile u32 *)0x1000B410 = 0;
    *(volatile u32 *)0x1000B430 = 0;
    func_0031A330(*(s32 *)(arg0 + 0x40));
    return 1;
}
