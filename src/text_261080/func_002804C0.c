/* profile: o0 */
#include "common.h"

void func_00162A40();
void func_0017E8D0();
s32 func_0027FF10();
void func_00280090();
void func_002800E0();
void func_00280270(s32, f32);

s32 func_002804C0(s32 arg0, f32 arg1) {
    s32 ret;
    func_0017E8D0();
    func_00280270(arg0, arg1);
    func_00162A40();
    func_00280270(arg0, arg1);
    func_00162A40();
    func_00280090();
    do {
        func_0017E8D0();
        func_00280270(arg0, arg1);
        func_00162A40();
    } while ((ret = func_0027FF10()) == 0);
    func_002800E0();
    return ret;
}
