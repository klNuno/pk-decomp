/* profile: o0 */
#include "common.h"

s32 func_0027F2F0(s32 arg0) {
    s32 temp;

    temp = 0;
    arg0 &= 0xFF;
    temp = arg0 & 0xF;
    temp += (arg0 >> 4) * 10;
    return temp;
}
