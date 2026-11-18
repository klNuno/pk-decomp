/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
    s32 unk_10C;
    u8 pad_110[0x10];
    f32 *unk_120;
    u8 pad_124[0x104];
    f32 unk_228;
    u8 pad_22C[0x1C];
    f32 unk_248;
    f32 unk_24C;
    u8 pad_250[0x14];
    s32 unk_264;
    u8 pad_268[0x10];
    s32 unk_278;
    u8 pad_27C[8];
    s32 unk_284;
    u8 pad_288[0xC];
    s32 unk_294;
    u8 pad_298[0x30];
    u32 unk_2C8;
} unk_func_0024FCD0_0;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_0024D860(s32, s32, s32, s32, f32);
s32 func_0024DE90(s32, s32);
s32 func_00257690(s32);
extern s32 D_003601D8;
extern u32 D_005AB800[];
extern f32 D_00617340[], D_00617344[];

void func_0024FCD0(unk_func_0024FCD0_0 *arg0) {
    if (func_0024DE90(arg0->unk_108, arg0->unk_264) != 0) {
        arg0->unk_228 = D_00617340[0];
        arg0->unk_24C = arg0->unk_248 = D_00617344[0];
        if (arg0->unk_284 == 0) {
            arg0->unk_284 = 1;
            arg0->unk_2C8 = D_005AB800[0];
            arg0->unk_294 = 1;
        } else if (D_005AB800[0] - arg0->unk_2C8 < 1000U) {
            if (func_001E60E0(func_00151360(arg0->unk_120[2]) +
                (func_00151360(arg0->unk_120[0]) + func_00151360(arg0->unk_120[1]))) < 0.1f) {
                func_0024D860(D_003601D8, 0x23B, 1, 1, 8.0f);
                func_0024D860(D_003601D8, 0x23E, 1, 1, 1.0f);
            } else {
                func_0024D860(D_003601D8, 0x23B, 1, 1, 16.0f);
                func_0024D860(D_003601D8, 0x23E, 1, 1, 2.0f);
            }
        }
    } else if (arg0->unk_284 != 0) {
        arg0->unk_284 = 0;
        arg0->unk_2C8 = D_005AB800[0];
        arg0->unk_228 = D_00617340[0];
        arg0->unk_248 = arg0->unk_24C = D_00617344[0];
    } else if (D_005AB800[0] - arg0->unk_2C8 < 1000U && func_00257690(arg0->unk_10C) != 0) {
        arg0->unk_228 = D_00617340[0];
        arg0->unk_248 = arg0->unk_24C = D_00617344[0];
    } else if (D_005AB800[0] - arg0->unk_2C8 < 2000U && func_0024DE90(arg0->unk_108, arg0->unk_278) != 0) {
        func_0024D860(D_003601D8, 0x23B, 1, 1, 16.0f);
        func_0024D860(D_003601D8, 0x23E, 1, 1, 1.0f);
    }
}
