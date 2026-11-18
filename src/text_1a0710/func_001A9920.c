/* profile: o0_301_p */
#include "common.h"

s32 func_001A7D80();
s32 func_001A7D60(s32);
void func_001A96C0(u8, s32);
s32 func_001A7D90(s32);
extern u8 D_005AB880[];
extern s32 D_005ABDC0[];

void func_001A9920(void) {
    s32 temp;
    u8 i;

    temp = func_001A7D80();
    for (i = 0; i < D_005AB880[0]; i++) {
        if (temp == 0) {
            break;
        }
        func_001A96C0(i, func_001A7D60(temp));
        if (D_005ABDC0[0] == 0) {
            temp = func_001A7D90(temp);
        }
    }
}
