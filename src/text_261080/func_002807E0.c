/* profile: o0_p */
#include "common.h"

void func_00162A40();
void func_0017E8D0();
void func_00280270(s32, f32);
s32 func_002808A0();
s32 func_00281990();
extern s32 D_007B0060[];

s32 func_002807E0(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;

    for (i = 0; i < arg2; i++) {
        if (func_00281990() == 0 && func_002808A0() == 4) {
            return arg1;
        }
        func_0017E8D0();
        func_00280270(D_007B0060[arg0], 450.0f);
        func_00162A40();
    }
    return 100;
}
