/* profile: o0_p */
#include "common.h"

extern s32 D_003601DC;
extern s32 D_003601F0;
extern u32 D_005AB848[];

void func_0024F790(u8 *arg0) {
    f32 v;

    if (D_003601F0 == 0) {
        *(f32 *)(arg0 + 0x244) = 0.0f;
        return;
    }
    if (D_003601DC < 0) {
        v = ((f32)(D_003601DC + 12) * (f32)D_005AB848[0]) / 13000.0f;
        v *= -v;
    } else {
        v = ((f32)(D_003601DC - 12) * (f32)D_005AB848[0]) / 13000.0f;
        v *= v;
    }
    *(f32 *)(arg0 + 0x244) -= v;
    if (*(f32 *)(arg0 + 0x244) > 1.0f) {
        *(f32 *)(arg0 + 0x244) = 1.0f;
    } else if (*(f32 *)(arg0 + 0x244) < -1.0f) {
        *(f32 *)(arg0 + 0x244) = -1.0f;
    }
}
