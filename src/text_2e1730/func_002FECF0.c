#include "common.h"

void *func_002FECF0(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    (*(f32 *)((u8 *)arg0 + 0)) = fparg1;
    (*(f32 *)((u8 *)arg0 + 4)) = fparg0;
    (*(f32 *)((u8 *)arg0 + 8)) = fparg2;
    return arg0;
}
