/* profile: o0_301_p */
#include "common.h"

void func_0027D260();
void func_0027B9D0();
s32 func_0010E5A0();
u32 func_0012ABC0();
s32 func_001273A8(f32);
void func_0012ABD0(s32);
void func_0010E2E0(s32, s32, s32 *);
s32 func_0027E030(s32, s32, s32);
s32 func_0027DC60(s32, s32, s32, s32);
void func_0027E1A0();
void func_0011CBB0(void *, void *, s32, s32);
s32 func_0027C760();
extern u8 D_00360394;
extern u8 D_003603A8;
extern u8 D_003603A4;
extern u8 D_007AD240[];
extern char D_0034F3D8[];

s32 func_0027E6D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    char sp30[0x4C];
    s32 sp7C;
    s32 retries;

    func_0027D260(arg0, arg1, &D_003603A8);
    retries = 3;
    D_00360394 = 0;
    func_0027B9D0();
    while (retries != 0 && !(D_00360394 = func_0010E5A0(arg0, arg1, (void *)arg2, 0, 0x63, D_007AD240) ? 0 : 1)) {
        if (--retries != 0) {
            func_0012ABD0(func_001273A8(func_0012ABC0() / 1000.0f));
        }
    }
    if (D_00360394) {
        func_0010E2E0(0, 0, &sp7C);
    } else {
        return 0;
    }
    if (sp7C != 1 && func_0027E030(arg0, arg1, arg2) != 1) {
        return 0;
    }
    if (func_0027DC60(arg0, arg1, arg2, arg3) != 1) {
        func_0027E1A0(arg0, arg1, (void *)arg2);
        return 0;
    }
    func_0011CBB0(sp30, D_0034F3D8, arg2, arg2);
    if (func_0027C760(arg0, arg1, sp30, arg4, arg5) != 1) {
        func_0027E1A0(arg0, arg1, (void *)arg2);
        return 0;
    }
    func_0027D260(arg0, arg1, &D_003603A4);
    return 1;
}
