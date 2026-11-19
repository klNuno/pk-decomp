/* profile: o0_p */
#include "common.h"

void func_00162A40();
void func_0017E8D0();
s32 func_0027FF10();
void func_00280180();
void func_00280270(s32, f32);
s32 func_00281990();
s32 func_00281C80();
extern s32 D_007B00B0[];

s32 func_002811E0(volatile s32 arg0) {
    s32 var_s1;
    s32 var_s0;

    var_s1 = 0;
    func_00280180();
    func_00280270(D_007B00B0[0], 450.0f);
    func_00162A40();
    func_0017E8D0();
    func_00280270(D_007B00B0[0], 450.0f);
    func_00162A40();
    func_00280180();
    do {
        func_0017E8D0();
        func_00280270(D_007B00B0[0], 450.0f);
        func_00162A40();
    } while ((var_s0 = func_0027FF10()) != 4 && func_00281C80() == 0 && func_00281990() != 0);
    if (func_00281C80() != 0) {
        var_s0 = 1;
    }
    if (var_s0 == 4) {
        return 0;
    }
    return 3;
}
