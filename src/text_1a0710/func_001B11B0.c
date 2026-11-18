/* profile: o0_301 */
#include "common.h"

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00133AA0(s32 *);
s32 func_00133CF0(s32);
s32 func_001971C0(s32);
s32 func_001979C0(s32);
s32 func_0019C730(s32);
s32 func_001ACF40(s32, s32);
void func_001B0D40(s32, s32, s32, s32, u16, s32, s32);
s32 func_001B1340(s32, s32);

void func_001B11B0(s32 arg0, u8 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5) {
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 *temp3;

    temp0 = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg0)), arg1);
    if (temp0 == 0 || func_001971C0(temp0) != 8) {
        temp0 = func_001B1340(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg0)), arg1);
        if (temp0 == 0 || func_001971C0(temp0) != 8) {
            return;
        }
    }
    temp3 = HIE_fn_hGetSuperObjectObject(temp0);
    temp2 = func_00133AA0(temp3);
    if (temp2 != 0) {
        temp1 = func_00133CF0(temp2);
        if (temp1 != 0) {
            func_001B0D40(arg0, temp1, func_001979C0(temp0), arg2, arg3, arg4, arg5);
        }
    }
}
