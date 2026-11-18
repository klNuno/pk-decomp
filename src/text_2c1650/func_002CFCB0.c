/* profile: opt_300 */
#include "common.h"

void func_002CF4C0();
void __register_global_object();
void func_002D5450();
s32 func_002D5130();
extern s8 D_00360520;
extern u8 D_007BDF70[];
extern u8 D_007BDF80[];

s32 func_002CFCB0(s32 arg0) {
    s32 ret;

    ret = 0;
    if (D_00360520 == 0) {
        func_002CF4C0(D_007BDF80);
        __register_global_object(D_007BDF80, func_002D5450, D_007BDF70);
        D_00360520 = 1;
    }
    if (func_002D5130(D_007BDF80, arg0) != 0) {
        ret = 1;
    }
    return ret;
}
