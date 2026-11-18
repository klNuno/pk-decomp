/* profile: o0 */
#include "common.h"

void func_001B9B70(u8 *arg0, u8 arg1, f32 arg2, f32 arg3) {
    arg0[3] = arg1;
    *(f32 *)(arg0 + 0x20) = arg2;
    *(f32 *)(arg0 + 0x24) = arg3;
}
