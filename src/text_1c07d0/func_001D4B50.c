/* profile: o0_301 */
#include "common.h"

s32 HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(s32 *, s32);
s32 *func_00197880(s32);
u16 func_001C4700(s32);
void func_001D3660(s32, u16);

void func_001D4B50(s32 arg0, u16 arg1) {
    u16 temp;
    s32 temp2;

    temp = func_001C4700(arg0);
    if (arg1 > temp) {
        if (*func_00197880(arg0) != 0) {
            HMU_fn_vFree(func_00197880(arg0), 1);
        }
        temp2 = HMU_fn_p_vMalloc(arg1 * 6, 1);
        *func_00197880(arg0) = temp2;
        func_001D3660(arg0, arg1);
    }
}
