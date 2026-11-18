/* profile: o0_301_p */
#include "common.h"

s32 HIE_fn_hGetSuperObjectFather(s32);
s32 func_001971C0(s32);

s32 fn_hGetSuperObjectActorHandle(s32 arg0) {
    s32 h;
    s32 ret = 0;

    if (arg0 != 0 && arg0 != -1) {
        for (h = arg0; h != 0; h = HIE_fn_hGetSuperObjectFather(h)) {
            if (func_001971C0(h) == 2) {
                ret = h;
                break;
            }
        }
    }
    return ret;
}
