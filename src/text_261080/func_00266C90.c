#include "common.h"

typedef struct unk_func_00266C90_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
    s32 unk_1C;
    u8 unk_20;
    u8 pad_21[3];
} unk_func_00266C90_0;

s32 func_00127318(f32);
extern unk_func_00266C90_0 D_00630780[];

void func_00266C90(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7) {
    D_00630780[arg1].unk_00 = arg2[0];
    D_00630780[arg1].unk_04 = arg2[1];
    D_00630780[arg1].unk_08 = arg3[0];
    D_00630780[arg1].unk_0C = arg3[1];
    D_00630780[arg1].unk_10 = arg4;
    D_00630780[arg1].unk_14 = arg5;
    D_00630780[arg1].unk_18 = arg6;
    D_00630780[arg1].unk_1C = func_00127318(arg7);
    if (arg0 == 0) {
        D_00630780[arg1].unk_20 = 0xFF;
    } else {
        D_00630780[arg1].unk_20 = arg0 - 1;
    }
}
