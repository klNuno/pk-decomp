#include "common.h"

void func_002F0000(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    (*(f32 *)((u8 *)arg0 + 0xC)) = fparg0;
    (*(f32 *)((u8 *)arg0 + 0x10)) = fparg1;
    (*(f32 *)((u8 *)arg0 + 0x14)) = fparg2;
    (*(s8 *)((u8 *)arg0 + 0x7C)) = 1;
}
