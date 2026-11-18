/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject();
s32 func_001A70C0();
void func_001D4610();

void func_001C02A0(s32 arg0) {
    s32 temp;

    temp = *HIE_fn_hGetSuperObjectObject(arg0);
    if (func_001A70C0(temp)) {
        func_001D4610(temp, 0);
    }
}
