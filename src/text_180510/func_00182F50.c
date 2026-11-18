#include "common.h"

typedef struct unk_func_00182F50_0 {
    u8 unk_00_0 : 4;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 1;
    u8 unk_00_7 : 1;
    u8 pad_01[0xF];
} unk_func_00182F50_0;

typedef struct unk_func_00182F50_1 {
    u8 pad_00[0x2];
    u8 unk_02_0 : 1;
    u8 unk_02_1 : 2;
    u8 unk_02_3 : 5;
    u8 pad_03[0xD];
} unk_func_00182F50_1;

typedef struct {
    s32 unk_00;
} unk_func_00182F50_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_00182F50_2 *unk_10;
} unk_func_00182F50_3;

typedef struct {
    u8 pad_00[0x4C];
    unk_func_00182F50_3 *unk_4C;
} unk_func_00182F50_4;

void func_0016B7A0(void);
void func_00182C10(void);
void func_00189390(void);
void func_002857E0(s32, s64, s32);
void func_00285CA0(s32);
void func_00285E70(s32, s32);
extern unk_func_00182F50_4 *D_0035FD34;
extern u8 D_0035FD38;
extern unk_func_00182F50_0 D_007B08C0;
extern unk_func_00182F50_1 D_007B0948;
extern unk_func_00182F50_0 D_007B09D2;
extern unk_func_00182F50_0 D_007B09D4;
extern u32 D_007B2370[];
extern u32 D_007B24E8[];
extern s32 D_007B8480[];

void func_00182F50(void) {
    if (D_0035FD34 != 0) {
        if (D_0035FD38 == 0) {
            func_00182C10();
        }
        func_0016B7A0();
        func_00189390();
        D_007B24E8[0] |= D_007B8480[0] == 0 ? 2 : 0x200;
        D_007B08C0.unk_00_4 = 1;
        D_007B09D2.unk_00_4 = 1;
        func_00285E70(0xDE1, D_0035FD34->unk_4C->unk_10->unk_00);
        D_007B2370[0] |= 0x100;
        D_007B08C0.unk_00_6 = 1;
        D_007B09D2.unk_00_4 = 1;
        D_007B0948.unk_02_0 = 1;
        D_007B2370[0] &= ~0x800;
        D_007B09D4.unk_00_5 = 1;
        D_007B0948.unk_02_1 = 1;
        D_007B09D4.unk_00_5 = 1;
        func_00285CA0(0);
        func_002857E0(0x42, 0x8000000044, 0);
    }
}
