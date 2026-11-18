/* profile: o0_301 */
#include "common.h"

s32 func_001D9F60(void);
void func_001EDBB0(s32, s32);

s32 *func_00208900(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp_s0 = arg1[-2];

    switch (temp_s0) {
    case 0x94:
        *arg2 = func_001D9F60();
        return arg1;
    default:
        func_001EDBB0(0x2B, 0);
        return arg1;
    }
}
