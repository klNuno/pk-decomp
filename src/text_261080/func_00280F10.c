/* profile: o0_p */
#include "common.h"

void func_00162A40();
void func_0017E8D0();
s32 func_0027FF10();
void func_00280180();
void func_002801D0();
void func_00280270(s32, f32);
extern s32 D_007B007C[];

s32 func_00280F10(void) {
    s32 ret;

    func_00280180();
    func_002801D0();
    func_0017E8D0();
    func_00280270(D_007B007C[0], 450.0f);
    func_00162A40();
    func_0017E8D0();
    while ((ret = func_0027FF10()) == 0) {
        func_0017E8D0();
        func_00280270(D_007B007C[0], 450.0f);
        func_00162A40();
    }
    func_00280180();
    func_002801D0();
    if (ret == 4) {
        return 3;
    }
    return 2;
}
