#include "common.h"

typedef struct unk_func_00173330_0 {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 3;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 1;
    u8 unk_00_7 : 1;
    u8 unk_01_0 : 4;
    u8 unk_01_4 : 1;
    u8 unk_01_5 : 1;
    u8 unk_01_6 : 1;
    u8 unk_01_7 : 1;
    u8 pad_02[0xE];
} unk_func_00173330_0;

typedef struct unk_func_00173330_1 {
    u16 unk_00 : 11;
    u16 unk_00_b : 5;
    u16 unk_02 : 11;
    u16 unk_02_b : 5;
    u16 unk_04 : 11;
    u16 unk_04_b : 5;
    u16 unk_06 : 11;
    u16 unk_06_b : 5;
    u8 pad_08[0x8];
} unk_func_00173330_1;

void func_00173600();
void func_001DA8B0();
void func_00285CA0();
void func_00285D00();
void func_00173FC0();
extern char D_003494C0[];
extern char D_003494D0[];
extern s32 D_0035FC3C;
extern s32 D_0035FC40;
extern s32 D_0035FC44;
extern s32 D_003600D4;
extern s32 D_007B0778[];
extern s32 D_007B077C[];
extern unk_func_00173330_0 D_007B08C0;
extern unk_func_00173330_1 D_007B0910;
extern unk_func_00173330_0 D_007B0948;
extern unk_func_00173330_0 D_007B09D2;
extern unk_func_00173330_0 D_007B09D4;
extern u32 D_007B2370[];
extern u32 D_007B24E4[];
extern u8 D_007B8324[];
extern u8 *D_007B8F58[];

void func_00173330(s32 arg0) {
    if (arg0 != 0 && D_003600D4 != 0) {
        return;
    }
    D_0035FC3C = arg0;
    D_0035FC40 = 0;
    D_0035FC44 = 0;
    if (arg0 != 0) {
        if (D_003600D4 == 0) {
            func_00173600(D_003494C0, D_003494D0);
        }
        func_00285CA0(1);
        D_007B2370[0] &= ~0x400;
        D_007B0948.unk_00_0 = 0;
        D_007B09D4.unk_00_5 = 1;
        D_007B24E4[0] &= ~0x400;
        D_007B2370[0] &= ~0x80;
        D_007B08C0.unk_00_5 = 0;
        D_007B09D2.unk_00_4 = 1;
        *D_007B8F58[0] = 0;
        D_007B2370[0] &= ~0x20;
        D_007B0910.unk_00 = 0;
        D_007B09D2.unk_01_6 = 1;
        D_007B0910.unk_02 = D_007B0778[0] - 1;
        D_007B0910.unk_04 = 0;
        D_007B09D2.unk_01_6 = 1;
        D_007B09D2.unk_01_6 = 1;
        if (D_007B8324[0] == 1) {
            D_007B0910.unk_06 = (D_007B077C[0] >> 1) - 1;
            D_007B09D2.unk_01_6 = 1;
        } else {
            D_007B0910.unk_06 = D_007B077C[0] - 1;
            D_007B09D2.unk_01_6 = 1;
        }
        func_00285D00(1, 1, 1, 1);
    }
    if (arg0 == 0) {
        func_001DA8B0(0);
    } else {
        func_001DA8B0(func_00173FC0);
    }
}
