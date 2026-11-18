/* profile: o0 */
#include "common.h"

s32 func_001EBBD0();

s32 func_00235150(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 temp2;

    arg1 = func_001EBBD0(arg0, arg1, &temp);
    temp2 = temp[0];
    return arg1;
}
