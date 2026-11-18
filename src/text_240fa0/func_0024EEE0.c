/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x248];
    f32 unk_248;
    f32 unk_24C;
    u8 pad_250[4];
    f32 unk_254;
    u8 pad_258[0x5C];
    s32 unk_2B4;
    u8 pad_2B8[0xC];
    f32 unk_2C4;
} unk_0024EEE0_0;

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
    u8 *unk_08;
    u8 *unk_0C;
} unk_0024EEE0_1;

void func_001FD710(unk_0024EEE0_1 *, u8 *, u8 *, u8 *, s32, s32, u16);
void func_0024D860(unk_0024EEE0_1 *, s32, s32, s32, f32);
void func_0024F1E0(unk_0024EEE0_0 *);
extern unk_0024EEE0_1 *D_003601D8;

void func_0024EEE0(unk_0024EEE0_0 *arg0) {
    f32 temp0;
    f32 temp1;

    func_0024F1E0(arg0);
    temp0 = arg0->unk_254 > 0.0f ? arg0->unk_254 : -arg0->unk_254;
    if (temp0 > 0.2f) {
        arg0->unk_2B4 = 1;
        arg0->unk_2C4 = arg0->unk_24C;
    }
    if (arg0->unk_2B4) {
        func_0024D860(D_003601D8, 0x23E, 1, 1, 180.0f);
        func_0024D860(D_003601D8, 0x23B, 1, 1, 80.0f);
        func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70,
                      D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 0, 4);
        func_001FD710(D_003601D8, D_003601D8->unk_04 + 0x70,
                      D_003601D8->unk_08 + 0x70, D_003601D8->unk_0C + 0x70, 0, 1, 8);
        if (temp0 > 1.5707964f) {
            temp1 = (temp0 - 1.5707964f) / 1.5707964f;
            temp1 = 6.0f + temp1 * (arg0->unk_2C4 - 6.0f);
            if (arg0->unk_24C > temp1) {
                arg0->unk_24C = temp1;
            }
        } else if (temp0 > 0.2f) {
            temp1 = (temp0 - 1.5707964f) / 1.5707964f;
            temp1 = 6.0f + temp1 * (arg0->unk_248 - 6.0f);
            if (arg0->unk_24C > temp1) {
                arg0->unk_24C = temp1;
            }
        } else {
            arg0->unk_2B4 = 0;
        }
    }
}
