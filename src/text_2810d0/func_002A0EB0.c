#include "common.h"

f32 int2dB__Fi();
void func_0029D8F0(s32, void *);
extern f32 *D_007B84F4[];
extern u8 D_007B8488[];
extern u8 D_007B84D0[];

void func_002A0EB0(s64 *arg0) {
    f32 c;
    f32 b;
    f32 a;

    a = int2dB__Fi(arg0[3]);
    b = int2dB__Fi(arg0[2]);
    c = int2dB__Fi(arg0[1]);
    D_007B84F4[0][0] = int2dB__Fi(arg0[0]);
    D_007B84F4[0][1] = c;
    D_007B84F4[0][2] = b;
    D_007B84F4[0][3] = a;
    if (D_007B8488[0] == 0) {
        func_0029D8F0(3, D_007B84D0);
    }
}
