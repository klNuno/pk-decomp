#include "common.h"

void func_001DDD90(void *arg0, void *arg1, void *arg2, f32 fparg0) {
    (*(f32 *)((u8 *)arg0 + 0)) = (f32) ((*(f32 *)((u8 *)arg2 + 0)) - fparg0);
    (*(f32 *)((u8 *)arg0 + 4)) = (f32) ((*(f32 *)((u8 *)arg2 + 4)) - fparg0);
    (*(f32 *)((u8 *)arg0 + 8)) = (f32) ((*(f32 *)((u8 *)arg2 + 8)) - fparg0);
    (*(f32 *)((u8 *)arg1 + 0)) = (f32) ((*(f32 *)((u8 *)arg2 + 0)) + fparg0);
    (*(f32 *)((u8 *)arg1 + 4)) = (f32) ((*(f32 *)((u8 *)arg2 + 4)) + fparg0);
    (*(f32 *)((u8 *)arg1 + 8)) = (f32) ((*(f32 *)((u8 *)arg2 + 8)) + fparg0);
}
