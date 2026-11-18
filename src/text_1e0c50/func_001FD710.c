/* profile: o0 */
#include "common.h"

void func_001B4D70(s32);

void func_001FD710(s32 arg0, u16 *arg1, u16 *arg2, u16 *arg3, s32 arg4, s32 arg5, u16 arg6) {
    if (arg4 == 1) {
        func_001B4D70(arg0);
        if (arg5 != 0) {
            *arg3 |= arg6;
        } else {
            *arg3 &= (u16)~(s16)arg6;
        }
    } else if (arg5 != 0) {
        *arg1 |= arg6;
        *arg2 |= arg6;
        *arg3 |= arg6;
    } else {
        *arg1 &= (u16)~(s16)arg6;
        *arg2 &= (u16)~(s16)arg6;
        *arg3 &= (u16)~(s16)arg6;
    }
}
