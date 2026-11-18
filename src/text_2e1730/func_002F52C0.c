#include "common.h"

void *func_002F52C0(void *arg0, void *arg1) {
    (*(s32 *)((u8 *)arg0 + 0)) = (s32) (*(s32 *)((u8 *)arg1 + 0));
    (*(s32 *)((u8 *)arg0 + 4)) = (s32) (*(s32 *)((u8 *)arg1 + 4));
    return arg0;
}
