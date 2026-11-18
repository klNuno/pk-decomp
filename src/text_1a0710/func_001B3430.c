/* profile: o0 */
#include "common.h"

void *func_001B6AB0(u8, s32);

s32 func_001B3430(u8 arg0, s32 arg1) {
    void *temp_v0;
    temp_v0 = func_001B6AB0(arg0, arg1);
    if (temp_v0 != NULL) {
        return *(s32 *)((u8 *)temp_v0 + 4);
    }
    return 0;
}
