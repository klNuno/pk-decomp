/* profile: o0_p */
#include "common.h"

s32 func_001D0E40(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp;
    s32 i;

    temp = 0;
    for (i = 0; !temp && i < arg0; i++) {
        if (arg2 == arg1[i]) {
            temp = 1;
        }
    }
    return temp;
}
