/* profile: opt */
#include "common.h"

f32 int2dB__Fi(s64);
void func_00101928();
extern s32 D_007B83E4[];
extern u8 D_007B7B8C[];

void func_002C8F90(s64 *arg0) {
    f32 sp30[16];
    f32 *p;

    p = sp30;
    ++p;
    p[-1] = int2dB__Fi(arg0[0]);
    *p++ = int2dB__Fi(arg0[1]);
    *p++ = int2dB__Fi(arg0[2]);
    *p++ = int2dB__Fi(arg0[3]);
    *p++ = int2dB__Fi(arg0[4]);
    *p++ = int2dB__Fi(arg0[5]);
    *p++ = int2dB__Fi(arg0[6]);
    *p++ = int2dB__Fi(arg0[7]);
    *p++ = int2dB__Fi(arg0[8]);
    *p++ = int2dB__Fi(arg0[9]);
    *p++ = int2dB__Fi(arg0[10]);
    *p++ = int2dB__Fi(arg0[11]);
    *p++ = int2dB__Fi(arg0[12]);
    *p++ = int2dB__Fi(arg0[13]);
    *p++ = int2dB__Fi(arg0[14]);
    *p++ = int2dB__Fi(arg0[15]);
    func_00101928(D_007B83E4[0], D_007B83E4[0], sp30);
    D_007B7B8C[0] = 1;
}
