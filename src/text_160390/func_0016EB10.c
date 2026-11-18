/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0016EB10_0 {
    u8 pad_00[0x60];
} __attribute__((aligned(16))) unk_func_0016EB10_0;

typedef struct unk_func_0016EB10_1 {
    s32 unk_00;
    u8 pad_04[0xC];
    unk_func_0016EB10_0 unk_10;
    u8 pad_70[0x10];
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
} unk_func_0016EB10_1;

typedef struct unk_func_0016EB10_2 {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[0x58];
    unk_func_0016EB10_1 **unk_68;
} unk_func_0016EB10_2;

typedef struct unk_func_0016EB10_3 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0016EB10_3;

typedef struct unk_func_0016EB10_4 {
    u8 pad_00[0x60];
} unk_func_0016EB10_4;

void func_00154B00(unk_func_0016EB10_4 *, unk_func_0016EB10_0 *);
void func_001559E0(unk_func_0016EB10_3 *, unk_func_0016EB10_4 *, unk_func_0016EB10_3 *);

void func_0016EB10(unk_func_0016EB10_2 *arg0, unk_func_0016EB10_3 *arg1, f32 arg2, f32 arg3, f32 arg4) {
    unk_func_0016EB10_0 sp20;
    unk_func_0016EB10_4 sp80;
    unk_func_0016EB10_3 spE0;
    unk_func_0016EB10_1 *temp_v1;
    u32 temp_a2;
    f32 temp_f3;
    f32 var_f4;
    f32 temp_f5;
    f32 temp_f6;

    temp_a2 = arg0->unk_0C;
    temp_f3 = (f32)temp_a2 / 640.0f;
    temp_f5 = 640.0f * arg2;
    temp_f6 = 480.0f * arg3;
    temp_v1 = *arg0->unk_68;
    switch (temp_v1->unk_00) {
    case 0x64:
    case 0x65:
        var_f4 = 0.1f;
        break;
    case 0x66:
    case 0x67:
        var_f4 = (temp_v1->unk_80 * (f32)temp_a2) / 640.0f;
        break;
    default:
        arg1->unk_08 = 0;
        arg1->unk_04 = 0;
        arg1->unk_00 = 0;
        return;
    }
    if (arg4 != 0.0f) {
        spE0.unk_00 = ((temp_f5 - 320.0f) / temp_v1->unk_84) / arg4;
        spE0.unk_04 = ((temp_f6 - 240.0f) / temp_v1->unk_88) / arg4;
        spE0.unk_08 = var_f4 * ((1.0f + arg4) / arg4);
        spE0.unk_08 = spE0.unk_08 / (temp_f3 * temp_f3);
    } else {
        spE0.unk_00 = (temp_f5 - 320.0f) / temp_v1->unk_84;
        spE0.unk_04 = (temp_f6 - 240.0f) / temp_v1->unk_88;
        spE0.unk_08 = 0.0f;
    }
    sp20 = temp_v1->unk_10;
    func_00154B00(&sp80, &sp20);
    func_001559E0(arg1, &sp80, &spE0);
}
