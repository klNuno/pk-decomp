/* profile: o0 */
#include "common.h"

void *func_001AEC20(s32);

void func_001AECB0(s32 arg0, s32 arg1) {
    void *temp_v0;
    temp_v0 = func_001AEC20(arg0);
    (*(s32 *)((u8 *)temp_v0 + 0)) = arg1;
    (*(s8 *)((u8 *)temp_v0 + 0xC)) = 1;
}
