/* profile: o0_301 */
#include "common.h"

extern u8 D_0035F574;
void Mmg_fn_v_SetModeAlloc(u8, s32, s32);
void func_00136DE0(void *, s32);

void func_001D67F0(void *arg0) {
    if (arg0 != NULL) {
        Mmg_fn_v_SetModeAlloc(D_0035F574, 0, 0);
        func_00136DE0(arg0, 0);
    }
}
