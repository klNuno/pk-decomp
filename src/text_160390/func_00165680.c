#include "common.h"

f32 func_00115200(f32);

void func_00165680(void *arg0, f32 fparg0, f32 fparg1) {
    (*(f32 *)((u8 *)arg0 + 0x14)) = fparg0;
    (*(f32 *)((u8 *)arg0 + 0x18)) = fparg1;
    (*(f32 *)((u8 *)arg0 + 0x1C)) = func_00115200(0.5f * fparg0);
    (*(f32 *)((u8 *)arg0 + 0x20)) = func_00115200(0.5f * fparg1);
}
