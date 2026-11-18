#include "common.h"

extern u8 D_007A5F10[];

void func_00273BC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 < 0xC8) {
        *(s32 *)(D_007A5F10 + arg0 * 0x28 + 0x14) = arg3 | ((arg1 << 16) | (arg2 << 8));
    }
}
