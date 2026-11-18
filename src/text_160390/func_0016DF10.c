#include "common.h"

void func_0016DF10(void *arg0, f32 fparg0, f32 fparg1) {
    (*(f32 *)((u8 *)arg0 + 0x70)) = fparg0;
    (*(f32 *)((u8 *)arg0 + 0xE4)) = fparg1;
    (*(f32 *)((u8 *)arg0 + 0x74)) = (f32) (fparg0 * fparg1);
}
