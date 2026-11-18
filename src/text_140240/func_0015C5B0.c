#include "common.h"

typedef struct unk_func_0015C5B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0015C5B0_0;

typedef struct unk_func_0015C5B0_1 {
    unk_func_0015C5B0_0 unk_00;
    s16 unk_0C;
    s16 unk_0E;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    s32 unk_1C;
    u8 pad_20[0xE4];
} unk_func_0015C5B0_1;

extern unk_func_0015C5B0_1 D_00367BA0[];

void func_0015C5B0(u8 arg0, unk_func_0015C5B0_0 *arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6, s32 arg7) {
    D_00367BA0[arg0].unk_00 = *arg1;
    D_00367BA0[arg0].unk_0C = arg2;
    D_00367BA0[arg0].unk_0E = arg3;
    D_00367BA0[arg0].unk_10 = arg4;
    D_00367BA0[arg0].unk_14 = arg5;
    D_00367BA0[arg0].unk_18 = arg6;
    D_00367BA0[arg0].unk_1C = arg7;
}
