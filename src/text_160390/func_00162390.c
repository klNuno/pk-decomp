#include "common.h"

extern s32 *D_0035F4B0;
extern void *D_0035FB04;

s32 func_00162390(void) {
    (*(s32 *)((u8 *)D_0035FB04 + 0x14)) = (s32) *D_0035F4B0;
    return 1;
}
