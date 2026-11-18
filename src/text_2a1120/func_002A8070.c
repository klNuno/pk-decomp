/* profile: opt_nodf */
#include "common.h"

typedef struct {
    u8 pad_00[0x6118];
    u8 unk_6118;
    u8 pad_6119[7];
    f32 unk_6120[1][4];
} unk_func_002A8070_0;

void func_0029D9A0();
extern unk_func_002A8070_0 D_007B2370;

void func_002A8070(s32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    D_007B2370.unk_6120[arg0][0] = (f32)arg1 / 65535.0f;
    D_007B2370.unk_6120[arg0][1] = (f32)arg2 / 65535.0f;
    D_007B2370.unk_6120[arg0][2] = (f32)arg3 / 65535.0f;
    D_007B2370.unk_6120[arg0][3] = 1.0f;
    if (D_007B2370.unk_6118 == 0) {
        func_0029D9A0(6, arg0, D_007B2370.unk_6120[arg0]);
    }
}
