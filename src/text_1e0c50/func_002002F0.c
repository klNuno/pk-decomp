/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_002002F0_0;

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
    u8 pad_6C[6];
    u16 unk_72;
} unk_002002F0_1;

typedef struct {
    u8 pad_00[0xC];
    unk_002002F0_1 *unk_0C;
    u8 pad_10[0xC];
    s32 unk_1C;
} unk_002002F0_2;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_002002F0_3;

unk_002002F0_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00127318(f32);
s32 func_0012C650(unk_002002F0_0 *, unk_002002F0_0 *, s32);
s32 func_0019E900(s32);
s32 func_0019E920(s32);
s32 func_0019E940(s32);
s32 func_0019E970(s32);
s32 func_001BE470(s32);
s32 func_00200020(s32, s32);
s32 func_002000F0(unk_002002F0_0 *, unk_002002F0_0 *, s32, s32, s32);
extern s8 D_0035F590;

s32 func_002002F0(unk_002002F0_2 *arg0, unk_002002F0_0 *arg1, unk_002002F0_0 *arg2, s32 arg3)
{
    unk_002002F0_0 unk_A0, unk_B0, unk_C0;
    s32 unk_D0, unk_D4, unk_D8;
    s32 unk_DC, unk_E0, unk_E4, unk_E8, unk_EC, unk_F0;
    s32 unk_F4, unk_F8, unk_FC;
    s32 temp0, temp1, temp2, temp3, temp4;
    s8 temp5;
    s32 temp6, temp7, temp8;

    if (arg1->unk_00 == arg2->unk_00 && arg1->unk_04 == arg2->unk_04 && arg1->unk_08 == arg2->unk_08) {
        return 0;
    }

    if (arg0->unk_0C->unk_72 & 0x10) {
        unk_F4 = 0;
    } else {
        unk_F4 = 1;
    }
    temp5 = (s8)unk_F4;
    unk_B0 = *arg1;
    unk_C0 = *arg2;
    unk_DC = func_00127318(1000.0f * unk_B0.unk_00);
    unk_B0.unk_00 = (f32)unk_DC / 1000.0f;
    unk_E0 = func_00127318(1000.0f * unk_B0.unk_04);
    unk_B0.unk_04 = (f32)unk_E0 / 1000.0f;
    unk_E4 = func_00127318(1000.0f * unk_B0.unk_08);
    unk_B0.unk_08 = (f32)unk_E4 / 1000.0f;
    unk_E8 = func_00127318(1000.0f * unk_C0.unk_00);
    unk_C0.unk_00 = (f32)unk_E8 / 1000.0f;
    unk_EC = func_00127318(1000.0f * unk_C0.unk_04);
    unk_C0.unk_04 = (f32)unk_EC / 1000.0f;
    unk_F0 = func_00127318(1000.0f * unk_C0.unk_08);
    unk_C0.unk_08 = (f32)unk_F0 / 1000.0f;

    temp4 = arg0->unk_1C;
    unk_D4 = HIE_fn_hGetSuperObjectObject(temp4)->unk_20;
    temp3 = temp6 = func_001BE470(unk_D4);
    unk_D8 = arg0->unk_0C->unk_68;
    if (unk_D8 != 0) {
        unk_D0 = HIE_fn_hGetSuperObjectObject(unk_D8)->unk_20;
        temp3 = func_001BE470(unk_D0);
    }

    unk_A0.unk_00 = unk_C0.unk_00 - unk_B0.unk_00;
    unk_A0.unk_04 = unk_C0.unk_04 - unk_B0.unk_04;
    unk_A0.unk_08 = unk_C0.unk_08 - unk_B0.unk_08;

    if (D_0035F590 && func_0012C650(&unk_B0, &unk_A0, temp3)) {
        return 1;
    }
    if (temp5 && func_002000F0(&unk_B0, &unk_C0, temp3, temp4, arg3)) {
        return 1;
    }
    if (temp3 != temp6) {
        if (D_0035F590 && func_0012C650(&unk_B0, &unk_A0, temp6)) {
            return 1;
        }
        if (temp5 && func_002000F0(&unk_B0, &unk_C0, temp6, temp4, arg3)) {
            return 1;
        }
    }

    temp2 = func_0019E970(temp3);
    unk_F8 = temp1 = func_0019E940(temp3);
    (void)unk_F8;
    while (temp2 > 0) {
        temp0 = func_0019E920(temp1);
        if (temp0 != temp6) {
            if (D_0035F590 && func_0012C650(&unk_B0, &unk_A0, temp0)) {
                return 1;
            }
            if (temp5 && func_002000F0(&unk_B0, &unk_C0, temp0, temp4, arg3)) {
                return 1;
            }
        }
        temp2--;
        temp7 = temp1 = func_0019E900(temp1);
        (void)temp7;
    }

    if (temp3 != temp6) {
        temp2 = func_0019E970(temp6);
        unk_FC = temp1 = func_0019E940(temp6);
        (void)unk_FC;
        while (temp2 > 0) {
            temp0 = func_0019E920(temp1);
            if (func_00200020(temp3, temp0) == 0 && temp0 != temp3) {
                if (D_0035F590 && func_0012C650(&unk_B0, &unk_A0, temp0)) {
                    return 1;
                }
                if (temp5 && func_002000F0(&unk_B0, &unk_C0, temp0, temp4, arg3)) {
                    return 1;
                }
            }
            temp2--;
            temp8 = temp1 = func_0019E900(temp1);
            (void)temp8;
        }
    }
    return 0;
}
