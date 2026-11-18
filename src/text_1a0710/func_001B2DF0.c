/* profile: o0_301 */
#include "common.h"

void func_001B2930(s32, u8, s32, u16, s32 *);
s32 func_001B0130(s32, s32, u8);
s32 func_001979C0(s32);
void func_001B2AB0(s32, s32, s32, s32, u16, s32 *);

void func_001B2DF0(s32 arg0, u8 arg1, u8 arg2, s32 arg3, u16 *arg4) {
    s32 temp1;
    u16 temp0;
    s32 temp2;

    temp0 = *arg4;
    temp2 = 0;
    if (arg1) {
        func_001B2930(arg0, arg2, arg3, temp0, &temp2);
    } else {
        temp1 = func_001B0130(arg0, 0, arg2 - 1);
        if (temp1) {
            func_001B2AB0(arg0, temp1, func_001979C0(arg0), arg3, temp0, &temp2);
        }
    }
    *arg4 = temp2;
}
