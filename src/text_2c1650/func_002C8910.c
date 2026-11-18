#include "common.h"

typedef struct unk_func_002C8910_0 {
    f32 unk_00[16];
} __attribute__((aligned(16))) unk_func_002C8910_0;

f32 int2dB__Fi(s64);
extern s8 D_007B7B8C[];
extern unk_func_002C8910_0 *D_007B83E4[];

void func_002C8910(s64 *arg0) {
    unk_func_002C8910_0 sp30;
    f32 *p;

    p = (f32 *)&sp30;
    *p++ = int2dB__Fi(arg0[0]);
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
    *D_007B83E4[0] = sp30;
    D_007B7B8C[0] = 1;
}
