#include "common.h"

typedef struct unk_func_00268E40_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00268E40_0;

typedef struct unk_func_00268E40_1 {
    u8 pad_00[0x38];
    unk_func_00268E40_0 unk_38;
    u8 pad_48[0x48];
    f32 unk_90;
    f32 unk_94;
    f32 unk_98;
    u8 pad_9C[4];
    f32 unk_A0;
    f32 unk_A4;
    u8 pad_A8[8];
    f32 unk_B0;
    s32 unk_B4;
    u8 pad_B8[8];
    unk_func_00268E40_0 unk_C0;
} unk_func_00268E40_1;

s32 rand(void);

s32 func_00268E40(s32 arg0, unk_func_00268E40_1 *arg1, s32 arg2, s32 arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
    f32 lo;

    arg1->unk_C0 = arg1->unk_38;
    lo = arg4[0];
    arg1->unk_90 = lo + (arg4[1] - lo) * (f32)rand() / 2147483648.0f;
    arg1->unk_94 = 3.1415927f * (f32)rand() / 2147483648.0f;
    arg1->unk_98 = arg4[2];
    arg1->unk_B4 = 0;
    lo = arg5[0];
    arg1->unk_A0 = lo + (arg5[1] - lo) * (f32)rand() / 2147483648.0f;
    arg1->unk_A4 = arg5[2];
    arg1->unk_B0 = *arg6;
    return 1;
}
