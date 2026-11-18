/* profile: o0_p */
#include "common.h"

void func_0017E8D0(void);
void func_00280270(s32, f32);
void func_00162A40(void);
void func_00280180(void);
void func_002801D0(void);
s32 func_0027FCF0(void);
s32 func_00281990(void);
s32 func_00281C80(void);
extern s32 D_007B0094[];

s32 func_002809C0(void) {
    s32 ret;

    ret = -1;
    func_0017E8D0();
    func_00280270(D_007B0094[0], 450.0f);
    func_00162A40();
    func_00280270(D_007B0094[0], 450.0f);
    func_00162A40();
    func_00280180();
    do {
        func_0017E8D0();
        func_00280270(D_007B0094[0], 450.0f);
        func_00162A40();
        if ((ret = func_0027FCF0()) != 0) {
            break;
        }
    } while (func_00281990() == 0);
    func_00280180();
    func_002801D0();
    if (func_00281990() != 0 && func_00281C80() != 0) {
        ret = 1;
    }
    return ret;
}
