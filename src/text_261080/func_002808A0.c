/* profile: o0_301 */
#include "common.h"

void func_0011CBB0(u8 *, u8 *, s32);
void func_00162A40(void);
void func_0017E8D0(void);
s32 func_0027FCF0(void);
void func_00280180(void);
void func_002801D0(void);
void func_00280270(s32, f32);
s32 func_00281990(void);
s32 func_00281C80(void);
extern s32 D_007B0060[];

s32 func_002808A0(void) {
    s32 ret;
    s32 size;
    u8 buf[0x800];

    ret = -1;
    size = 0x140;
    func_0011CBB0(buf, (u8 *)D_007B0060[0], size);
    func_0017E8D0();
    func_00280270(D_007B0060[0], 450.0f);
    func_00162A40();
    func_00280270(D_007B0060[0], 450.0f);
    func_00162A40();
    func_00280180();
    do {
        func_0017E8D0();
        func_00280270(D_007B0060[0], 450.0f);
        func_00162A40();
    } while ((ret = func_0027FCF0()) == 0 && func_00281990() == 0);
    func_00280180();
    func_002801D0();
    if (func_00281990() != 0 && func_00281C80() != 0) {
        ret = 1;
    }
    return ret;
}
