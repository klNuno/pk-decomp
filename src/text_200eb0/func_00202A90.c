/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00202A90_0;

typedef struct {
    u8 pad_00[0xF8];
    unk_func_00202A90_0 unk_F8;
} unk_func_00202A90_1;

typedef struct {
    u8 pad_00[0x60];
    s32 unk_60;
    f32 unk_64;
    f32 unk_68;
    f32 unk_6C;
    f32 unk_70;
    u8 unk_74;
    u8 unk_75;
} unk_func_00202A90_2;

typedef struct {
    u8 pad_00[0x72];
    u16 unk_72;
} unk_func_00202A90_3;

typedef struct {
    unk_func_00202A90_1 *unk_00;
    u8 pad_04[4];
    unk_func_00202A90_2 *unk_08;
    unk_func_00202A90_3 *unk_0C;
    u8 pad_10[0x10];
    unk_func_00202A90_0 unk_20;
    unk_func_00202A90_0 unk_2C;
    u8 pad_38[0xC];
    unk_func_00202A90_0 unk_44;
} unk_func_00202A90_4;

typedef struct { s32 unk_00, unk_04, unk_08; } unk_func_00202A90_5;

extern s8 D_0035F590;
extern u32 D_005AB848[];
extern f32 D_005AB850[];
extern s16 D_005AD8E4[];
extern s16 D_005AD8EA[];

f32 func_00151360(f32);
f32 func_001E60E0(f32);
s32 func_001FE560(unk_func_00202A90_0 *, unk_func_00202A90_0 *, f32);
s32 func_00201140(unk_func_00202A90_4 *, unk_func_00202A90_0 *, unk_func_00202A90_0 *);
s32 func_002011C0(unk_func_00202A90_4 *, unk_func_00202A90_0 *, s8);
s32 func_002023F0(unk_func_00202A90_4 *, unk_func_00202A90_0 *, s8);
void func_00202620(unk_func_00202A90_4 *);
void func_002034B0(unk_func_00202A90_4 *, unk_func_00202A90_0 *);

#define TEMP_DOT(a, b) ((a).unk_08 * (b).unk_08 + ((a).unk_00 * (b).unk_00 + (a).unk_04 * (b).unk_04))

void func_00202A90(unk_func_00202A90_4 *arg0) {
    unk_func_00202A90_0 temp0, temp1, temp2;
    f32 temp3, temp4, temp5;

    if (arg0->unk_08->unk_60 == 0 || arg0->unk_08->unk_60 == 1) {
        if ((arg0->unk_0C->unk_72 & 8) || (arg0->unk_08->unk_74 & 2)) {
            return;
        }
        arg0->unk_08->unk_68 = arg0->unk_08->unk_68 + (f32)D_005AB848[0];
        if (!(arg0->unk_08->unk_68 < 1000.0f * D_005AD8E4[0] * D_005AB850[0])) {
            arg0->unk_08->unk_68 = 0.0f;
            if (0.0f == arg0->unk_08->unk_6C) {
                if (!(arg0->unk_08->unk_70 <= 10000.0f * D_005AB850[0])) {
                    D_0035F590 = 0;
                } else {
                    temp2.unk_08 = temp2.unk_04 = temp2.unk_00 = 0.0f;
                    ((unk_func_00202A90_5 *)(u32)&temp0)->unk_00 = ((unk_func_00202A90_5 *)(u32)&arg0->unk_00->unk_F8)->unk_00;
                    ((unk_func_00202A90_5 *)(u32)&temp0)->unk_04 = ((unk_func_00202A90_5 *)(u32)&arg0->unk_00->unk_F8)->unk_04;
                    ((unk_func_00202A90_5 *)(u32)&temp0)->unk_08 = ((unk_func_00202A90_5 *)(u32)&arg0->unk_00->unk_F8)->unk_08;
                    temp1.unk_00 = arg0->unk_44.unk_00 - arg0->unk_20.unk_00;
                    temp1.unk_04 = arg0->unk_44.unk_04 - arg0->unk_20.unk_04;
                    temp1.unk_08 = arg0->unk_44.unk_08 - arg0->unk_20.unk_08;
                    if (!func_001FE560(&temp0, &temp2, 0.0001f) && !func_001FE560(&temp1, &temp2, 0.0001f)) {
                        temp3 = func_001E60E0(func_00151360(temp0.unk_08) +
                                              (func_00151360(temp0.unk_00) + func_00151360(temp0.unk_04)));
                        if (0.0f != temp3) {
                            temp3 = 1.0f / temp3;
                            temp0.unk_00 = temp3 * temp0.unk_00;
                            temp0.unk_04 = temp3 * temp0.unk_04;
                            temp0.unk_08 = temp3 * temp0.unk_08;
                        } else {
                            temp0 = temp0;
                        }
                        temp4 = func_001E60E0(func_00151360(temp1.unk_08) +
                                              (func_00151360(temp1.unk_00) + func_00151360(temp1.unk_04)));
                        if (0.0f != temp4) {
                            temp4 = 1.0f / temp4;
                            temp1.unk_00 = temp4 * temp1.unk_00;
                            temp1.unk_04 = temp4 * temp1.unk_04;
                            temp1.unk_08 = temp4 * temp1.unk_08;
                        } else {
                            temp1 = temp1;
                        }
                        if (!(TEMP_DOT(temp1, temp0) <= 0.0f)) {
                            temp5 = TEMP_DOT(temp1, temp0);
                        } else {
                            temp5 = -TEMP_DOT(temp1, temp0);
                        }
                        if (!(temp5 <= 0.9f)) {
                            D_0035F590 = 0;
                        }
                    }
                }
            }

            if (!func_00201140(arg0, &arg0->unk_44, &arg0->unk_20)) {
                arg0->unk_08->unk_6C = 0.0f;
                return;
            }
            arg0->unk_08->unk_6C = arg0->unk_08->unk_6C + (f32)D_005AB848[0];
            if (!(arg0->unk_08->unk_6C <= 1000.0f * D_005AD8EA[0] * D_005AB850[0])) {
                arg0->unk_08->unk_6C = 0.0f;
                func_00202620(arg0);
                return;
            }
            if ((arg0->unk_0C->unk_72 & 8) || (arg0->unk_0C->unk_72 & 0x2000) || (arg0->unk_08->unk_74 & 2)) {
                return;
            }
            if (func_002011C0(arg0, &arg0->unk_2C, 3)) {
                arg0->unk_08->unk_64 = 0.0f;
                arg0->unk_08->unk_6C = 0.0f;
                if (!func_002023F0(arg0, &temp0, 3)) {
                    func_00202620(arg0);
                } else {
                    func_002034B0(arg0, &temp0);
                    arg0->unk_08->unk_75 |= 8;
                }
            }
        }
    }
}
