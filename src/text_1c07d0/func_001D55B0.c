/* profile: o0 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);

s32 func_001D55B0(s32 arg0) {
    u8 *temp;

    temp = (u8 *)*HIE_fn_hGetSuperObjectObject(arg0);
    if (*(s32 *)(temp + 0x160) > 0) {
        return 1;
    }
    return 0;
}
