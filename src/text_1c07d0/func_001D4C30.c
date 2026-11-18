/* profile: o0_301 */
#include "common.h"

s32 *func_00197880();
void HMU_fn_vFree();
void func_001D3660();

void func_001D4C30(s32 arg0) {
    s32 temp;

    temp = *func_00197880(arg0);
    if (temp != 0) {
        HMU_fn_vFree(&temp, 1);
    }
    *func_00197880(arg0) = 0;
    func_001D3660(arg0, 0);
}
