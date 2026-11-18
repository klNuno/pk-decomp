#include "common.h"

extern u8 D_007B0774[];
extern u8 D_0036041C;
extern s32 D_007B2370[];
void func_0028A1B0(s32);

void func_0028A160(void) {
    if (D_007B0774[0] != 0 && D_0036041C != 0 && (D_007B2370[0] & 0x20000)) {
        D_0036041C = 0;
        func_0028A1B0(D_007B2370[0]);
    }
}
