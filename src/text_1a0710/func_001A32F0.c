/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);

void func_001A32F0(s32 arg0, s8 arg1) {
    (*(s8 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 0x66)) = arg1;
}
