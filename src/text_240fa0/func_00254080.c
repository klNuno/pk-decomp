/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x108];
    void *unk_108;
    void *unk_10C;
    u8 pad_110[0x10];
    f32 *unk_120;
    u8 pad_124[0x104];
    f32 unk_228;
    u8 pad_22C[0x1C];
    f32 unk_248;
    f32 unk_24C;
    u8 pad_250[0x14];
    void *unk_264;
    u8 pad_268[0x1C];
    s32 unk_284;
    u8 pad_288[0xC];
    s32 unk_294;
    u8 pad_298[0x20];
    s32 unk_2B8;
    u8 pad_2BC[4];
    s32 unk_2C0;
} unk_00254080_0;

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
} unk_00254080_1;

extern unk_00254080_1 *D_003601D8;
extern s32 D_003601EC;
extern f32 D_00617344[];

s32 func_0024DE90(void *, void *);
s32 func_00257690(void *);
void func_001FD710(unk_00254080_1 *, void *, void *, void *, s32, s32, s32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_0024D860(unk_00254080_1 *, s32, s32, s32, f32);

#define FUNC_00254080_0(offset, value) \
    func_001FD710(D_003601D8, D_003601D8->unk_04 + (offset), D_003601D8->unk_08 + (offset), \
                  D_003601D8->unk_0C + (offset), 1, 1, (value))

void func_00254080(unk_00254080_0 *arg0)
{
    f32 temp;

    if (func_0024DE90(arg0->unk_108, arg0->unk_264)) {
        arg0->unk_24C = arg0->unk_248 = D_00617344[0];
        if (!arg0->unk_284) {
            arg0->unk_284 = 1;
            arg0->unk_294 = 1;
        }
    } else {
        arg0->unk_284 = 0;
        if (arg0->unk_2B8 != 0) {
            FUNC_00254080_0(0x72, 0x80);
            arg0->unk_228 = 0.1f;
            D_003601EC = 0;
        } else if (!func_00257690(arg0->unk_10C) && arg0->unk_120[2] < -0.2f &&
                   !func_0024DE90(arg0->unk_108, arg0->unk_264)) {
            FUNC_00254080_0(0x72, 0x80);
            FUNC_00254080_0(0x70, 0x20);
            FUNC_00254080_0(0x70, 2);
            temp = 1.1f * func_001E60E0(func_00151360(arg0->unk_120[2]) +
                                       (func_00151360(arg0->unk_120[0]) + func_00151360(arg0->unk_120[1])));
            func_0024D860(D_003601D8, 0x23B, 1, 1, temp);
            func_0024D860(D_003601D8, 0x241, 1, 1, temp);
        } else {
            arg0->unk_2C0 = 0;
        }
    }
}
