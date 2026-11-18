/* profile: o0_301 */
#include "common.h"

void *HMU_fn_p_vMalloc(s32, s32);
s32 func_001BB060();
void func_001BB580(void *);

void *func_001BB180(void) {
    void *temp;

    temp = HMU_fn_p_vMalloc(func_001BB060(), 0);
    func_001BB580(temp);
    return temp;
}
