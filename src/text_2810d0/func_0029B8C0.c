/* profile: opt_noprop */
#include "common.h"

s32 func_0029DEB0();
extern s32 D_007B806C[];

s32 func_0029B8C0(s32 arg0) {
    s32 temp;

    temp = D_007B806C[0];
    if (func_0029DEB0(temp, arg0) == 0) {
        return 0;
    }
    D_007B806C[0] += arg0;
    return temp;
}
