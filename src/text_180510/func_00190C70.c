#include "common.h"

void func_00190CC0();

void func_00190C70(u8 *arg0, s32 arg1) {
    if (*(s32 *)(arg0 + 0x4C) != arg1) {
        func_00190CC0(arg0);
        *(s32 *)(arg0 + 0x4C) = arg1;
    }
}
