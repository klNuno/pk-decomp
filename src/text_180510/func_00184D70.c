/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u32 *unk_10;
} unk_func_00184D70_0;

typedef struct {
    unk_func_00184D70_0 *unk_00;
    u8 pad_04[2];
    s8 unk_06;
    u8 pad_07[1];
    u32 unk_08;
    u8 pad_0C[0x44];
} unk_func_00184D70_1;

typedef struct {
    u8 pad_00[0x88];
    unk_func_00184D70_1 unk_88[];
} unk_func_00184D70_2;

typedef struct {
    u8 pad_00[0x1CC];
    s32 unk_1CC;
} unk_func_00184D70_3;

typedef struct {
    u8 unk_00_0 : 1;
    u8 pad_00_1 : 3;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 1;
} unk_func_00184D70_4;

void func_00285910(s32, s32, s32);
void func_00285AC0(s32);
void func_00285B00(void);
void func_00285BD0(s32, s32);
void func_00285BE0(s32, const void *);
void func_00285BF0(s32, f32);
void func_00285CA0(s32);
void func_00285E70(s32, u32);

extern const u8 D_00333380[];
extern u32 D_0035F4DC;
extern f32 D_0035F4E0;
extern unk_func_00184D70_3 *D_0035FB04;
extern s32 D_0035FB74;
extern s32 D_0035FD50;
extern unk_func_00184D70_0 *D_0035FD58;
extern s32 D_0035FD5C;
extern s32 D_0035FD68;
extern s32 D_0035FD6C;
extern f32 D_0035FD74;
extern s32 D_0035FD80;
extern unk_func_00184D70_4 D_007B08C0[];
extern unk_func_00184D70_4 D_007B0948[];
extern unk_func_00184D70_4 D_007B09D2[];
extern unk_func_00184D70_4 D_007B09D4[];
extern u32 D_007B2370[];
extern u32 D_007B24E8[];
extern s32 D_007B8480[];
extern u8 *D_007B8F58[];

void func_00184D70(unk_func_00184D70_2 *arg0) {
    unk_func_00184D70_0 *temp;
    s32 temp0;
    unk_func_00184D70_0 *temp1;
    unk_func_00184D70_1 *temp2;
    unk_func_00184D70_1 *temp3;

    temp = D_0035FD58;
    temp0 = D_0035FD5C;
    D_0035FD50 = 0;
    D_0035FD58 = NULL;
    D_0035FD5C = 0;
    temp2 = &arg0->unk_88[D_0035FB74];
    temp1 = temp2->unk_00;
    if (temp1 == temp) {
        D_0035FD50 = 1;
    } else {
        u32 *temp4 = temp1->unk_10;
        s32 temp5 = D_007B8480[0];
        s32 temp6 = temp5 == 0 ? 2 : 0x200;

        D_007B24E8[0] |= temp6;
        D_007B08C0[0].unk_00_4 = 1;
        D_007B09D2[0].unk_00_4 = 1;
        func_00285E70(0xDE1, *temp4);
        D_0035FD58 = temp1;
        D_0035FD50 = 0;
    }
    temp3 = &arg0->unk_88[D_0035FB74];
    if ((s8)(temp3 != NULL ? temp3->unk_06 : 0) == 4) {
        D_0035FD80 = 1;
    }
    if (D_0035FD68 == 0) {
        func_00285AC0(0x1702);
        func_00285B00();
        D_0035FD68 = 1;
    }
    if (D_0035F4DC != (temp2->unk_08 & 3)) {
        u32 temp4;

        if (temp2->unk_08 & 1) {
            func_00285910(0xDE1, 0x2802, 0x2901);
        } else {
            func_00285910(0xDE1, 0x2802, 0x2900);
        }
        if (temp2->unk_08 & 2) {
            func_00285910(0xDE1, 0x2803, 0x2901);
        } else {
            func_00285910(0xDE1, 0x2803, 0x2900);
        }
        temp4 = temp2->unk_08 & 3;
        D_0035FD50 = 0;
        D_0035F4DC = temp4;
    }
    if (temp0 != 1) {
        func_00285CA0(1);
        D_007B2370[0] &= ~0x400;
        D_007B0948[0].unk_00_0 = 0;
        D_007B09D4[0].unk_00_5 = 1;
        D_007B2370[0] &= ~0x100;
        D_007B08C0[0].unk_00_6 = 0;
        D_007B09D2[0].unk_00_4 = 1;
    }
    if (D_0035FB04->unk_1CC != 0) {
        if (D_0035FD6C != 1) {
            D_007B2370[0] |= 0x80;
            D_007B08C0[0].unk_00_5 = 1;
            D_007B09D2[0].unk_00_4 = 1;
            *D_007B8F58[0] = 1;
            func_00285BD0(0xB65, 0x2601);
            func_00285BF0(0xB63, D_0035FD74);
            func_00285BF0(0xB64, D_0035F4E0);
            func_00285BE0(0xB66, D_00333380);
            D_0035FD6C = 1;
        }
    } else if (D_0035FD6C != 3) {
        D_007B2370[0] &= ~0x80;
        D_007B08C0[0].unk_00_5 = 0;
        D_007B09D2[0].unk_00_4 = 1;
        *D_007B8F58[0] = 0;
        D_0035FD6C = 3;
    }
    D_0035FD5C = 1;
}
