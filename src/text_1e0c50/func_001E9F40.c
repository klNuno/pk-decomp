/* profile: o0 */
#include "common.h"

s32 func_001E9F40(s32 *arg0, u8 arg1, s32 *arg2) {
    s32 temp;

    temp = *arg2;
    arg1 = arg1;
    *arg0 = temp;
    if (temp == 0) {
        return 0;
    }
    return 1;
}
