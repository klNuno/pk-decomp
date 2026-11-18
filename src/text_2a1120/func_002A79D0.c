/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A79D0_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A79D0_1;

typedef struct unk_func_002A79D0_0 {
    u8 pad_00[0x6118];
    u8 unk_6118;
    u8 pad_6119[0x7];
    unk_func_002A79D0_1 unk_6120[1];
} unk_func_002A79D0_0;

void func_0029D9A0(s32, s32, unk_func_002A79D0_1 *);
extern unk_func_002A79D0_0 D_007B2370;

void func_002A79D0(s32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4) {
    D_007B2370.unk_6120[arg0].unk_00 = arg1 / 4294967296.0f;
    D_007B2370.unk_6120[arg0].unk_04 = arg2 / 4294967296.0f;
    D_007B2370.unk_6120[arg0].unk_08 = arg3 / 4294967296.0f;
    D_007B2370.unk_6120[arg0].unk_0C = arg4 / 4294967296.0f;
    if (!D_007B2370.unk_6118) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0]);
    }
}
