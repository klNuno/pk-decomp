#include "common.h"

f32 int2dB__Fi();
void func_0029D8F0(s32, f32 *);
extern u8 D_007B8488[];
extern f32 D_007B84D0[];

void func_002A1A10(s64 *arg0) {
    D_007B84D0[0] = int2dB__Fi(*arg0);
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
