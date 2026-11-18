#include "common.h"

typedef struct unk_func_00266930_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C;
    u8 pad_1D[3];
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
} unk_func_00266930_0;

extern unk_func_00266930_0 D_00630D20[];
s32 func_00127318(f32);

void func_00266930(f32 *arg0, f32 *arg1, s32 arg2, f32 *arg3, f32 *arg4, f32 arg5) {
    s32 i;
    f32 x;

    x = arg0[0];
    i = func_00127318(arg5);
    D_00630D20[i].unk_00 = x;
    D_00630D20[i].unk_04 = arg0[1];
    D_00630D20[i].unk_08 = arg1[0];
    D_00630D20[i].unk_0C = arg1[1];
    D_00630D20[i].unk_10 = arg0[2] - 1.5707964f;
    D_00630D20[i].unk_14 = arg2;
    D_00630D20[i].unk_18 = func_00127318(arg1[2]);
    D_00630D20[i].unk_1C = 0xFF;
    if (D_00630D20[i].unk_0C < 0.0f) {
        D_00630D20[i].unk_18 = 0;
    }
    D_00630D20[i].unk_20 = arg3[0];
    D_00630D20[i].unk_24 = arg3[1];
    D_00630D20[i].unk_28 = arg4[0];
    D_00630D20[i].unk_2C = arg4[1];
}
