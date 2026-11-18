#include "common.h"

void func_00166960(void *arg0, s32 arg1) {
    if ((arg1 == 0) || ((*(f32 *)((u8 *)arg0 + 0x58)) != 0.0f) || ((*(f32 *)((u8 *)arg0 + 0x5C)) != 0.0f)) {
        (*(s32 *)((u8 *)arg0 + 0x60)) = arg1;
    }
}
