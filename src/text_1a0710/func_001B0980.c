/* profile: o0 */
#include "common.h"

s32 func_001B0980(void *arg0, void *arg1) {
    s32 temp;

    temp = *(u16 *)((u8 *)arg0 + 4) - *(u16 *)((u8 *)arg1 + 4);
    return temp;
}
