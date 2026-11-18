/* profile: o0 */
#include "common.h"

void func_0017E8D0();
void func_00280270(s32, f32);
void func_00162A40();
void func_00280090();
s32 func_0027FFD0();
s32 func_00281990();
void func_00280130();

s32 func_00280710(s32 arg0, f32 arg1) {
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
    } while ((ret = func_0027FFD0()) == 0 && func_00281990());
    if (!func_00281990()) {
        ret = -1;
    }
    func_00280130();
    return ret;
}
