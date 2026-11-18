#include "common.h"

extern u8 D_007B8488[];
extern f32 D_007B84D0[];
void func_0029D8F0();

void func_002A1860(f32 arg0, f32 arg1) {
    D_007B84D0[0] = arg0;
    D_007B84D0[1] = arg1;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
