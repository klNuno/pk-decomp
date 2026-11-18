/* profile: o0 */
#include "common.h"

u8 **HIE_fn_hGetSuperObjectObject(s32);

void func_002091A0(s32 arg0, f32 arg1) {
    *(f32 *)(*HIE_fn_hGetSuperObjectObject(arg0) + 0xF4) = arg1;
}
