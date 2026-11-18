/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00266E40_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00266E40_0;

typedef struct unk_func_00266E40_1 {
    u32 unk_00;
    union {
        s32 unk_00;
        f32 unk_04;
    } unk_04;
    f32 unk_08;
    u8 pad_0C[4];
    unk_func_00266E40_0 unk_10;
    u8 pad_1C[4];
    unk_func_00266E40_0 unk_20;
    u8 pad_2C[4];
    unk_func_00266E40_0 unk_30;
    u8 pad_3C[4];
    unk_func_00266E40_0 unk_40;
    u8 pad_4C[8];
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    u8 pad_60[0xC];
    f32 unk_6C;
    s32 unk_70;
    f32 unk_74;
    u32 unk_78;
    u8 pad_7C[8];
    s32 unk_84;
    u8 pad_88[8];
} unk_func_00266E40_1;

f32 func_00114D70(f32);
f32 func_00115110(f32);
s32 func_00127318(f32);
s32 func_001273A8(f32);
void func_00259170(unk_func_00266E40_0 *, unk_func_00266E40_0 *, unk_func_00266E40_0 *);
void func_002592B0(unk_func_00266E40_0 *, unk_func_00266E40_0 *, unk_func_00266E40_0 *);
u32 func_002674B0(void);
s32 rand(void);

extern f32 D_0035FAC8;
extern s32 D_00360210;
extern f32 D_00360238;
extern s32 D_00360244;
extern f32 D_003602AC;
extern f32 D_003602B0;
extern u32 D_003602B4;
extern u32 D_003602B8;
extern u32 D_005AB800[];
extern unk_func_00266E40_1 D_00633320[];

#define UNK_00(a, b) do {       \
    (a).unk_00 = (b)->unk_00;   \
    (a).unk_04 = (b)->unk_04;   \
    (a).unk_08 = (b)->unk_08;   \
} while (0)

unk_func_00266E40_1 *func_00266E40(u32 arg0, unk_func_00266E40_0 *arg1,
                                  unk_func_00266E40_0 *arg2, s32 arg3,
                                  f32 arg4, f32 arg5, f32 arg6) {
    unk_func_00266E40_1 *temp0;
    u32 temp1;
    u32 temp2 = arg0 & 0x80000;
    u32 temp3;
    f32 temp4;
    u32 temp10;

    if (temp2 != 0 && D_00360210 != 500) {
        if (D_00360244 == 35) {
            return NULL;
        }
        D_00360244++;
    }
    if (D_00360210 == 500) {
        temp1 = func_002674B0();
        if (temp1 == (u32)-1) {
            return NULL;
        }
        temp0 = &D_00633320[temp1];
    } else {
        temp0 = &D_00633320[D_00360210++];
    }

    temp0->unk_00 = arg0;
    UNK_00(temp0->unk_20, arg1);
    UNK_00(temp0->unk_10, arg1);
    if (arg2 != NULL) {
        UNK_00(temp0->unk_30, arg2);
    }
    D_003602B4 = D_003602B8;
    temp10 = D_005AB800[0];
    D_003602B8 = temp10;
    temp4 = 0.001f * (f32)temp10;
    D_00360238 = temp4;
    temp0->unk_08 = temp4;
    temp0->unk_84 = 0;
    temp0->unk_54 = arg5;
    temp0->unk_58 = arg6;
    temp0->unk_78 = D_003602B8;
    temp0->unk_6C = arg4;
    temp0->unk_70 = arg3;
    temp4 = (f32)func_00127318(D_0035FAC8);
    temp0->unk_04.unk_00 = func_001273A8(temp4 + D_003602AC);
    temp0->unk_5C = D_003602B0;
    temp0->unk_74 = 255.0f;
    if (arg0 == 0x10003300 && arg2 != NULL) {
        temp0->unk_74 = arg2->unk_00;
    }
    temp3 = arg0 & 0xFF;
    if ((arg0 & 0xF000) == 0x7000) {
        temp0->unk_74 = 5.0f;
    }
    if (temp3 == 6) {
        temp0->unk_10.unk_00 = -3.5f + (7.0f * (f32)rand()) / 2147483648.0f;
        temp0->unk_10.unk_04 = -3.5f + (7.0f * (f32)rand()) / 2147483648.0f;
        temp0->unk_10.unk_08 = -3.5f + (7.0f * (f32)rand()) / 2147483648.0f;
    }
    if (temp3 == 7 || temp3 == 0xB) {
        if (temp2 != 0) {
            temp0->unk_10.unk_00 = -1.5f + (3.0f * (f32)rand()) / 2147483648.0f;
            temp0->unk_10.unk_08 = 1.0f + (3.0f * (f32)rand()) / 2147483648.0f;
        } else {
            temp0->unk_10.unk_00 = -0.5f + (f32)rand() / 2147483648.0f;
            temp0->unk_10.unk_08 = 1.0f + (f32)rand() / 2147483648.0f;
        }
    }
    if (temp3 == 8) {
        temp0->unk_10.unk_00 = (0.005f * (f32)rand()) / 2147483648.0f;
        temp0->unk_10.unk_04 = -0.05f + (0.1f * (f32)rand()) / 2147483648.0f;
        temp0->unk_10.unk_08 = 5.0f + (f32)rand() / 2147483648.0f;
        temp0->unk_74 = 200.0f;
    }
    if (temp3 == 0x12) {
        temp0->unk_6C = 0.0f;
        temp0->unk_10.unk_00 = (temp0->unk_30.unk_00 - temp0->unk_20.unk_00) / 9.0f;
        temp0->unk_10.unk_04 = (temp0->unk_30.unk_04 - temp0->unk_20.unk_04) / 9.0f;
        temp0->unk_10.unk_08 = (temp0->unk_30.unk_08 - temp0->unk_20.unk_08) / 9.0f;
    }
    if (temp3 == 0xC) {
        unk_func_00266E40_0 temp5, temp6;
        f32 temp7, temp8, temp9;

        UNK_00(temp0->unk_10, arg1);
        func_002592B0(arg2, &temp5, &temp6);
        temp7 = (7.0f * (f32)rand()) / 2147483648.0f;
        temp0->unk_5C = temp7;
        temp0->unk_04.unk_04 = 0.5f + (0.5f * (f32)rand()) / 2147483648.0f;
        temp8 = arg4 * func_00115110(temp7);
        temp9 = arg4 * func_00114D70(temp7);
        temp0->unk_20.unk_00 = (arg1->unk_00 + temp5.unk_00 * temp8) + temp6.unk_00 * temp9;
        temp0->unk_20.unk_04 = (arg1->unk_04 + temp5.unk_04 * temp8) + temp6.unk_04 * temp9;
        temp0->unk_20.unk_08 = (arg1->unk_08 + temp5.unk_08 * temp8) + temp6.unk_08 * temp9;
    }
    if ((arg0 & 0xF0000000) == 0x20000000) {
        func_00259170(&temp0->unk_30, &temp0->unk_10, &temp0->unk_40);
    }
    return temp0;
}
