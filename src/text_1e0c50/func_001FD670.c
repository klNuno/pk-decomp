/* profile: o0_p */
#include "common.h"

void func_001FD670(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 n;
    s32 *src;
    s32 *dst;
    src = arg1;
    dst = arg0;
    n = arg2;
    while (n >= 4) {
        *dst++ = *src++;
        n -= 4;
    }
    while (n != 0) {
        *(s8 *)dst++ = *(s8 *)src++;
        n--;
    }
}
