/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    f32 *unk_50;
    u8 pad_54[0x208];
    f32 unk_25C;
    f32 unk_260;
} unk_00255D80_0;

extern s32 D_003601DC;
extern s32 D_003601E0;
extern u32 D_005AB848[];

#define UNK_00255D80_1(unk) ((unk) > 0.0f ? (unk) : -(unk))

void func_00255D80(unk_00255D80_0 *arg0)
{
    f32 temp;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;

    if (arg0->unk_50 != NULL) {
        unk_0C = *arg0->unk_50 * (f32)*D_005AB848;
        if (0.0f == unk_0C) {
            unk_0C = 0.001f * (f32)*D_005AB848;
        }
    } else {
        unk_0C = 0.001f * (f32)*D_005AB848;
    }
    if (D_003601E0 < -25) {
        temp = (f32)(D_003601E0 + 25) / 75.0f;
        unk_08 = 0.45f * (temp * temp);
    } else if (D_003601E0 > 25) {
        temp = (f32)(D_003601E0 - 25) / 75.0f;
        unk_08 = 0.45f * (-temp * temp);
    } else {
        unk_08 = 0.0f;
    }
    if (D_003601DC < -25) {
        temp = (f32)(D_003601DC + 25) / 75.0f;
        unk_04 = 0.45f * (temp * temp);
    } else if (D_003601DC > 25) {
        temp = (f32)(D_003601DC - 25) / 75.0f;
        unk_04 = 0.45f * (-temp * temp);
    } else {
        unk_04 = 0.0f;
    }
    temp = (f32)*D_005AB848 / 8.0f;
    if (0.0f == temp) {
        temp = 3.0f;
    }
    if (!(UNK_00255D80_1(arg0->unk_25C - unk_04) < unk_0C)) {
        arg0->unk_25C += (arg0->unk_25C < unk_04 ? unk_0C : -unk_0C);
    } else {
        arg0->unk_25C = unk_04;
    }
    if (!(UNK_00255D80_1(arg0->unk_260 - unk_08) < unk_0C)) {
        arg0->unk_260 += (arg0->unk_260 < unk_08 ? unk_0C : -unk_0C);
    } else {
        arg0->unk_260 = unk_08;
    }
}
