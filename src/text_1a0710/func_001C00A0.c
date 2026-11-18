/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);

s32 func_001C00A0(s32 arg0) {
    if ((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 4)) != 0) {
        return 1;
    }
    return 0;
}
