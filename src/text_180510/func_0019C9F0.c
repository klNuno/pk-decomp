/* profile: o0 */
#include "common.h"

s32 *HMU_fn_p_vMalloc(s32, s32);

void func_0019C9F0(s32 **arg0) {
    if (*arg0 == NULL) {
        *arg0 = HMU_fn_p_vMalloc(0xC, 1);
        (*arg0)[0] = 0;
        (*arg0)[1] = 0;
        (*arg0)[2] = 0;
    }
}
