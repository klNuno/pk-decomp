#include "common.h"

typedef struct unk_func_002AB820_0 {
    u8 unk_00_0 : 2;
    u8 unk_00_2 : 2;
    u8 unk_00_4 : 2;
    u8 unk_00_6 : 2;
    u8 pad_01[0xF];
} unk_func_002AB820_0;

typedef struct unk_func_002AB820_1 {
    u8 unk_00_0 : 1;
    u8 pad_00 : 7;
    u8 pad_01[0xF];
} unk_func_002AB820_1;

extern unk_func_002AB820_0 D_007B0920;
extern u8 D_007B0924[];
extern unk_func_002AB820_1 D_007B09D4;

void func_002AB820(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4) {
    D_007B0924[0] = arg4;
    D_007B0920.unk_00_0 = arg0;
    D_007B09D4.unk_00_0 = 1;
    D_007B0920.unk_00_2 = arg1;
    D_007B09D4.unk_00_0 = 1;
    D_007B0920.unk_00_4 = arg2;
    D_007B09D4.unk_00_0 = 1;
    D_007B0920.unk_00_6 = arg3;
    D_007B09D4.unk_00_0 = 1;
    D_007B09D4.unk_00_0 = 1;
}
