/* profile: o0 */
#include "common.h"

s32 **HIE_fn_hGetSuperObjectObject();

void func_002090A0(s32 arg0, f32 arg1) {
    *(f32 *)((u8 *)*HIE_fn_hGetSuperObjectObject(arg0) + 0xF0) = arg1;
}
