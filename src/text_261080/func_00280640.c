/* profile: o0 */
#include "common.h"

void func_00162A40();
void func_0017E8D0();
s32 func_0027FCF0();
void func_00280090();
void func_002801D0();
void func_00280270(s32, f32);
s32 func_00281990();

s32 func_00280640(s32 arg0, f32 arg1) {
    s32 temp;

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
    } while ((temp = func_0027FCF0()) == 0 && func_00281990());
    if (!func_00281990()) {
        temp = -1;
    }
    func_002801D0();
    return temp;
}
