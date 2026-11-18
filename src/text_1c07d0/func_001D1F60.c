/* profile: o0 */
#include "common.h"

u8 *HIE_fn_hGetSuperObjectObject();
void func_001D1CE0();
void func_001D1E70();

void func_001D1F60(s32 arg0, s32 arg1) {
    s32 temp;

    temp = *(s32 *)(HIE_fn_hGetSuperObjectObject(arg0) + 8);
    if (temp != 0) {
        func_001D1CE0(arg0, arg1);
    } else {
        func_001D1E70(arg0, arg1);
    }
}
