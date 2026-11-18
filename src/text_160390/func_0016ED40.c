#include "common.h"

s32 func_00169790();
s32 func_00169A40();
void func_0016E6E0();
extern s32 D_0035FBC4;

void func_0016ED40(s32 arg0, s32 arg1, s32 arg2) {
    u8 a[0x60];
    u8 b[0x70];

    if (func_00169A40(arg0, a) != 0 && func_00169790(arg0, arg1, b) != 0) {
        if (arg2 == 0) {
            arg2 = D_0035FBC4;
        } else {
            D_0035FBC4 = arg2;
        }
        func_0016E6E0(a, b, arg2);
    }
}
