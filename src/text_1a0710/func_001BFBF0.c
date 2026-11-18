/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00197CC0(s32);

s32 func_001BFBF0(s32 arg0) {
    return ((func_00197CC0((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 4))) & 0xFF) == 1) & 0xFF;
}
