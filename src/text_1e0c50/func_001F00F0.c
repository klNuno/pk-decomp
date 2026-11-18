/* profile: o0 */
#include "common.h"

s32 func_001EE330(s32, s32, s32);

s32 func_001F00F0(void *arg0, s32 arg1, s32 arg2) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        return func_001EE330((*(s32 *)((u8 *)arg0 + 0x18)), arg1, arg2);
    }
    return -1;
}
