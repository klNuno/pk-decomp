#include "common.h"

extern void *D_0035FB04;

void func_00167A70(f32 fparg0) {
    (*(f32 *)((u8 *)D_0035FB04 + 0x1E0)) = (f32) (0.003921569f * fparg0);
    if (!((*(f32 *)((u8 *)D_0035FB04 + 0x1E0)) <= 1.0f)) {
        (*(f32 *)((u8 *)D_0035FB04 + 0x1E0)) = 1.0f;
    }
    if ((*(f32 *)((u8 *)D_0035FB04 + 0x1E0)) < 0.0f) {
        (*(f32 *)((u8 *)D_0035FB04 + 0x1E0)) = 0.0f;
    }
}
