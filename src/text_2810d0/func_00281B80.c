/* profile: o0_p */
#include "common.h"

void func_00162A40();
void func_0017E8D0();
s32 func_0027FCF0();
void func_00280180();
void func_002801D0();
void func_00280270(s32, f32);
s32 func_00281990();
extern s32 D_007B0064[];

s32 func_00281B80(s32 x, s32 y) {
    s32 a;
    s32 b;

    a = 0;
    b = 0;
    func_00280180();
    func_002801D0();
    func_00280270(D_007B0064[0], 450.0f);
    func_00162A40();
    func_0017E8D0();
    func_00280270(D_007B0064[0], 450.0f);
    func_00162A40();
    func_00280180();
    do {
        func_0017E8D0();
        func_00280270(D_007B0064[0], 450.0f);
        func_00162A40();
    } while ((a = func_0027FCF0()) == 0 && func_00281990() != 0);
    if (func_00281990() == 0) {
        return 3;
    }
    return 2;
}
