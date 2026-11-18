/* profile: o0_301_p */
#include "common.h"

void func_00162A40();
void func_0017E8D0();
s32 func_0027FFD0();
void func_00280090();
void func_002801D0();
void func_00280220();
void func_00280270(s32, f32);
s32 func_00281990();
extern s32 D_00360300;

s32 func_002803B0(s32 arg0, f32 arg1) {
    s32 ret;
    s32 i;
    s32 n;

    i = 0;
    n = 10;
    func_0017E8D0();
    func_00280270(arg0, arg1);
    func_00162A40();
    func_0017E8D0();
    func_00280270(arg0, arg1);
    func_00162A40();
    func_00280090();
    func_002801D0();
    func_00280220();
    do {
        func_0017E8D0();
        func_00280270(arg0, arg1);
        func_00162A40();
        if (func_00281990() == 0) {
            ret = 4;
            break;
        }
    } while ((ret = func_0027FFD0()) == 0);
    func_00280090();
    func_002801D0();
    func_00280220();
    D_00360300 = -1;
    return ret;
}
