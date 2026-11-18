#include "common.h"

f32 int2dB__Fi();
void func_0029D8F0();
extern u8 D_007B8488[];
extern u8 D_007B84D0[];
extern f32 *D_007B84F4[];

void func_002A1120(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    D_007B84F4[0][0] = int2dB__Fi(arg0);
    D_007B84F4[0][1] = int2dB__Fi(arg1);
    D_007B84F4[0][2] = int2dB__Fi(arg2);
    D_007B84F4[0][3] = int2dB__Fi(arg3);
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
