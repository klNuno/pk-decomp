/* profile: o0_p */
#include "common.h"

void HMU_fn_vFree();

void func_0019C580(s32 **arg0) {
    s32 *p;
    s32 n;

    p = *arg0;
    if (p != NULL) {
        n = p[-1];
        n *= 4;
        n /= 0x14;
        HMU_fn_vFree(&p, 1);
        p = NULL;
    }
}
