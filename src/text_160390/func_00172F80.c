#include "common.h"

typedef struct unk_00172F80_0 {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 4;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 2;
    u8 pad_01[0xF];
} unk_00172F80_0;

typedef struct unk_00172F80_1 {
    u8 unk_00_0 : 4;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 3;
    u8 unk_01_0 : 6;
    u8 unk_01_6 : 1;
    u8 unk_01_7 : 1;
    u8 pad_02[0xE];
} unk_00172F80_1;

typedef struct unk_00172F80_2 {
    u16 unk_00_0 : 11;
    u16 unk_00_11 : 5;
    u16 unk_02_0 : 11;
    u16 unk_02_11 : 5;
    u8 pad_04[0xC];
} unk_00172F80_2;

void func_00285CA0(s32);
void func_00285D00(s32, s32, s32, s32);
void func_00285C10(void);
void func_002CCB60(void);
extern u32 D_007B2370[];
extern u32 D_007B24E4[];
extern unk_00172F80_0 D_007B0948;
extern unk_00172F80_0 D_007B09D4;
extern unk_00172F80_0 D_007B08C0;
extern unk_00172F80_1 D_007B09D2;
extern unk_00172F80_2 D_007B0910;
extern unk_00172F80_2 D_007B0914;
extern s32 D_007B0778[];
extern s32 D_007B077C[];
extern u8 D_007B8324[];
extern u8 *D_007B8F58[];

void func_00119548(s32);
s32 func_00133900(void);
void func_001749B0(char *);
void func_00175010(s32);
void func_001753D0(char *);
void func_00175590(char *);
void func_00285CC0(s32, s32);

extern char D_00349450[], D_00349460[], D_00349470[], D_00349480[];
extern char D_00349490[], D_003494A0[], D_003494B0[];
extern s32 D_0035F4B4, D_0035F4B8, D_0035FC34, D_0035FC38;

void func_00172F80(s32 arg0) {
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
    D_007B0910.unk_00_0 = 0;
    D_007B09D2.unk_01_6 = 1;
    D_007B0910.unk_02_0 = D_007B0778[0] - 1;
    D_007B0914.unk_00_0 = 0;
    D_007B09D2.unk_01_6 = 1;
    D_007B09D2.unk_01_6 = 1;
    if (D_007B8324[0] == 1) {
        D_007B0914.unk_02_0 = (D_007B077C[0] >> 1) - 1;
        D_007B09D2.unk_01_6 = 1;
    } else {
        D_007B0914.unk_02_0 = D_007B077C[0] - 1;
        D_007B09D2.unk_01_6 = 1;
    }
    func_00285D00(1, 1, 1, 0);
    if (arg0 == 0) {
        if (D_0035F4B4 >= 0) {
            func_00285CC0(4, (s32)&D_0035F4B4);
            D_0035F4B4 = -1;
            func_00119548(D_0035FC34);
        }
        if (D_0035F4B8 >= 0) {
            func_00285CC0(4, (s32)&D_0035F4B8);
            D_0035F4B8 = -1;
            func_00119548(D_0035FC38);
        }
        func_001749B0(D_00349450);
        switch (func_00133900()) {
        case 0:
            func_00175590(D_00349460);
            break;
        case 1:
            func_00175590(D_00349470);
            break;
        case 2:
            func_00175590(D_00349480);
            break;
        case 3:
            func_00175590(D_00349490);
            break;
        case 4:
            func_00175590(D_003494A0);
            break;
        }
        func_001753D0(D_003494B0);
    }

    if (arg0 == 3) {
        func_001749B0(D_00349450);
    }
    if (arg0 == 2) {
        func_00175010(0);
    } else {
        func_00175010(1);
    }
    func_00285C10();
    func_002CCB60();
}
