#include "common.h"

void func_002DF6A0(void *arg0, void *arg1) {
    (*(s32 *)((u8 *)arg0 + 0x20)) = (s32) (*(s32 *)((u8 *)arg1 + 0x20));
    (*(s32 *)((u8 *)arg0 + 0x1C)) = (s32) (*(s32 *)((u8 *)arg1 + 0x1C));
    (*(s32 *)((u8 *)arg0 + 8)) = (s32) (*(s32 *)((u8 *)arg1 + 8));
    (*(s32 *)((u8 *)arg0 + 0x28)) = (s32) (*(s32 *)((u8 *)arg1 + 0x28));
}
