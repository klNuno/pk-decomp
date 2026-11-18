/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002539D0_0;

typedef struct {
    u8 pad_00[0x104];
    s32 unk_104;
    s32 unk_108;
    u8 pad_10C[0x3C];
    unk_func_002539D0_0 unk_148;
    u8 pad_154[0x150];
    s32 unk_2A4;
    u8 pad_2A8[0x24];
    s32 unk_2CC;
} unk_func_002539D0_1;

typedef struct {
    u8 pad_00[4];
    u16 *unk_04;
    u16 *unk_08;
    u16 *unk_0C;
} unk_func_002539D0_2;

extern f32 func_00151360(f32);
extern f32 func_001E60E0(f32);
extern void func_001FD710(unk_func_002539D0_2 *, u16 *, u16 *, u16 *, s32, s32, u16);
extern void func_0024D860(unk_func_002539D0_2 *, s32, s32, s32, f32);
extern void func_002574D0(unk_func_002539D0_0 *, s32);
extern void func_002580D0(unk_func_002539D0_0 *, f32, unk_func_002539D0_0 *);
extern unk_func_002539D0_0 D_003370E8[];
extern unk_func_002539D0_2 *D_003601D8;
extern s32 D_003601DC;
extern s32 D_003601F0;
extern u32 D_005AB848[];

void func_002539D0(unk_func_002539D0_1 *arg0)
{
    f32 angle;
    f32 length;
    if (D_003601F0 != 0) {
        s32 temp;
        func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x39,
                      D_003601D8->unk_08 + 0x39, D_003601D8->unk_0C + 0x39,
                      1, 1, 0x80);
        func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x38,
                      D_003601D8->unk_08 + 0x38, D_003601D8->unk_0C + 0x38,
                      1, 0, 4);
        func_0024D860(D_003601D8, 0x23E, 1, 1, 6.0f);
        func_0024D860(D_003601D8, 0x23B, 1, 1, 67.0f);
        arg0->unk_2CC = 0;
        if (D_003601DC > 0) {
            temp = D_003601DC - 12;
        } else {
            temp = D_003601DC + 12;
        }
        angle = (f32)D_005AB848[0] * (-0.000025f * (f32)temp);
        func_002580D0(&arg0->unk_148, angle, D_003370E8);
    } else if (arg0->unk_2A4 == 0) {
        func_002574D0(&arg0->unk_148, arg0->unk_104);
        arg0->unk_148.unk_08 = 0.0f;
        if (0.0f != arg0->unk_148.unk_00 ||
            0.0f != arg0->unk_148.unk_04 ||
            0.0f != arg0->unk_148.unk_08) {
            length = func_001E60E0(func_00151360(arg0->unk_148.unk_08) +
                                  (func_00151360(arg0->unk_148.unk_00) +
                                   func_00151360(arg0->unk_148.unk_04)));
            if (0.0f != length) {
                length = 1.0f / length;
                arg0->unk_148.unk_00 = length * arg0->unk_148.unk_00;
                arg0->unk_148.unk_04 = length * arg0->unk_148.unk_04;
                arg0->unk_148.unk_08 = length * arg0->unk_148.unk_08;
            } else {
                arg0->unk_148 = arg0->unk_148;
            }
        } else {
            func_002574D0(&arg0->unk_148, arg0->unk_108);
        }
    }
}
