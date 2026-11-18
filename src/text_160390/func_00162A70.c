#include "common.h"

void func_00162B70();
s32 func_001653C0();
extern void *D_0035FB04;

void func_00162A70(void) {
    if (func_001653C0() != 0) {
        (*(s32 *)((u8 *)D_0035FB04 + 0x1DC)) = 0;
        (*(s32 *)((u8 *)D_0035FB04 + 0x1D4)) = 0;
        func_00162B70();
    }
}
