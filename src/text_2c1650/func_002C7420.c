#include "common.h"

typedef struct unk_func_002C7420_0 {
    u8 pad_00[0x6];
    s16 unk_06;
    u8 pad_08[0x18];
} unk_func_002C7420_0;

typedef struct unk_func_002C7420_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x14];
} unk_func_002C7420_1;

typedef struct unk_func_002C7420_2 {
    u8 unk_00_0 : 1;
} unk_func_002C7420_2;

typedef struct unk_func_002C7420_3 {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 1;
    u8 unk_00_2 : 1;
    u8 unk_00_3 : 1;
} unk_func_002C7420_3;

void func_0011B418();
void func_00100290(s32);
void func_00100558(unk_func_002C7420_0 *);
void func_00100380(unk_func_002C7420_0 *);
void func_00322730(void);
void func_002C79C0(void *);
void *memset(void *, s32, u32);
void func_002C1CD0(void);
void func_002C4900(s32);
void func_002C4BA0(s32);
s32 func_0031A320(unk_func_002C7420_1 *);
extern char D_0035AA40[];
extern char D_0035AA70[];
extern char D_0035AAA0[];
extern char D_0035AAA8[];
extern char D_0035AAB0[];
extern s32 D_003604A8;
extern u8 D_007B0820[];
extern unk_func_002C7420_2 D_007B08B8[];
extern unk_func_002C7420_3 D_007B09D2[];
extern u8 D_007B2370[];

void func_002C7420(void) {
    unk_func_002C7420_0 sp10;
    unk_func_002C7420_1 sp30;

    func_0011B418(D_0035AA40);
    func_0011B418(D_0035AA70, D_0035AAA0, D_0035AAA8);
    func_0011B418(D_0035AAB0);
    func_00100290(1);
    func_00100558(&sp10);
    sp10.unk_06 = 0x100;
    func_00100380(&sp10);
    func_00322730();
    func_002C79C0(D_007B2370);
    memset(D_007B0820, 0, 0x630);
    func_002C1CD0();
    D_007B08B8[0].unk_00_0 = 0;
    D_007B09D2[0].unk_00_3 = 1;
    func_002C4900(0x1D01);
    func_002C4BA0(0x201);
    sp30.unk_08 = 0;
    sp30.unk_04 = 0;
    D_003604A8 = func_0031A320(&sp30);
}
