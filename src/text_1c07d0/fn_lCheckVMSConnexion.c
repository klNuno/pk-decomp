/* profile: o0 */
#include "common.h"

s32 SVG_fn_bGetActiveVms();
s32 fn_bIsActiveFileEverInPlace();
s32 func_0027EB00();

s32 fn_lCheckVMSConnexion(u8 arg0) {
    s32 ret;

    ret = 1;
    if (SVG_fn_bGetActiveVms() == -1) {
        ret = 0;
    } else if (func_0027EB00() == 0) {
        ret = -1;
    } else if (arg0 && fn_bIsActiveFileEverInPlace() == 0) {
        ret = -2;
    }
    return ret;
}
