/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001A70C0(s32);
s32 func_00197860(s32);
s32 func_001ABB40(s32);
void func_001D4610(s32, u8);
u16 func_001C03C0(s32);
void func_001C6F40(s32, s16);

void func_001C0310(s32 arg0) {
    s32 obj = *HIE_fn_hGetSuperObjectObject(arg0);

    if (!func_001A70C0(obj)) {
        func_001D4610(obj, func_001ABB40(func_00197860(obj)));
        func_001C6F40(arg0, func_001C03C0(obj) + 1);
    }
}
