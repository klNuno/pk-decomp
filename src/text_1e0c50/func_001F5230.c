/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x3A];
    u16 unk_72;
} unk_Q_0;

typedef struct {
    u8 pad_00[0x60];
    s32 unk_60;
    u8 pad_64[0x11];
    u8 unk_75;
} unk_Q_1;

typedef struct {
    u8 pad_00[0x8];
    unk_Q_1 *unk_08;
    unk_Q_0 *unk_0C;
    unk_Q_0 *unk_10;
    u8 pad_14[0x60];
    u8 unk_74;
    u8 pad_75[0x3];
    f32 unk_78;
    f32 unk_7C;
    u8 pad_80[0x38];
    s32 unk_B8;
} unk_Q_2;

void func_001FE7C0();
void func_001F4EA0(unk_Q_2 *, f32 *, f32 *, f32 *, f32, f32);

void func_001F5230(unk_Q_2 *arg0, s32 arg1, s32 arg2, f32 *arg3, f32 *arg4) {
    f32 dummy;
    f32 a;
    f32 b;
    f32 c;
    unk_Q_0 *p;

    p = arg0->unk_0C;
    func_001FE7C0(p, arg1, arg2, arg3, arg4, &arg0->unk_B8);
    if ((arg0->unk_08->unk_75 & 4) || (arg0->unk_0C->unk_72 & 0x40)) {
        a = 0.0f;
        b = 0.0f;
    } else {
        a = arg0->unk_0C->unk_2C;
        b = arg0->unk_0C->unk_34;
    }
    arg0->unk_74 = 0;
    func_001F4EA0(arg0, arg3, &arg0->unk_78, &arg0->unk_7C, arg0->unk_0C->unk_28, a);
    if (*arg3 != arg0->unk_78) {
        arg0->unk_74 = 1;
    }
    if (arg0->unk_08->unk_60 == 1) {
        c = arg0->unk_10->unk_30;
    } else {
        c = arg0->unk_0C->unk_30;
    }
    func_001F4EA0(arg0, arg4, &dummy, &dummy, c, b);
}
