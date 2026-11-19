/* profile: opt */
#include "common.h"

typedef struct unk_func_0016E6E0_0 {
    u8 pad_00[8];
    f32 unk_08;
    f32 unk_0C;
} unk_func_0016E6E0_0;

typedef struct unk_func_0016E6E0_1 {
    u8 pad_00[8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x28];
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x10];
    s32 unk_58;
    s32 unk_5C;
} unk_func_0016E6E0_1;

typedef struct unk_func_0016E6E0_2 {
    s32 unk_00;
    u8 pad_04[0x6C];
    f32 unk_70;
    f32 unk_74;
    u8 pad_78[8];
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
    u8 pad_8C[4];
    f32 unk_90;
    f32 unk_94;
    u8 pad_98[4];
    f32 unk_9C;
    f32 unk_A0;
    f32 unk_A4;
    s32 unk_A8;
    f32 unk_AC;
    s32 unk_B0;
    f32 unk_B4;
    s32 unk_B8;
    f32 unk_BC;
    s32 unk_C0;
    s32 unk_C4;
    f32 unk_C8;
    f32 unk_CC;
    s32 unk_D0;
    s32 unk_D4;
    f32 unk_D8;
    f32 unk_DC;
    s32 unk_E0;
} unk_func_0016E6E0_2;

f32 func_00115200(f32);
f32 func_001E60E0(f32);
extern f32 D_0035F494;
extern f32 D_0035F498;

void func_0016E6E0(unk_func_0016E6E0_0 *arg0, unk_func_0016E6E0_1 *arg1, unk_func_0016E6E0_2 *arg2) {
    f32 temp1;
    f32 temp_f20;
    f32 temp_f21;
    f32 tA;
    f32 temp_f22;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;

    temp1 = (f32)arg1->unk_0C;
    temp_f21 = temp1 * arg0->unk_08;
    temp_f20 = (f32)arg1->unk_08;
    temp_f22 = (temp_f20 * arg0->unk_0C) / temp_f21;

    arg2->unk_90 = (f32)arg1->unk_58 + 0.5f * temp1;
    arg2->unk_94 = (f32)arg1->unk_5C + 0.5f * temp_f20;
    switch (arg2->unk_00) {
    case 0x67: {
        arg2->unk_9C = 1.0f / func_00115200(0.5f * arg2->unk_70);
        arg2->unk_A0 = (0.75f * (1.0f / func_00115200(0.5f * arg2->unk_74))) / temp_f22;
        arg2->unk_80 = 0.5f * temp_f21 * arg2->unk_9C;
        arg2->unk_84 = -(1.0f / arg0->unk_08);
        arg2->unk_88 = -(temp_f20 / ((2.0f * arg2->unk_80) / arg2->unk_A0));

        tA = (f32)(s32)((arg1->unk_44 - arg1->unk_58) - (arg1->unk_0C >> 1));
        temp2 = func_00115200(0.5f * (1.4f * arg2->unk_70));
        temp_f20 = (f32)(arg1->unk_0C >> 1) / temp2;
        temp3 = temp_f20 * temp_f20;
        temp4 = 1.0f / func_001E60E0(temp3 + tA * tA);
        arg2->unk_A4 = -temp_f20 * temp4;
        arg2->unk_A8 = 0;
        arg2->unk_AC = -tA * temp4;

        tA = (f32)(s32)((arg1->unk_0C >> 1) - (arg1->unk_40 - arg1->unk_58));
        temp4 = 1.0f / func_001E60E0(temp3 + tA * tA);
        arg2->unk_B4 = temp_f20 * temp4;
        arg2->unk_B8 = 0;
        arg2->unk_BC = -tA * temp4;

        temp3 = (f32)(s32)((arg1->unk_3C - arg1->unk_5C) - (arg1->unk_08 >> 1));
        temp2 = func_00115200(0.5f * ((arg2->unk_74 * temp_f22) / 0.75f));
        temp_f20 = (f32)(arg1->unk_08 >> 1) / temp2;
        temp_f22 = temp_f20 * temp_f20;
        temp4 = 1.0f / func_001E60E0(temp_f22 + temp3 * temp3);
        arg2->unk_D4 = 0;
        arg2->unk_D8 = -temp_f20 * temp4;
        arg2->unk_DC = -temp3 * temp4;

        temp3 = (f32)(s32)((arg1->unk_08 >> 1) - (arg1->unk_38 - arg1->unk_5C));
        temp4 = 1.0f / func_001E60E0(temp_f22 + temp3 * temp3);
        arg2->unk_C4 = 0;
        arg2->unk_C8 = temp_f20 * temp4;
        arg2->unk_CC = -temp3 * temp4;
        arg2->unk_D0 = 0;
        arg2->unk_E0 = 0;
        arg2->unk_C0 = 0;
        arg2->unk_B0 = 0;
        break;
    }
    }
    D_0035F494 = 1.3333334f;
    D_0035F498 = (0.75f * (180.0f * arg2->unk_70)) / 3.1415927f;
}
