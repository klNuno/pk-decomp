#include "common.h"

typedef struct unk_func_00268CC0_0 {
    s32 unk_00;
    u8 pad_04[0x34];
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    u8 pad_44[0x1C];
    f32 unk_60;
    f32 unk_64;
    u8 pad_68[0x28];
    f32 unk_90;
    f32 unk_94;
    f32 unk_98;
    u8 pad_9C[4];
    f32 unk_A0;
    f32 unk_A4;
    u8 pad_A8[8];
    f32 unk_B0;
    f32 unk_B4;
    u8 pad_B8[8];
    f32 unk_C0;
    f32 unk_C4;
} unk_func_00268CC0_0;

s32 func_00127318(f32);
f32 func_00115110(f32);
f32 func_00114D70(f32);
extern f32 D_00360240;

void func_00268CC0(unk_func_00268CC0_0 *arg0) {
    arg0->unk_B0 -= D_00360240;
    if (arg0->unk_B0 < 0.0f) {
        arg0->unk_B4 = 2.0f;
    }
    switch (func_00127318(arg0->unk_B4)) {
    case 1:
        break;
    case 0:
        arg0->unk_64 = arg0->unk_60 = arg0->unk_60 + 0.3f * D_00360240;
        if (arg0->unk_60 > arg0->unk_98) {
            arg0->unk_60 = arg0->unk_64 = arg0->unk_98;
            arg0->unk_B4 = 1.0f;
        }
        break;
    case 2:
        arg0->unk_64 = arg0->unk_60 = arg0->unk_60 - 0.3f * D_00360240;
        if (arg0->unk_60 < 0.0f) {
            arg0->unk_00 |= 1;
        }
        break;
    }
    arg0->unk_94 += D_00360240 * arg0->unk_A4;
    arg0->unk_38 = arg0->unk_C0 + arg0->unk_90 * func_00115110(arg0->unk_94);
    arg0->unk_3C = arg0->unk_C4 + arg0->unk_90 * func_00114D70(arg0->unk_94);
    arg0->unk_40 += D_00360240 * arg0->unk_A0;
}
