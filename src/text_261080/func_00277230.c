#include "common.h"

extern u8 D_007A8177[];
void func_002773D0(s32, s32, s32);

void func_00277230(void) {
    if (D_007A8177[0] != 0) {
        func_002773D0(0, 1, -1);
        D_007A8177[0] = 0;
    }
}
