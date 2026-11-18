/* profile: opt_nodf */
#include "common.h"

typedef struct {
    u8 pad_00[0x6118];
    u8 unk_6118;
    u8 pad_6119[7];
    f32 unk_6120[1][4];
} unk_func_002A70B0_0;

typedef struct {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
} unk_func_002A70B0_1;

void func_0029D9A0();
extern unk_func_002A70B0_0 D_007B2370;

void func_002A70B0(s32 arg0, unk_func_002A70B0_1 *arg1) {
    f32 a, b, c;

    c = (f32)(u32)arg1->unk_04 / 65535.0f;
    b = (f32)(u32)arg1->unk_02 / 65535.0f;
    a = (f32)(u32)arg1->unk_00 / 65535.0f;
    D_007B2370.unk_6120[arg0][0] = a;
    D_007B2370.unk_6120[arg0][1] = b;
    D_007B2370.unk_6120[arg0][2] = c;
    D_007B2370.unk_6120[arg0][3] = 1.0f;
    if (D_007B2370.unk_6118 == 0) {
        func_0029D9A0(6, arg0, D_007B2370.unk_6120[arg0]);
    }
}
