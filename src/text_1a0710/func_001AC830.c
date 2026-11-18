/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001AC830_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    u8 pad_14[4];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[8];
    void *unk_28;
    s8 unk_2C;
} unk_001AC830_1;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_001AC830_2;

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_0011D3F8(const s8 *);
f32 func_00133350(s32, f32, f32);
void func_00155E80(s32, unk_001AC830_0 *);
void func_001565B0(s32, unk_001AC830_0 *);
s32 func_001979A0(s32);
s32 func_0019C730(s32);
void *func_001A7060(s32);
void func_001AB680(void *, void *, u16, u16);
u16 func_001AB730(void *);
u8 func_001ABE30(s32);
void func_001ABF90(unk_001AC830_1 *, s32, f32);
const s8 *func_001AC090(unk_001AC830_1 *, s32, const s8 *, u8 *, u8 *);
u16 func_001AC650(unk_001AC830_1 *, s32, const s8 *, f32 *);
s32 func_001ACF40(s32, u16);
extern s32 D_0035F560;
extern s16 D_0035FFB4;

s16 func_001AC830(unk_001AC830_1 *arg0, s32 arg1, const s8 *arg2, s32 arg3, s32 arg4,
                  f32 arg5, unk_001AC830_2 *arg6, s16 arg7)
{
    unk_001AC830_0 unk_A8;
    f32 unk_B8;
    const s8 *unk_BC;
    s32 unk_C0;
    f32 unk_C4;
    s16 unk_C8, unk_CA;
    u8 unk_CC, unk_CD, unk_CE, unk_CF;

    s16 temp0;
    s16 temp1 = 0;
    s32 temp2;
    s32 temp3;
    s16 temp4;
    u8 temp5;
    const s8 *temp6;
    void *temp7;
    s16 temp8;

    unk_C8 = 0;
    temp7 = func_001A7060(*HIE_fn_hGetSuperObjectObject(arg1));
    unk_CA = (s16)func_001AB730(temp7);
    unk_BC = arg2;
    if (arg4 >= 0) {
        unk_C0 = arg4;
    } else {
        unk_C0 = func_0011D3F8(arg2);
    }
    temp6 = arg2 + unk_C0;
    arg2 += arg3;
    func_001ABF90(arg0, arg1, arg5);

    while (arg2 < temp6 && *arg2) {
        temp8 = (s16)func_001AC650(arg0, arg1, arg2, &unk_B8);
        switch (arg0->unk_2C) {
        case 0x72:
            unk_B8 = arg0->unk_00 - unk_B8;
            break;
        case 0x63:
            unk_B8 = (arg0->unk_00 - unk_B8) / 2.0f;
            break;
        default:
            unk_B8 = 0.0f;
            break;
        }

        if (arg6 != 0 && arg7 >= 0) {
            arg6[unk_C8].unk_00 = (s16)(arg2 - unk_BC);
        }

        while (temp8-- && arg2 < temp6) {
            arg2 = func_001AC090(arg0, arg1, arg2, &unk_CC, &unk_CD);
            if (!arg6) {
                if (unk_CC < 0x20) {
                    temp0 = -1;
                } else {
                    temp5 = func_001ABE30(unk_CC);
                    temp0 = temp5 + D_0035FFB4;
                }
                temp4 = (s16)func_001AB730(arg0->unk_28);
                if (temp0 < 0 || temp0 >= temp4) {
                    temp0 = 0;
                } else {
                    func_001AB680(temp7, arg0->unk_28, temp1, temp0);
                    temp3 = func_001ACF40(func_0019C730(*HIE_fn_hGetSuperObjectObject(arg1)), temp1);
                    if (temp3) {
                        temp2 = func_001979A0(temp3);
                        unk_A8.unk_00 = unk_B8 + (arg0->unk_04 + func_00133350(D_0035F560, -arg0->unk_10, arg0->unk_10));
                        unk_A8.unk_04 = 0.0f;
                        unk_A8.unk_08 = arg0->unk_08 + func_00133350(D_0035F560, -arg0->unk_10, arg0->unk_10);
                        func_00155E80(temp2, &unk_A8);
                        if (arg0->unk_1C - 1.0f > 0.0f) {
                            unk_C4 = arg0->unk_1C - 1.0f;
                        } else {
                            unk_C4 = -(arg0->unk_1C - 1.0f);
                        }
                        if (unk_C4 > 0.0001f) {
                            unk_A8.unk_00 = arg0->unk_1C;
                            unk_A8.unk_04 = arg0->unk_1C;
                            unk_A8.unk_08 = arg0->unk_1C;
                            func_001565B0(temp2, &unk_A8);
                        }
                    }
                }
            }
            temp1++;
        }

        if (arg6 != 0 && arg7 >= 0) {
            arg6[unk_C8].unk_02 = (s16)(arg2 - unk_BC);
            arg6[unk_C8].unk_04 = unk_B8;
            arg6[unk_C8].unk_08 = 0.0f;
            arg6[unk_C8].unk_0C = arg0->unk_08;
        }
        if (arg2 < temp6) {
            if (*arg2 == 0x2F) {
                do {
                    arg2 = func_001AC090(arg0, arg1, arg2, &unk_CF, &unk_CE);
                } while (!unk_CE);
            } else {
                arg0->unk_08 -= arg0->unk_18;
                arg0->unk_04 = arg0->unk_0C = 0.0f;
            }
        }
        arg7--;
        unk_C8++;
    }

    while (temp1 < unk_CA) {
        func_001AB680(temp7, arg0->unk_28, temp1, 0);
        temp1++;
    }
    return unk_C8;
}
