/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001EA900_0;

unk_func_001EA900_0 *HIE_fn_hGetSuperObjectObject();
s32 fn_p_stBrainGetMind();
u8 fn_ucGetDsgVar(u8, u8, s32, s32);

s8 *func_001EA900(s32 arg0, s8 *arg1, s32 arg2) {
    u8 var;

    var = *arg1;
    fn_ucGetDsgVar(var, 0, fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C), arg2) == 0;
    return arg1 += 8;
}
