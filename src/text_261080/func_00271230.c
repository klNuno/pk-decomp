#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04, unk_08, unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 unk_18;
    u8 pad_19[1];
    u8 unk_1A;
    u8 pad_1B[0x15];
} unk_00271230_0;

typedef struct {
    u8 pad_00[8];
    u32 unk_08, unk_0C;
    u8 pad_10[0x48];
    s32 unk_58, unk_5C;
    u8 pad_60[0x10];
} unk_00271230_1;

typedef struct {
    f32 unk_00, unk_04;
    u8 pad_08[8];
} unk_00271230_2;

extern u8 D_0035F5B4, D_0035FBB4, D_003602F4, D_003602F8;
extern s32 D_003602D4, D_003602F0, D_00360300;
extern f32 D_007A7E50[], D_007A7E54[], D_007A7E58[], D_007A7E5C[];

void func_00167A70(f32);
void func_0016D0E0(unk_00271230_2 *, unk_00271230_2 *, unk_00271230_1 *, f32);
void func_0017C9A0(void);
void func_00271610(unk_00271230_1 *, unk_00271230_0 *);

void func_00271230(s32 arg0, f32 *arg1)
{
    unk_00271230_0 sp40;
    unk_00271230_1 sp70;
    unk_00271230_2 spE0, spF0;

    unk_00271230_0 *temp1 = &sp40;
    unk_00271230_1 *temp0 = &sp70;

    sp70.unk_0C = 0x280;
    sp70.unk_58 = 0;
    sp70.unk_5C = 0;
    sp70.unk_08 = 0x1E0;
    if (arg0 != 0) {
        temp1->unk_00 = arg0;
        temp1->unk_18 = 0xFF;
        temp1->unk_1A = 8;
        temp1->unk_04 = arg1[0];
        temp1->unk_08 = arg1[1];
        temp1->unk_0C = arg1[2];
        temp1->unk_14 = D_00360300;
        D_003602F0 = 0x3F800000;
        D_003602F4 = 0;
        D_0035FBB4 = 0;
        if (temp1->unk_1A & 0x40) {
            D_0035F5B4 = 0;
        } else {
            D_0035F5B4 = 1;
        }
        D_003602F4 = 0;
        D_003602F8 = 0x32;
        D_003602F0 = 0x3F800000;
        spE0.unk_00 = 0.001f * (temp1->unk_04 * (f32)temp0->unk_0C);
        spE0.unk_04 = 0.001f * (temp1->unk_08 * (f32)temp0->unk_08);
        D_007A7E50[0] = D_007A7E58[0] = spE0.unk_00;
        D_007A7E54[0] = D_007A7E5C[0] = spE0.unk_04;
        D_003602D4 = 1;
        func_00271610(temp0, temp1);
        D_003602F8 = 0x32;
        D_003602D4 = 0;
        D_003602F0 = 0x3F800000;
        D_003602F4 = 0;
        {
            f32 temp = 100.0f * D_007A7E50[0];
            temp /= (f32)temp0->unk_0C;
            spE0.unk_00 = temp - 1.0f;
        }
        {
            f32 temp = (f32)temp0->unk_08;
            spE0.unk_04 = ((100.0f * D_007A7E54[0]) / temp) - 1.0f;
        }
        {
            f32 temp = (f32)temp0->unk_0C;
            spF0.unk_00 = 1.0f + ((100.0f * D_007A7E58[0]) / temp);
        }
        {
            f32 temp = (f32)temp0->unk_08;
            spF0.unk_04 = 1.0f + ((100.0f * D_007A7E5C[0]) / temp);
        }
        func_0016D0E0(&spE0, &spF0, temp0, 0.7f * (f32)(u32)temp1->unk_18);
        D_0035FBB4 = 1;
        D_0035F5B4 = 1;
        func_00167A70((f32)(u32)temp1->unk_18);
        func_00271610(temp0, temp1);
        func_0017C9A0();
        D_0035FBB4 = 0;
    }
}
