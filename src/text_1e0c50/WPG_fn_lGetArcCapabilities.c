/* profile: o0 */
#include "common.h"

s32 WPARCLST_fn_lGetCapabilities(s32, s32, s32);

s32 WPG_fn_lGetArcCapabilities(void *arg0, s32 arg1, s32 arg2) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        return WPARCLST_fn_lGetCapabilities((*(s32 *)((u8 *)arg0 + 0x18)), arg1, arg2);
    }
    return -1;
}
