/* profile: o0 */
#include "common.h"

s32 func_0021E760(s32, s32, s8 *);

s32 func_0021E910(s32 arg0, s32 arg1, s8 *arg2) {
    s8 temp[4];

    arg1 = func_0021E760(arg0, arg1, temp);
    arg2[3] = temp[0];
    return arg1;
}
