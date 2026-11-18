/* profile: o0_301 */
#include "common.h"

s32 func_001B34D0();
void *HMU_fn_p_vMalloc(s32, s32);
void func_001B3660(void *);

void *func_001B35F0(void) {
    void *temp;

    temp = NULL;
    temp = HMU_fn_p_vMalloc(func_001B34D0(), 0);
    func_001B3660(temp);
    return temp;
}
