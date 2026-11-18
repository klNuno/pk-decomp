#include "common.h"

typedef struct unk_func_002C4990_0 {
    u16 unk_00_0 : 11;
    u16 unk_00_11 : 5;
    u16 unk_02_0 : 11;
    u16 unk_02_11 : 5;
    u16 unk_04_0 : 11;
    u16 unk_04_11 : 5;
    u16 unk_06_0 : 11;
    u16 unk_06_11 : 5;
    u8 pad_08[8];
} unk_func_002C4990_0;

typedef struct unk_func_002C4990_1 {
    u8 unk_00;
    u8 unk_01_0 : 6;
    u8 unk_01_6 : 1;
    u8 unk_01_7 : 1;
    u8 pad_02[0xE];
} unk_func_002C4990_1;

extern s32 D_007B077C[];
extern unk_func_002C4990_0 D_007B0910;
extern unk_func_002C4990_1 D_007B09D2;
extern s32 D_007B2370[];
extern f32 D_007B2460[];
extern f32 D_007B2464[];
extern f32 D_007B2468[];
extern f32 D_007B246C[];
extern u8 D_007B8324[];

void func_002C4990(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 y;

    D_007B2460[0] = arg0;
    D_007B2464[0] = arg1;
    D_007B2468[0] = arg2;
    D_007B246C[0] = arg3;
    if (D_007B2370[0] & 0x20) {
        if (D_007B8324[0] == 1) {
            arg3 >>= 1;
            y = (D_007B077C[0] >> 1) - 1 - (arg1 >> 1);
        } else {
            y = D_007B077C[0] - 1 - arg1;
        }
        D_007B0910.unk_00_0 = arg0;
        D_007B09D2.unk_01_6 = 1;
        D_007B0910.unk_02_0 = arg0 + arg2 - 1;
        D_007B0910.unk_04_0 = y - arg3 + 1;
        D_007B0910.unk_06_0 = y;
        D_007B09D2.unk_01_6 = 1;
        D_007B09D2.unk_01_6 = 1;
        D_007B09D2.unk_01_6 = 1;
    }
}
