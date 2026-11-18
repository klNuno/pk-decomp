/* profile: o0_301 */
#include "common.h"

s32 func_001B78D0();
s32 HMU_fn_p_vMalloc();
void func_001B8520();

s32 func_001B7A20(void) {
    s32 temp_s0;

    temp_s0 = 0;
    temp_s0 = HMU_fn_p_vMalloc(func_001B78D0(), 0);
    func_001B8520(temp_s0, HMU_fn_p_vMalloc(0x1C, 0));
    return temp_s0;
}
