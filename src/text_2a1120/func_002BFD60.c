/* profile: opt_300_noprop */
#include "common.h"

typedef union {
    u64 unk_00;
    struct {
        u8 unk_00_0 : 1;
        u8 unk_00_1 : 1;
        u8 unk_00_2 : 1;
        u8 unk_00_3 : 1;
        u8 unk_00_4 : 1;
        u8 unk_00_5 : 1;
        u8 unk_00_6 : 1;
        u8 unk_00_7 : 1;
        u8 unk_01_0 : 1;
        u8 unk_01_1 : 1;
        u8 unk_01_2 : 1;
        u8 unk_01_3 : 1;
        u8 unk_01_4 : 1;
        u8 unk_01_5 : 1;
        u8 unk_01_6 : 1;
        u8 unk_01_7 : 1;
        u8 pad_02[7];
    } unk_00_2;
} unk_func_002BFD60_0;

typedef struct {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 1;
    u8 unk_00_2 : 1;
    u8 unk_00_3 : 1;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 1;
    u8 unk_00_7 : 1;
    u8 unk_01_0 : 1;
    u8 unk_01_1 : 1;
    u8 unk_01_2 : 1;
    u8 unk_01_3 : 1;
    u8 unk_01_4 : 1;
    u8 unk_01_5 : 1;
    u8 unk_01_6 : 1;
    u8 unk_01_7 : 1;
    u8 pad_02[7];
} unk_func_002BFD60_1;

typedef struct {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 1;
    u8 unk_00_2 : 1;
    u8 unk_00_3 : 1;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 1;
    u8 unk_00_6 : 1;
    u8 unk_00_7 : 1;
    u8 unk_01_0 : 1;
    u8 unk_01_1 : 1;
    u8 unk_01_2 : 1;
    u8 unk_01_3 : 1;
    u8 unk_01_4 : 1;
    u8 unk_01_5 : 1;
    u8 unk_01_6 : 1;
    u8 unk_01_7 : 1;
    u8 unk_02_0 : 1;
    u8 unk_02_1 : 1;
    u8 unk_02_2 : 1;
    u8 unk_02_3 : 1;
    u8 unk_02_4 : 1;
    u8 unk_02_5 : 1;
    u8 unk_02_6 : 2;
    u8 pad_03[6];
} unk_func_002BFD60_2;

typedef struct {
    s16 unk_00;
    u8 unk_02, unk_03;
    u8 pad_04[4];
    s32 unk_08, unk_0C;
} unk_func_002BFD60_3;

typedef union {
    struct {
        u16 unk_00_0 : 15;
        u16 unk_01_7 : 1;
        u8 pad_02[5];
        u8 unk_07_0 : 2;
        u8 unk_07_2 : 2;
        u8 unk_07_4 : 4;
        u8 unk_08_0 : 4;
        u8 unk_08_4 : 4;
    } unk_00;
    unk_func_002BFD60_3 unk_00_2;
    struct {
        u64 unk_00;
        union {
            u64 unk_00;
            u8 unk_00_u8;
        } unk_08;
    } unk_00_3;
} unk_func_002BFD60_4;

extern u64 D_007B0820[], D_007B0828[], D_007B0830[], D_007B0838[];
extern u64 D_007B0840[], D_007B0848[], D_007B0850[], D_007B0858[];
extern u64 D_007B0860[], D_007B0868[], D_007B0870[], D_007B0878[];
extern u64 D_007B0880[], D_007B0888[], D_007B0890[], D_007B0898[];
extern u64 D_007B08A0[], D_007B08A8[], D_007B08B0[], D_007B08B8[];
extern u64 D_007B08C0[], D_007B08C8[], D_007B08D0[], D_007B08D8[];
extern u64 D_007B08E0[], D_007B08E8[], D_007B08F0[], D_007B08F8[];
extern u64 D_007B0900[], D_007B0908[], D_007B0910[], D_007B0918[];
extern u64 D_007B0920[], D_007B0928[], D_007B0930[], D_007B0938[];
extern u64 D_007B0940[], D_007B0948[], D_007B0950[], D_007B0958[];
extern u64 D_007B0960[], D_007B0968[], D_007B0970[], D_007B0978[];
extern u64 D_007B0980[], D_007B0988[], D_007B0990[], D_007B0998[];
extern u64 D_007B09A0[], D_007B09A8[], D_007B09B8[], D_007B09C8[];
extern u64 D_007B09D8[];
extern unk_func_002BFD60_0 D_007B09D0;
extern unk_func_002BFD60_1 D_007B09D2;
extern unk_func_002BFD60_2 D_007B09D4;
extern unk_func_002BFD60_4 D_007B09E0[], D_007B09F0[];
extern s32 D_007B0E40[];
extern unk_func_002BFD60_4 *D_007B0E44[], *D_007B0E48[], *D_007B8EF4[];
extern u8 D_007B0E4C[];

void func_00297C20(void);
u32 func_002CC5D0(void);
void func_002C1EE0(unk_func_002BFD60_4 *, s32, s32, s32, s32, s32, s32, s32);
void *memcpy(void *, const void *, u64);

#define UNK_APPEND(flag, src, index, dest) \
    if ((flag) != 0) { \
        ++temp0; \
        sp60.unk_00_3.unk_00 = *(u64 *)(u32)(src); \
        sp60.unk_00_3.unk_08.unk_00_u8 = (index); \
        *(dest) = sp60; \
        (flag) = 0; \
    }

void func_002BFD60(void) {
    s32 temp0;
    unk_func_002BFD60_4 *temp1, *temp2, *temp3;
    unk_func_002BFD60_4 sp60;

    temp1 = D_007B8EF4[0];
    temp0 = 0;
    sp60.unk_00_3.unk_08.unk_00 = 0;
    temp2 = temp1 + 1;
    sp60.unk_00_3.unk_00 = 0;
    temp3 = temp2 + 1;
    if (func_002CC5D0() < 0x36U) {
        func_00297C20();
    }
    *(u64 *)(u32)D_007B09D8 |= *(u64 *)(u32)&D_007B09D0;
    UNK_APPEND(D_007B09D2.unk_00_4, D_007B08C0, 0x1B, temp3++);
    UNK_APPEND(D_007B09D2.unk_01_4, D_007B0900, 0x3D, temp3++);
    UNK_APPEND(D_007B09D4.unk_00_0, D_007B0920, 0x42, temp3++);
    UNK_APPEND(D_007B09D4.unk_00_5, D_007B0948, 0x47, temp3++);
    UNK_APPEND(D_007B09D4.unk_01_2, D_007B0970, 0x4C, temp3++);
    UNK_APPEND(D_007B09D4.unk_01_4, D_007B0980, 0x4E, temp3++);
    if (*(u64 *)(s32)&D_007B09D0 & 0xFFFFEBDEEFEFFFFFUL) {
        UNK_APPEND(D_007B09D2.unk_00_3, D_007B08B8, 0x1A, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_00_0, D_007B0820, 0x0, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_00_6, D_007B0850, 0x6, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_00_7, D_007B0858, 0x7, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_01_0, D_007B0860, 0x8, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_01_1, D_007B0868, 0x9, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_01_2, D_007B0870, 0xA, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_01_3, D_007B0878, 0xC, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_01_4, D_007B0880, 0xD, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_01_5, D_007B0888, 0x14, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_01_6, D_007B0890, 0x15, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_01_7, D_007B0898, 0x16, temp3++);
        UNK_APPEND(D_007B09D2.unk_00_0, D_007B08A0, 0x17, temp3++);
        UNK_APPEND(D_007B09D2.unk_00_1, D_007B08A8, 0x18, temp3++);
        UNK_APPEND(D_007B09D2.unk_00_2, D_007B08B0, 0x19, temp3++);
        UNK_APPEND(D_007B09D2.unk_00_5, D_007B08C8, 0x1C, temp3++);
        UNK_APPEND(D_007B09D2.unk_00_6, D_007B08D0, 0x22, temp3++);
        UNK_APPEND(D_007B09D2.unk_00_7, D_007B08D8, 0x34, temp3++);
        UNK_APPEND(D_007B09D2.unk_01_0, D_007B08E0, 0x35, temp3++);
        UNK_APPEND(D_007B09D2.unk_01_1, D_007B08E8, 0x36, temp3++);
        UNK_APPEND(D_007B09D2.unk_01_2, D_007B08F0, 0x37, temp3++);
        UNK_APPEND(D_007B09D2.unk_01_3, D_007B08F8, 0x3B, temp3++);
        UNK_APPEND(D_007B09D2.unk_01_6, D_007B0910, 0x40, temp3++);
        UNK_APPEND(D_007B09D2.unk_01_7, D_007B0918, 0x41, temp3++);
        UNK_APPEND(D_007B09D4.unk_00_1, D_007B0928, 0x43, temp3++);
        UNK_APPEND(D_007B09D4.unk_00_2, D_007B0930, 0x44, temp3++);
        UNK_APPEND(D_007B09D4.unk_00_3, D_007B0938, 0x45, temp3++);
        UNK_APPEND(D_007B09D4.unk_00_4, D_007B0940, 0x46, temp3++);
        UNK_APPEND(D_007B09D4.unk_00_6, D_007B0950, 0x48, temp3++);
        UNK_APPEND(D_007B09D4.unk_00_7, D_007B0958, 0x49, temp3++);
        UNK_APPEND(D_007B09D4.unk_01_0, D_007B0960, 0x4A, temp3++);
        UNK_APPEND(D_007B09D4.unk_01_1, D_007B0968, 0x4B, temp3++);
        UNK_APPEND(D_007B09D4.unk_01_3, D_007B0978, 0x4D, temp3++);
        UNK_APPEND(D_007B09D4.unk_01_5, D_007B0988, 0x4F, temp3++);
        UNK_APPEND(D_007B09D4.unk_01_6, D_007B0990, 0x50, temp3++);
        UNK_APPEND(D_007B09D4.unk_01_7, D_007B0998, 0x51, temp3++);
        UNK_APPEND(D_007B09D4.unk_02_0, D_007B09A0, 0x52, temp3++);
        UNK_APPEND(D_007B09D4.unk_02_1, D_007B09A8, 0x53, temp3++);
        UNK_APPEND(D_007B09D4.unk_02_3, D_007B09B8, 0x60, temp3++);
        UNK_APPEND(D_007B09D4.unk_02_5, D_007B09C8, 0x62, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_00_1, D_007B0828, 0x1, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_00_2, D_007B0830, 0x2, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_00_3, D_007B0838, 0x3, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_00_4, D_007B0840, 0x4, temp3++);
        UNK_APPEND(D_007B09D0.unk_00_2.unk_00_5, D_007B0848, 0x5, temp3++);
        UNK_APPEND(D_007B09D2.unk_01_5, D_007B0908, 0x3F, temp3);
    }

    temp2->unk_00_3.unk_00 = 0;
    temp2->unk_00_3.unk_08.unk_00 = 0;
    temp2->unk_00.unk_00_0 = temp0;
    temp2->unk_00.unk_01_7 = 1;
    temp2->unk_00.unk_07_2 = 0;
    temp2->unk_00.unk_07_4 = 1;
    temp2->unk_00.unk_08_0 = 0xE;

    temp1->unk_00_2.unk_00 = temp0 + 1;
    temp1->unk_00_2.unk_02 = 0;
    temp1->unk_00_2.unk_03 = 0x10;
    temp1->unk_00_2.unk_08 = 0x11000000;
    temp1->unk_00_2.unk_0C = (temp0 + 1) | 0x50000000;
    D_007B8EF4[0] += temp0 + 2;
    if (D_007B0E40[0] > 1) {
        s64 temp5;
        unk_func_002BFD60_4 *temp6;

        D_007B0E48[0]->unk_00.unk_01_7 = 1;
        temp5 = D_007B0E40[0];
        temp6 = D_007B8EF4[0];
        temp6->unk_00_2.unk_00 = temp5;
        temp6->unk_00_2.unk_02 = 0;
        temp6->unk_00_2.unk_03 = 0x10;
        temp6->unk_00_2.unk_08 = 0x11000000;
        temp6->unk_00_2.unk_0C = temp5 | 0x50000000;
        memcpy(temp6 + 1, D_007B09E0, (u64)temp5 * 0x10);
        D_007B8EF4[0] += (s32)(temp5 + 1);
    }
    D_007B0E4C[0] = 0;
    D_007B0E40[0] = 1;
    D_007B0E44[0] = D_007B09F0;
    D_007B0E48[0] = D_007B09E0;
    func_002C1EE0(D_007B0E48[0], 1, 0, 0, 0, 0, 0, 0);
}
