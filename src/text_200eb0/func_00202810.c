/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00202810_0;

typedef struct {
    u8 pad_00[0x168];
    s8 unk_168;
} unk_func_00202810_1;

typedef struct {
    u8 pad_00[0x60];
    s32 unk_60;
    f32 unk_64;
    u8 pad_68[0xC];
    u8 unk_74;
    u8 unk_75;
} unk_func_00202810_2;

typedef struct {
    u8 pad_00[0x20];
    f32 unk_20;
    u8 pad_24[0x4E];
    u16 unk_72;
} unk_func_00202810_3;

typedef struct {
    unk_func_00202810_1 *unk_00;
    u8 pad_04[4];
    unk_func_00202810_2 *unk_08;
    unk_func_00202810_3 *unk_0C;
    u8 pad_10[0x10];
    unk_func_00202810_0 unk_20;
    unk_func_00202810_0 unk_2C;
    u8 pad_38[0xC];
    unk_func_00202810_0 unk_44;
} unk_func_00202810_4;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
s32 func_002011C0(unk_func_00202810_4 *, unk_func_00202810_0 *, s8);
s32 func_002023F0(unk_func_00202810_4 *, unk_func_00202810_0 *, s8);
void func_00202620(unk_func_00202810_4 *);
void func_002034B0(unk_func_00202810_4 *, unk_func_00202810_0 *);

void func_00202810(unk_func_00202810_4 *arg0) {
    unk_func_00202810_0 unk_40;
    unk_func_00202810_0 unk_50;
    s8 unk_00;

    if (arg0->unk_08->unk_60 == 0 || arg0->unk_08->unk_60 == 1) {
        if ((arg0->unk_0C->unk_72 & 0x1000) ||
            (arg0->unk_0C->unk_72 & 0x2000) ||
            (arg0->unk_08->unk_74 & 2)) {
            return;
        }

        unk_40.unk_00 = arg0->unk_20.unk_00 - arg0->unk_44.unk_00;
        unk_40.unk_04 = arg0->unk_20.unk_04 - arg0->unk_44.unk_04;
        unk_40.unk_08 = arg0->unk_20.unk_08 - arg0->unk_44.unk_08;
        if (!(func_001E60E0(func_00151360(unk_40.unk_08) +
                            (func_00151360(unk_40.unk_00) + func_00151360(unk_40.unk_04))) <=
              arg0->unk_0C->unk_20) ||
            !((((s8)arg0->unk_00->unk_168 & 1) ? 1 : 0) || (arg0->unk_08->unk_74 & 4))) {
            return;
        }
        if (func_002011C0(arg0, &arg0->unk_2C, 3)) {
            arg0->unk_08->unk_64 = 0.0f;
            unk_00 = 3;
            if (arg0->unk_0C->unk_72 & 8) {
                unk_00 &= ~1;
            }
            if (func_002023F0(arg0, &unk_50, unk_00) == 0) {
                func_00202620(arg0);
            } else {
                func_002034B0(arg0, &unk_50);
                arg0->unk_08->unk_75 |= 8;
            }
        }
    }
}
