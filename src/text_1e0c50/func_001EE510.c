/* profile: o0 */
#include "common.h"

void HMU_fn_vFree(s32 *, s32);

void func_001EE510(s32 arg0) {
    if (arg0 != 0) {
        HMU_fn_vFree(&arg0, 1);
        arg0 = 0;
    }
}
