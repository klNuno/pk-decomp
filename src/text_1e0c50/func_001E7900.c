/* profile: o0 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
extern u8 D_0034CA68[];

u8 *func_001E7900(s32 arg0) {
    s32 temp_s0;

    if (HIE_fn_hGetSuperObjectObject(arg0)[3] == 0) {
        return NULL;
    }
    temp_s0 = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)[3]);
    if (temp_s0 == 0) {
        return NULL;
    }
    return D_0034CA68;
}
