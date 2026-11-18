/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
} unk_002548B0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_002548B0_1;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} unk_002548B0_2;

typedef struct {
    u8 pad_00[0xA0];
    unk_002548B0_2 **unk_A0;
    u8 pad_A4[0x28];
    s8 *unk_CC;
    u8 pad_D0[0x38];
    s32 unk_108;
    u8 pad_10C[0xC];
    unk_002548B0_2 *unk_118;
    unk_002548B0_1 *unk_11C;
    u8 pad_120[0x28];
    unk_002548B0_1 unk_148;
    u8 pad_154[0xD4];
    f32 unk_228;
    u8 pad_22C[8];
    f32 unk_234;
    f32 unk_238;
    u8 pad_23C[0x10];
    f32 unk_24C;
    u8 pad_250[0x64];
    s32 unk_2B4;
    u8 pad_2B8[0xC];
    f32 unk_2C4;
} unk_002548B0_3;

typedef struct {
    unk_002548B0_1 unk_00;
    u8 pad_0C[4];
    unk_002548B0_1 unk_10;
    f32 unk_1C;
} unk_002548B0_4;

extern unk_002548B0_0 *D_003601D8;
f32 func_00151360(f32);
unk_002548B0_1 *func_00155EE0(void *);
u8 func_001A95B0(void);
f32 func_001E60E0(f32);
void func_001FD710(unk_002548B0_0 *, u8 *, u8 *, u8 *, s32, s32, s32);
void func_0024D750(unk_002548B0_0 *, s32, s32, s32, unk_002548B0_1 *);
void func_0024D860(unk_002548B0_0 *, s32, s32, s32, f32);
void func_0024E2F0(unk_002548B0_3 *);
s32 func_00257420(unk_002548B0_2 *);
void func_002574D0(unk_002548B0_1 *, s32);

void func_002548B0(unk_002548B0_3 *arg0)
{
    unk_002548B0_4 unk_00;

    unk_00.unk_00.unk_00 = 0.0f;
    unk_00.unk_00.unk_04 = 0.0f;
    unk_00.unk_00.unk_08 = 2.5f;
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x72, D_003601D8->unk_08 + 0x72, D_003601D8->unk_0C + 0x72, 0, 1, 0x80);
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 0, 4);
    func_0024D860(D_003601D8, 0x23E, 0, 1, 5.7f);
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 0, 1);
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 1, 0x10);
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 0, 8);
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 1, 2);
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 1, 0x20);
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 1, 0x40);
    func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x72, D_003601D8->unk_08 + 0x72, D_003601D8->unk_0C + 0x72, 0, 1, 8);
    func_0024D750(D_003601D8, 0x232, 0, 1, &unk_00.unk_00);
    func_0024D860(D_003601D8, 0x237, 0, 1, 0.0f);
    if (func_001A95B0() == 2) {
        unk_00.unk_00.unk_00 = 0.0f;
        unk_00.unk_00.unk_04 = 0.0f;
        unk_00.unk_00.unk_08 = 2.5f;
        func_0024D860(D_003601D8, 0x23B, 0, 1, 26.0f);
    } else {
        func_0024D860(D_003601D8, 0x23B, 0, 1, 36.0f);
    }

    func_0024E2F0(arg0);
    arg0->unk_238 = arg0->unk_234 = arg0->unk_228;
    if (*arg0->unk_CC) {
        arg0->unk_118 = *arg0->unk_A0;
        if (func_00257420(arg0->unk_118)) {
            unk_00.unk_10.unk_00 = arg0->unk_11C->unk_00 - func_00155EE0(arg0->unk_118->unk_24)->unk_00;
            unk_00.unk_10.unk_04 = arg0->unk_11C->unk_04 - func_00155EE0(arg0->unk_118->unk_24)->unk_04;
            unk_00.unk_10.unk_08 = arg0->unk_11C->unk_08 - func_00155EE0(arg0->unk_118->unk_24)->unk_08;
            unk_00.unk_10.unk_08 = 0.0f;
            if (unk_00.unk_10.unk_00 != 0.0f || unk_00.unk_10.unk_04 != 0.0f ||
                unk_00.unk_10.unk_08 != 0.0f) {
                unk_00.unk_1C = func_001E60E0(func_00151360(unk_00.unk_10.unk_08) +
                    (func_00151360(unk_00.unk_10.unk_00) + func_00151360(unk_00.unk_10.unk_04)));
                if (unk_00.unk_1C != 0.0f) {
                    unk_00.unk_1C = 1.0f / unk_00.unk_1C;
                    arg0->unk_148.unk_00 = unk_00.unk_1C * unk_00.unk_10.unk_00;
                    arg0->unk_148.unk_04 = unk_00.unk_1C * unk_00.unk_10.unk_04;
                    arg0->unk_148.unk_08 = unk_00.unk_1C * unk_00.unk_10.unk_08;
                } else {
                    arg0->unk_148 = unk_00.unk_10;
                }
            } else {
                func_002574D0(&arg0->unk_148, arg0->unk_108);
            }
        } else {
            func_002574D0(&arg0->unk_148, arg0->unk_108);
        }
    } else {
        func_002574D0(&arg0->unk_148, arg0->unk_108);
    }
    arg0->unk_2C4 = arg0->unk_24C;
    arg0->unk_2B4 = 1;
}
