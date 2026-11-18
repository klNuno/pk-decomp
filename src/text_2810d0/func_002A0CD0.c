#include "common.h"

extern f32 D_007B84D0[][4];
extern u8 D_007B8488[];
extern u8 D_007B2370[];
void func_0029D9A0();

void func_002A0CD0(s32 arg0, f32 arg1) {
    D_007B84D0[arg0][0] = arg1;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370 + arg0 * 16 + 0x6160);
    }
}
