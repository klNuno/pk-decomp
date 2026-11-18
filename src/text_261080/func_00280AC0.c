/* profile: o0_p */
#include "common.h"

void func_00162A40();
void func_0017E8D0();
s32 func_0027FC40();
void func_00280180();
void func_00280270(s32, f32);
s32 func_00281990();
s32 func_00281C80();
extern s32 D_007B00CC[];

s32 func_00280AC0(void) {
    s32 r;

    r = -1;
    func_0017E8D0();
    func_00280270(D_007B00CC[0], 450.0f);
    func_00162A40();
    func_00280270(D_007B00CC[0], 450.0f);
    func_00162A40();
    func_00280180();
    do {
        func_0017E8D0();
        func_00280270(D_007B00CC[0], 450.0f);
        func_00162A40();
    } while ((r = func_0027FC40()) == 0 && func_00281990() == 0);
    func_00280180();
    func_00280180();
    if (func_00281990() != 0 && func_00281C80() != 0) {
        r = 4;
    }
    return r;
}
