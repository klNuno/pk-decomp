/* profile: o0_301 */
#include "common.h"

s32 func_001BC0C0(void);
s32 *HMU_fn_p_vMalloc(s32, s32);
s32 func_0012C610(void);

s32 *func_001BC2B0(void) {
    s32 *temp;

    temp = NULL;
    temp = HMU_fn_p_vMalloc(func_001BC0C0(), 0);
    *temp = func_0012C610();
    return temp;
}
