#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[0x28];
    f32 unk_38;
    f32 unk_3C;
    f32 unk_40;
    u8 pad_44[4];
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
} unk_func_0026B300_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} __attribute__((aligned(16))) unk_func_0026B300_1;

f32 func_00114D70(f32);
f32 func_00115110(f32);
void func_00167A70(f32);
void func_0017D0E0(s32, unk_func_0026B300_1 *, unk_func_0026B300_1 *,
                   unk_func_0026B300_1 *, unk_func_0026B300_1 *, s32);
extern f32 D_00360238;
extern s32 D_003602C8;

void func_0026B300(unk_func_0026B300_0 *arg0)
{
    unk_func_0026B300_1 sp60;
    unk_func_0026B300_1 sp70;
    unk_func_0026B300_1 sp80;
    unk_func_0026B300_1 sp90;
    f32 temp0, temp1, temp2;
    f32 temp3, temp4;
    s32 i, j;

    temp2 = 5.0f * D_00360238;
    arg0->unk_48 *= 0.5f;
    temp0 = 0.25f * func_00114D70(temp2);
    temp1 = 0.25f * func_00115110(temp2);
    for (i = 0; (f32)i < 12.0f; i++) {
        sp60.unk_00 = arg0->unk_38 + arg0->unk_4C * temp0;
        sp60.unk_04 = arg0->unk_3C + arg0->unk_4C * temp1;
        sp60.unk_08 = arg0->unk_40;
        sp70.unk_00 = arg0->unk_38 + 1.1f * (arg0->unk_50 * temp0);
        sp70.unk_04 = arg0->unk_3C + 1.1f * (arg0->unk_50 * temp1);
        sp70.unk_08 = arg0->unk_40 + 2.0f * arg0->unk_48;
        temp2 += 0.5235988f;
        temp0 = 0.25f * func_00114D70(temp2);
        temp1 = 0.25f * func_00115110(temp2);
        sp80.unk_00 = arg0->unk_38 + arg0->unk_4C * temp0;
        sp80.unk_04 = arg0->unk_3C + arg0->unk_4C * temp1;
        sp80.unk_08 = arg0->unk_40;
        sp90.unk_00 = arg0->unk_38 + 1.1f * (arg0->unk_50 * temp0);
        sp90.unk_04 = arg0->unk_3C + 1.1f * (arg0->unk_50 * temp1);
        sp90.unk_08 = arg0->unk_40 + 2.0f * arg0->unk_48;
        func_0017D0E0(D_003602C8, &sp80, &sp60, &sp70, &sp90, arg0->unk_0C);
    }

    temp2 = -5.654987f * D_00360238;
    temp0 = func_00114D70(temp2);
    temp1 = func_00115110(temp2);
    for (i = 0; (f32)i < 12.0f; i++) {
        sp60.unk_00 = arg0->unk_38 + 0.25f * (arg0->unk_4C * temp0);
        sp60.unk_04 = arg0->unk_3C + 0.25f * (arg0->unk_4C * temp1);
        sp60.unk_08 = arg0->unk_40;
        sp70.unk_00 = arg0->unk_38 + 0.3f * (1.1f * (arg0->unk_50 * temp0));
        sp70.unk_04 = arg0->unk_3C + 0.3f * (1.1f * (arg0->unk_50 * temp1));
        sp70.unk_08 = arg0->unk_40 + arg0->unk_48;
        temp2 += 0.5235988f;
        temp0 = func_00114D70(temp2);
        temp1 = func_00115110(temp2);
        sp80.unk_00 = arg0->unk_38 + 0.25f * (arg0->unk_4C * temp0);
        sp80.unk_04 = arg0->unk_3C + 0.25f * (arg0->unk_4C * temp1);
        sp80.unk_08 = arg0->unk_40;
        sp90.unk_00 = arg0->unk_38 + 0.3f * (1.1f * (arg0->unk_50 * temp0));
        sp90.unk_04 = arg0->unk_3C + 0.3f * (1.1f * (arg0->unk_50 * temp1));
        sp90.unk_08 = arg0->unk_40 + arg0->unk_48;
        func_0017D0E0(D_003602C8, &sp80, &sp60, &sp70, &sp90, arg0->unk_0C);
    }

    temp3 = -1.0f;
    temp4 = 255.0f;
    temp2 = 30.75f * -D_00360238;
    for (j = 0; (f32)j < 5.0f; j++) {
        temp0 = 0.25f * func_00114D70(temp2);
        temp1 = 0.25f * func_00115110(temp2);
        for (i = 0; (f32)i < 12.0f; i++) {
            sp60.unk_00 = arg0->unk_38 + arg0->unk_4C * temp0;
            sp60.unk_04 = arg0->unk_3C + arg0->unk_4C * temp1;
            sp60.unk_08 = 2.3f + (arg0->unk_40 + temp3);
            sp70.unk_00 = arg0->unk_38 + arg0->unk_4C * temp0;
            sp70.unk_04 = arg0->unk_3C + arg0->unk_4C * temp1;
            sp70.unk_08 = arg0->unk_40 + temp3;
            temp2 += 0.5235988f;
            temp0 = 0.25f * func_00114D70(temp2);
            temp1 = 0.25f * func_00115110(temp2);
            temp3 += 0.2f;
            sp80.unk_00 = arg0->unk_38 + arg0->unk_4C * temp0;
            sp80.unk_04 = arg0->unk_3C + arg0->unk_4C * temp1;
            sp80.unk_08 = 2.3f + (arg0->unk_40 + temp3);
            sp90.unk_00 = arg0->unk_38 + arg0->unk_4C * temp0;
            sp90.unk_04 = arg0->unk_3C + arg0->unk_4C * temp1;
            sp90.unk_08 = arg0->unk_40 + temp3;
            func_00167A70(temp4);
            temp4 -= 5.0f;
            if (temp4 <= 0.0f) {
                temp4 = 0.0f;
            }
            func_0017D0E0(D_003602C8, &sp80, &sp60, &sp70, &sp90, arg0->unk_0C);
        }
    }
    arg0->unk_00 |= 1;
}
