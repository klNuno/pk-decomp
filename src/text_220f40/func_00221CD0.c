/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00221CD0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00221CD0_0;

unk_func_00221CD0_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_p_stBrainGetMind(s32);
u8 func_001EA0D0(u8, u8, s32, s32);

void func_00221CD0(u8 arg0, u8 arg1, s32 arg2, s32 arg3) {
    func_001EA0D0(arg0, arg1, fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg2)->unk_0C), arg3) == 0;
}
