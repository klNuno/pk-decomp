/* profile: o0 */
#include "common.h"

s32 fn_bRetObjectRollOffNull(s32 arg0, s32 arg1, s32 *arg2) {
    s32 ret = 0;
    if (arg2 != 0) {
        arg2[1] = 0;
        arg2[0] = 0;
        ret = 1;
    }
    return ret;
}
