/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);

s32 func_001B0BE0(s32 arg0) {
    return *(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 0x20);
}
