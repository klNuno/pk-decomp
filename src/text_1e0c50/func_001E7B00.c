/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);
void *fn_p_stBrainGetMind(s32);
s32 func_001EC2A0(s32, s32);

s32 func_001E7B00(s32 arg0) {
    void *temp_v0;
    temp_v0 = fn_p_stBrainGetMind((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 0xC)));
    (*(s8 *)((u8 *)temp_v0 + 0x10)) = 0;
    if ((*(s32 *)((u8 *)temp_v0 + 8)) != 0) {
        return func_001EC2A0(arg0, (*(s32 *)((u8 *)temp_v0 + 8)));
    }
    return 0;
}
