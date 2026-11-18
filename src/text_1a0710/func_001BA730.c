/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001971C0(s32);
s32 func_001BA6B0(s32, s32, s32, s32);

s32 func_001BA730(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;
    var_s0 = 0;
    if (func_001971C0(arg0) == 2) {
        var_s0 = func_001BA6B0((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 0x1C)), arg1, arg2, arg3) & 0xFF;
    }
    return var_s0;
}
