/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x228];
    f32 unk_228;
    f32 unk_22C;
    f32 unk_230;
    u8 pad_234[4];
    f32 unk_238;
    f32 unk_23C;
    u8 pad_240[0x4C];
    s32 unk_28C;
} unk_00253D20_0;

extern s32 D_003601E0;
extern s32 D_003601EC;
extern u32 D_005AB848[];

void func_00253D20(unk_00253D20_0 *arg0) {
    f32 temp;
    if (arg0->unk_28C != 0) {
        temp = (D_003601E0 * (f32)D_005AB848[0]) / 20000.0f;
    } else {
        f32 temp2 = arg0->unk_228;
        if (D_003601EC == 0) {
            arg0->unk_23C /= 2.0f;
            if ((arg0->unk_23C > 0.0f ? arg0->unk_23C : -arg0->unk_23C) < 0.05f) {
                arg0->unk_23C = 0.0f;
                arg0->unk_238 = temp2;
            } else {
                arg0->unk_238 = temp2 + arg0->unk_23C;
            }
            temp = 0.0f;
        } else {
            temp = (f32)D_003601E0;
            temp = ((f32)D_005AB848[0] * (temp < 0.0f ? 12.0f + temp : temp - 12.0f)) / 13000.0f;
            arg0->unk_23C -= temp * (temp > 0.0f ? temp : -temp);
            arg0->unk_238 = temp2 + arg0->unk_23C;
        }
    }
    if (arg0->unk_238 > arg0->unk_230) {
        arg0->unk_238 = arg0->unk_230;
        arg0->unk_23C = arg0->unk_230 - arg0->unk_228;
    } else if (arg0->unk_238 < arg0->unk_22C) {
        arg0->unk_238 = arg0->unk_22C;
        arg0->unk_23C = arg0->unk_22C - arg0->unk_228;
    }
}
