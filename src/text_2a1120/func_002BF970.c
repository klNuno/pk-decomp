/* profile: opt_noprop */
#include "common.h"

typedef struct {
    u8 unk_00_0 : 3;
    u8 unk_00_3 : 1;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 3;
    u8 unk_01_0 : 4;
    u8 unk_01_4 : 1;
    u8 unk_01_5 : 3;
    u8 pad_02[7];
} unk_002BF970_0;

typedef struct {
    u8 unk_00_0 : 1;
    u8 unk_00_1 : 7;
    u8 pad_01[8];
} unk_002BF970_1;

typedef struct {
    s16 unk_00;
    u8 unk_02, unk_03;
    u8 pad_04[4];
    s32 unk_08, unk_0C;
} unk_002BF970_2;

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
    unk_002BF970_2 unk_00_2;
    struct {
        u64 unk_00;
        union {
            u64 unk_00;
            u8 unk_00_u8;
        } unk_08;
    } unk_00_3;
} unk_002BF970_3;

extern u64 D_007B08B8[], D_007B08C0[], D_007B0900[], D_007B0920[], D_007B09D0[], D_007B09D8[];
extern unk_002BF970_0 D_007B09D2;
extern unk_002BF970_1 D_007B09D4;
extern unk_002BF970_3 D_007B09E0[], D_007B09F0[];
extern s32 D_007B0E40[];
extern unk_002BF970_3 *D_007B0E44[], *D_007B0E48[], *D_007B8EF4[];
extern u8 D_007B0E4C[];

void func_00297C20(void);
u32 func_002CC5D0(void);
void func_002C1EE0(unk_002BF970_3 *, s32, s32, s32, s32, s32, s32, s32);
void *memcpy(void *, const void *, u64);

void func_002BF970(void)
{
    s32 temp0;
    unk_002BF970_3 *temp1, *temp2, *temp3;
    unk_002BF970_3 sp60;

    temp1 = D_007B8EF4[0];
    temp0 = 0;
    sp60.unk_00_3.unk_08.unk_00 = 0;
    temp2 = temp1 + 1;
    sp60.unk_00_3.unk_00 = 0;
    temp3 = temp2 + 1;
    if (func_002CC5D0() < 6U) {
        func_00297C20();
    }
    *(u64 *)(u32)D_007B09D8 |= *(u64 *)(u32)D_007B09D0;
    if (D_007B09D2.unk_00_3 != 0) {
        ++temp0;
        sp60.unk_00_3.unk_00 = *(u64 *)(u32)D_007B08B8;
        sp60.unk_00_3.unk_08.unk_00_u8 = 0x1A;
        *temp3++ = sp60;
        D_007B09D2.unk_00_3 = 0;
    }
    if (D_007B09D2.unk_00_4 != 0) {
        ++temp0;
        sp60.unk_00_3.unk_00 = *(u64 *)(u32)D_007B08C0;
        sp60.unk_00_3.unk_08.unk_00_u8 = 0x1B;
        *temp3++ = sp60;
        D_007B09D2.unk_00_4 = 0;
    }
    if (D_007B09D4.unk_00_0 != 0) {
        ++temp0;
        sp60.unk_00_3.unk_00 = *(u64 *)(u32)D_007B0920;
        sp60.unk_00_3.unk_08.unk_00_u8 = 0x42;
        *temp3++ = sp60;
        D_007B09D4.unk_00_0 = 0;
    }
    if (D_007B09D2.unk_01_4 != 0) {
        ++temp0;
        sp60.unk_00_3.unk_00 = *(u64 *)(u32)D_007B0900;
        sp60.unk_00_3.unk_08.unk_00_u8 = 0x3D;
        *temp3 = sp60;
        D_007B09D2.unk_01_4 = 0;
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
        unk_002BF970_3 *temp6;

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
