/* profile: o0_301 */
#include "common.h"

void *memset(void *, s32, u32);

void *func_001E8520(u8 **arg0, u32 arg1) {
    u8 *temp_s0 = 0;

    temp_s0 = *arg0;
    *arg0 = *arg0 + arg1;
    memset((void *)temp_s0, 0, arg1);
    return temp_s0;
}
