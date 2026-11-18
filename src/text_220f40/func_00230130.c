/* profile: o0_301 */
#include "common.h"

s32 func_00208D80(s32);
void func_00222F90(s32, s32, s32 *);
s32 func_001EBBD0();
s32 func_001C2550();
void func_0019A2C0(s32, s32);
extern s32 D_00360178;

s32 func_00230130(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 temp5;
    s32 temp6;
    s32 temp3;
    s32 temp4;
    s32 temp2;
    s32 temp7;

    temp2 = ((s32 *)arg1)[-2];
    func_00222F90(func_00208D80(temp2), arg0, &temp7);
    arg1 = func_001EBBD0(arg0, arg1, temp);
    temp3 = temp[0];
    arg1 = func_001EBBD0(arg0, arg1, temp);
    temp4 = temp[0];
    D_00360178 = temp7;
    temp5 = func_001C2550(temp7);
    temp6 = 1 << temp3;
    if (temp4) {
        temp5 |= temp6;
    } else {
        temp5 &= ~temp6;
    }
    func_0019A2C0(temp7, temp5);
    return arg1;
}
