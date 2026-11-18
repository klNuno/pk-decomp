/* profile: o0_p */
#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08; } unk_func_002522B0_0;

typedef struct {
    u8 pad_00[4];
    u8 *unk_04, *unk_08, *unk_0C;
} unk_func_002522B0_1;

typedef struct {
    u8 pad_00[0xD0];
    s8 *unk_D0;
    u8 pad_D4[0x30];
    void *unk_104, *unk_108;
    u8 pad_10C[0x3C];
    unk_func_002522B0_0 unk_148;
    u8 pad_154[0x110];
    s32 unk_264;
    u8 pad_268[0x28];
    s32 unk_290, unk_294, unk_298;
    u8 pad_29C[8];
    s32 unk_2A4;
    u8 pad_2A8[0x24];
    u32 unk_2CC;
} unk_func_002522B0_2;

void func_001FD710(unk_func_002522B0_1 *, u8 *, u8 *, u8 *, s32, s32, u16);
void func_0024D860(unk_func_002522B0_1 *, s32, s32, s32, f32);
s32 func_0024DE90(void *, s32);
void func_002574D0(unk_func_002522B0_0 *, void *);
f32 func_002576F0(unk_func_002522B0_0 *, unk_func_002522B0_0 *);

extern unk_func_002522B0_1 *D_003601D8;
extern s32 D_003601EC, D_003601F0, D_003601F4, D_003601F8;
extern u32 D_005AB800[];

void func_002522B0(unk_func_002522B0_2 *arg0) {
    unk_func_002522B0_0 sp18;
    f32 sp28;
    f32 sp2C;

    if (D_003601F8 || D_003601F4 || D_003601F0 || D_003601EC) {
        arg0->unk_2CC = D_005AB800[0];
    } else if (D_005AB800[0] - arg0->unk_2CC > 2000U || *arg0->unk_D0) {
        arg0->unk_2CC = D_005AB800[0];
        arg0->unk_294 = arg0->unk_298 = 1;
    } else if (func_0024DE90(arg0->unk_108, arg0->unk_264)) {
        func_002574D0(&arg0->unk_148, arg0->unk_108);
    }

    if (arg0->unk_294) {
        if (!arg0->unk_290) {
            arg0->unk_290 = 1;
            func_002574D0(&arg0->unk_148, arg0->unk_108);
        }
        func_002574D0(&sp18, arg0->unk_104);
        sp28 = func_002576F0(&sp18, &arg0->unk_148);
        if (sp28 > 0.0f) {
            sp2C = sp28;
        } else {
            sp2C = -sp28;
        }
        if (sp2C > 0.1f && !arg0->unk_2A4) {
            func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x72, D_003601D8->unk_08 + 0x72, D_003601D8->unk_0C + 0x72, 1, 1, 0x80);
            func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70, D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 1, 1, 8);
        } else {
            arg0->unk_298 = 0;
            arg0->unk_290 = 0;
            arg0->unk_294 = 0;
        }
    } else if (!D_003601F0 && !arg0->unk_290) {
        func_0024D860(D_003601D8, 0x238, 1, 1, 3.2f);
    }
}
