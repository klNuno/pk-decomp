/* profile: o0 */
#include "common.h"

void WPARCLST_fn_vAdd(s32, s32, s32, s32);

void WPG_fn_vAddArc(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        WPARCLST_fn_vAdd((*(s32 *)((u8 *)arg0 + 0x18)), arg1, arg3, arg2);
    }
}
