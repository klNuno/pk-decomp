/* profile: o0 */
#include "common.h"

void *HIE_fn_hGetSuperObjectObject(s32);
void *fn_p_stBrainGetMind(s32);

s32 func_0024DE90(s32 arg0, s32 arg1) {
    void *temp_s0;
    temp_s0 = *(void **)((u8 *)(fn_p_stBrainGetMind((*(s32 *)((u8 *)(HIE_fn_hGetSuperObjectObject(arg0)) + 0xC)))) + 4);
    if (temp_s0 != NULL) {
        return (*(s32 *)((u8 *)temp_s0 + 8)) == arg1;
    }
    return 0;
}
