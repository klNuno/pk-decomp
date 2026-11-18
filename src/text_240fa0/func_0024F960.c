/* profile: o0_p */
#include "common.h"

typedef struct unk_func_0024F960_0 {
    u8 pad_00[0xD0];
    s8 *unk_D0;
    u8 pad_D4[0x154];
    f32 unk_228;
    f32 unk_22C;
    f32 unk_230;
    f32 unk_234;
    f32 unk_238;
    f32 unk_23C;
    u8 pad_240[0xA8];
    f32 unk_2E8;
    f32 unk_2EC;
    f32 unk_2F0;
    u8 pad_2F4[0x4];
    s64 unk_2F8;
} unk_func_0024F960_0;

extern s32 D_003601E0;
extern s32 D_003601EC;
extern u32 D_005AB848[];

void func_0024F960(unk_func_0024F960_0 *arg0) {
    s8 c;
    f32 t;

    c = *arg0->unk_D0;
    if (D_003601EC && (D_003601E0 <= 0 || (arg0->unk_2E8 == 0.0f && arg0->unk_2EC == 0.0f && arg0->unk_2F0 == 0.0f)) && !c) {
        if (D_003601E0 < 0) {
            t = (f32)(D_003601E0 + 0xC) * D_005AB848[0] / 11000.0f;
            t = t * -t;
        } else {
            t = (f32)(D_003601E0 - 0xC) * D_005AB848[0] / 11000.0f;
            t = t * t;
        }
        arg0->unk_23C -= t;
        arg0->unk_238 = arg0->unk_228 + arg0->unk_23C;
        if (arg0->unk_238 > arg0->unk_230) {
            arg0->unk_238 = arg0->unk_230;
            arg0->unk_23C = arg0->unk_230 - arg0->unk_228;
        } else if (arg0->unk_238 < arg0->unk_22C) {
            arg0->unk_238 = arg0->unk_22C;
            arg0->unk_23C = arg0->unk_22C - arg0->unk_228;
        }
    } else if (c) {
        arg0->unk_238 = arg0->unk_234 = arg0->unk_228;
        arg0->unk_23C = 0.0f;
    }
    arg0->unk_2F8 = D_003601E0;
}
