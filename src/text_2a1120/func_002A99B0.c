#include "common.h"

extern f32 D_007B8490[];
extern u8 D_007B8488[];
void func_0029D8F0();

void func_002A99B0(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    D_007B8490[0] = arg0;
    D_007B8490[1] = arg1;
    D_007B8490[2] = arg2;
    D_007B8490[3] = arg3;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(0, D_007B8490);
    }
}
