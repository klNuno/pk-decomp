/* profile: opt_300 */
#include "common.h"

void __register_global_object(void *, void *, void *);
void func_002CF4C0(void *);
s32 func_002D5230(void *, s32, s32);
void func_002D5450();
extern s8 D_00360520;
extern u8 D_007BDF70[];
extern u8 D_007BDF80[];

s32 func_002CFD40(s32 arg0, s32 arg1) {
    s32 ret = -3;

    if (D_00360520 == 0) {
        func_002CF4C0(D_007BDF80);
        __register_global_object(D_007BDF80, func_002D5450, D_007BDF70);
        D_00360520 = 1;
    }
    if (func_002D5230(D_007BDF80, arg0, arg1) != 0) {
        ret = arg0;
    }
    return ret;
}
