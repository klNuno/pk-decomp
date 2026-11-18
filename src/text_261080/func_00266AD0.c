#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0x2C];
} unk_func_00266AD0_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x2C];
} unk_func_00266AD0_1;

typedef struct {
    u8 unk_00;
    u8 pad_01[0x2F];
} unk_func_00266AD0_2;

s32 func_00127318();
extern s8 D_00360218;
extern unk_func_00266AD0_0 D_00630D20[];
extern unk_func_00266AD0_0 D_00630D24[];
extern unk_func_00266AD0_0 D_00630D28[];
extern unk_func_00266AD0_0 D_00630D2C[];
extern unk_func_00266AD0_0 D_00630D30[];
extern unk_func_00266AD0_1 D_00630D34[];
extern unk_func_00266AD0_1 D_00630D38[];
extern unk_func_00266AD0_2 D_00630D3C[];
extern unk_func_00266AD0_0 D_00630D40[];
extern unk_func_00266AD0_0 D_00630D44[];
extern unk_func_00266AD0_0 D_00630D48[];
extern unk_func_00266AD0_0 D_00630D4C[];
extern f32 D_006332F8[];
extern f32 D_006332FC[];
extern f32 D_00633308[];
extern f32 D_0063330C[];

void func_00266AD0(s32 arg0, s32 arg1, f32 *arg2, f32 *arg3, s32 arg4) {
    if (D_00360218 != 0) {
        D_00630D40[arg1].unk_00 = D_00633308[0];
        D_00630D44[arg1].unk_00 = D_0063330C[0];
        D_00630D48[arg1].unk_00 = D_006332F8[0];
        D_00630D4C[arg1].unk_00 = D_006332FC[0];
        D_00360218 = 0;
    } else {
        D_00630D44[arg1].unk_00 = 0.0f;
        D_00630D40[arg1].unk_00 = 0.0f;
        D_00630D4C[arg1].unk_00 = 1.0f;
        D_00630D48[arg1].unk_00 = 1.0f;
    }
    D_00630D20[arg1].unk_00 = arg2[0];
    D_00630D24[arg1].unk_00 = arg2[1];
    D_00630D28[arg1].unk_00 = arg3[0];
    D_00630D2C[arg1].unk_00 = arg3[1];
    D_00630D30[arg1].unk_00 = arg2[2];
    D_00630D34[arg1].unk_00 = arg4;
    D_00630D38[arg1].unk_00 = func_00127318();
    if (arg0 == 0) {
        D_00630D3C[arg1].unk_00 = 0xFF;
    } else {
        D_00630D3C[arg1].unk_00 = arg0 - 1;
    }
}
