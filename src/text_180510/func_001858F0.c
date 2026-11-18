#include "common.h"

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[0x44];
} unk_func_001858F0_0;

typedef struct {
    u8 pad_00[0x10];
    u32 *unk_10;
} unk_func_001858F0_1;

typedef struct {
    u8 pad_00[0x4C];
    unk_func_001858F0_1 *unk_4C;
    u8 pad_50[0x38];
    unk_func_001858F0_0 unk_88[];
} unk_func_001858F0_2;

typedef struct {
    u8 pad_00[0x1CC];
    s32 unk_1CC;
} unk_func_001858F0_3;

typedef struct {
    u8 unk_00 : 4;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 1;
    u8 pad_01[8];
} unk_func_001858F0_4;

typedef struct {
    u8 unk_00 : 1;
    u8 pad_01[8];
} unk_func_001858F0_5;

void func_002857E0(s32, u64, s32);
void func_00285910(s32, s32, s32);
void func_00285AC0(s32);
void func_00285B00(void);
void func_00285BD0(s32, s32);
void func_00285BE0(s32, const void *);
void func_00285BF0(s32, f32);
void func_00285CA0(s32);
void func_00285E70(s32, u32);

extern const u8 D_00333390[];
extern u32 D_0035F4DC;
extern f32 D_0035F4E0;
extern unk_func_001858F0_3 *D_0035FB04;
extern s32 D_0035FB74;
extern s32 D_0035FD50;
extern unk_func_001858F0_1 *D_0035FD58;
extern s32 D_0035FD5C;
extern s32 D_0035FD68;
extern s32 D_0035FD6C;
extern f32 D_0035FD74;
extern unk_func_001858F0_4 D_007B08C0;
extern unk_func_001858F0_5 D_007B0948;
extern unk_func_001858F0_4 D_007B09D2;
extern unk_func_001858F0_4 D_007B09D4;
extern u32 D_007B2370[];
extern u32 D_007B24E8[];
extern s32 D_007B8480[];
extern u8 *D_007B8F58[];

void func_001858F0(unk_func_001858F0_2 *arg0) {
    unk_func_001858F0_1 *temp;
    unk_func_001858F0_1 *temp3;
    s32 temp2;
    unk_func_001858F0_0 *temp4;

    temp = D_0035FD58;
    temp2 = D_0035FD5C;
    D_0035FD50 = 0;
    D_0035FD58 = NULL;
    D_0035FD5C = 0;
    temp3 = arg0->unk_4C;
    temp4 = &arg0->unk_88[D_0035FB74];

    if (temp3 == temp) {
        D_0035FD50 = 1;
    } else {
        u32 *temp5 = temp3->unk_10;

        D_007B24E8[0] |= D_007B8480[0] == 0 ? 2 : 0x200;
        D_007B08C0.unk_00_4 = 1;
        D_007B09D2.unk_00_4 = 1;
        func_00285E70(0xDE1, *temp5);
        D_0035FD58 = temp3;
        D_0035FD50 = 0;
    }
    if (D_0035FD68 == 0) {
        func_00285AC0(0x1702);
        func_00285B00();
        D_0035FD68 = 1;
    }
    if (D_0035F4DC != (temp4->unk_08 & 3)) {
        u32 temp6;
        if (temp4->unk_08 & 1) {
            func_00285910(0xDE1, 0x2802, 0x2901);
        } else {
            func_00285910(0xDE1, 0x2802, 0x2900);
        }
        if (temp4->unk_08 & 2) {
            func_00285910(0xDE1, 0x2803, 0x2901);
        } else {
            func_00285910(0xDE1, 0x2803, 0x2900);
        }
        temp6 = temp4->unk_08 & 3;

        D_0035FD50 = 0;
        D_0035F4DC = temp6;
    }
    if (temp2 != 4) {
        D_007B2370[0] |= 0x100;
        D_007B08C0.unk_00_6 = 1;
        D_007B09D2.unk_00_4 = 1;
        func_002857E0(0x42, 0x8000000068UL, 0);
        D_007B2370[0] &= ~0x400;
        D_007B0948.unk_00 = 0;
        D_007B09D4.unk_00_5 = 1;
        if (D_0035FB04->unk_1CC != 0) {
            if (D_0035FD6C != 4) {
                D_007B2370[0] |= 0x80;
                D_007B08C0.unk_00_5 = 1;
                D_007B09D2.unk_00_4 = 1;
                *D_007B8F58[0] = 1;
                func_00285BD0(0xB65, 0x2601);
                func_00285BF0(0xB63, D_0035FD74);
                func_00285BF0(0xB64, D_0035F4E0);
                func_00285BE0(0xB66, D_00333390);
                D_0035FD6C = 4;
            }
        } else if (D_0035FD6C != 3) {
            D_007B2370[0] &= ~0x80;
            D_007B08C0.unk_00_5 = 0;
            D_007B09D2.unk_00_4 = 1;
            *D_007B8F58[0] = 0;
            D_0035FD6C = 3;
        }
        func_00285CA0(0);
    }
    D_0035FD5C = 4;
}
