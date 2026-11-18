#include "common.h"

extern s32 *D_0036A450[];

s32 func_00169620(s32 arg0, s16 arg1) {
    s16 temp = arg1 / 16;
    *(s32 *)((u8 *)D_0036A450[temp] + 0xA0) = 0;
    return 1;
}
