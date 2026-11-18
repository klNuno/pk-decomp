/* profile: o0_301 */
#include "common.h"

void func_0027D470(s32, s32, u32 *, s32, s32);

s32 func_00281C80(void) {
    u32 temp_s0 = 0;
    u32 sp2C = 0;

    temp_s0 = 0x140;
    func_0027D470(0, 0, &sp2C, 1, 0);
    if (sp2C < temp_s0) {
        return 0;
    }
    return 1;
}
