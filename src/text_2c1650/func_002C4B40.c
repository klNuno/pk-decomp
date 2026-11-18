#include "common.h"

typedef struct unk_func_002C4B40_0 {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 7;
    u8 pad_01[0xF];
} unk_func_002C4B40_0;

typedef struct unk_func_002C4B40_1 {
    u8 unk_00;
    u8 unk_01_0 : 4;
    u8 unk_01_4 : 1;
    u8 unk_01_5 : 3;
    u8 pad_02[0xE];
} unk_func_002C4B40_1;

extern s8 D_007B24BC[];
extern unk_func_002C4B40_0 D_007B0984;
extern unk_func_002C4B40_1 D_007B09D4;

void func_002C4B40(s32 arg0) {
    D_007B24BC[0] = arg0;
    D_007B0984.unk_00_0 = !arg0;
    D_007B09D4.unk_01_4 = 1;
}
