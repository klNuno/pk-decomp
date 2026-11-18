/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00248310_0;

typedef struct {
    unk_func_00248310_0 unk_00;
    u8 pad_0C[0xC];
    unk_func_00248310_0 unk_18;
    u8 pad_24[0x10];
} unk_func_00248310_1;

typedef struct {
    u8 pad_00[0x34];
    unk_func_00248310_1 unk_34[];
} unk_func_00248310_2;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_002471B0(unk_func_00248310_2 *, u8, u8);

#define UNK_SUB(a, b) \
    temp0.unk_00 = (a)->unk_00 - (b)->unk_00; \
    temp0.unk_04 = (a)->unk_04 - (b)->unk_04; \
    temp0.unk_08 = (a)->unk_08 - (b)->unk_08;

#define UNK_LEN() func_001E60E0(func_00151360(temp0.unk_08) + \
    (func_00151360(temp0.unk_00) + func_00151360(temp0.unk_04)))

#define UNK_NORM(inv) \
    (inv) = UNK_LEN(); \
    if ((inv) != 0.0f) { \
        (inv) = 1.0f / (inv); \
        temp0.unk_00 = (inv) * temp0.unk_00; \
        temp0.unk_04 = (inv) * temp0.unk_04; \
        temp0.unk_08 = (inv) * temp0.unk_08; \
    } else { \
        temp0 = temp0; \
    }

#define UNK_DOT() (temp0.unk_08 * temp7->unk_08 + \
    (temp0.unk_00 * temp7->unk_00 + temp0.unk_04 * temp7->unk_04))

s32 func_00248310(unk_func_00248310_2 *arg0, s32 arg1) {
    unk_func_00248310_0 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    unk_func_00248310_0 *temp5;
    unk_func_00248310_0 *temp6;
    unk_func_00248310_0 *temp7;
    s32 temp8;
    unk_func_00248310_0 *temp9;

    temp8 = 0;
    temp5 = &arg0->unk_34[arg1].unk_00;
    temp6 = &arg0->unk_34[arg1 + 1].unk_00;
    temp9 = &arg0->unk_34[arg1 + 2].unk_00;
    temp7 = &arg0->unk_34[arg1 + 1].unk_18;
    UNK_SUB(temp5, temp6)
    if (UNK_LEN() < 0.1f) {
        temp8 = 1;
    } else {
        UNK_NORM(temp3)
        temp1 = UNK_DOT();
        UNK_SUB(temp9, temp6)
        if (UNK_LEN() < 0.1f) {
            temp8 = 1;
        } else {
            UNK_NORM(temp4)
            temp2 = UNK_DOT();
            temp8 = temp1 + temp2 >= 0.0f;
        }
    }

    if (temp8 != 0) {
        temp5->unk_00 = temp5->unk_00 + temp6->unk_00;
        temp5->unk_04 = temp5->unk_04 + temp6->unk_04;
        temp5->unk_08 = temp5->unk_08 + temp6->unk_08;
        temp5->unk_00 = 0.5f * temp5->unk_00;
        temp5->unk_04 = 0.5f * temp5->unk_04;
        temp5->unk_08 = 0.5f * temp5->unk_08;
        arg0->unk_34[arg1].unk_18.unk_00 = arg0->unk_34[arg1].unk_18.unk_00 + arg0->unk_34[arg1 + 1].unk_18.unk_00;
        arg0->unk_34[arg1].unk_18.unk_04 = arg0->unk_34[arg1].unk_18.unk_04 + arg0->unk_34[arg1 + 1].unk_18.unk_04;
        arg0->unk_34[arg1].unk_18.unk_08 = arg0->unk_34[arg1].unk_18.unk_08 + arg0->unk_34[arg1 + 1].unk_18.unk_08;
        arg0->unk_34[arg1].unk_18.unk_00 = 0.5f * arg0->unk_34[arg1].unk_18.unk_00;
        arg0->unk_34[arg1].unk_18.unk_04 = 0.5f * arg0->unk_34[arg1].unk_18.unk_04;
        arg0->unk_34[arg1].unk_18.unk_08 = 0.5f * arg0->unk_34[arg1].unk_18.unk_08;
        func_002471B0(arg0, (u8)(arg1 + 1), (u8)(arg1 + 1));
    }
    return temp8;
}
