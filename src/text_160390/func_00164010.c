#include "common.h"

typedef struct unk_00164010_0 {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 4;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 2;
    u8 pad_01[0xF];
} unk_00164010_0;

typedef struct unk_00164010_1 {
    u8 unk_00_0 : 4;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 3;
    u8 unk_01_0 : 6;
    u8 unk_01_6 : 1;
    u8 unk_01_7 : 1;
    u8 pad_02[0xE];
} unk_00164010_1;

typedef struct unk_00164010_2 {
    u16 unk_00_0 : 11;
    u16 unk_00_11 : 5;
    u16 unk_02_0 : 11;
    u16 unk_02_11 : 5;
    u8 pad_04[0xC];
} unk_00164010_2;

void func_00285CA0(s32);
void func_00285D00(s32, s32, s32, s32);
void func_00285E30(f32, f32, f32, f32);
void func_00285E40(s32);
s32 func_001653C0(void);
extern s8 D_0035FD7C;
extern u32 D_007B2370[];
extern u32 D_007B24E4[];
extern unk_00164010_0 D_007B0948;
extern unk_00164010_0 D_007B09D4;
extern unk_00164010_0 D_007B08C0;
extern unk_00164010_1 D_007B09D2;
extern unk_00164010_2 D_007B0910;
extern unk_00164010_2 D_007B0914;
extern s32 D_007B0778[];
extern s32 D_007B077C[];
extern u8 D_007B8324[];
extern u8 *D_007B8F58[];

void func_00164010(s32 arg0, s32 arg1, u32 arg2)
{
    if (func_001653C0() != 0) {
        f32 temp0, temp1, temp2;

        temp2 = (f32)((arg2 >> 16) & 0xFF) / 255.0f;
        temp1 = (f32)((arg2 >> 8) & 0xFF) / 255.0f;
        temp0 = (f32)(arg2 & 0xFF) / 255.0f;

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
        func_00285D00(1, 1, 1, 1);
        func_00285E30(temp0, temp1, temp2, 0.0f);
        if (D_0035FD7C != 0) {
            func_00285E30(0.0f, 0.0f, 0.0f, 0.0f);
        }
        func_00285E40((arg0 != 0 ? 0x100 : 0) | (arg1 != 0 ? 0x4000 : 0));
        func_00285D00(1, 1, 1, 0);
    }
}
