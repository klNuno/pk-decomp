/* profile: o0_p */
#include "common.h"

typedef struct unk_func_00252040_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00252040_0;

typedef struct unk_func_00252040_1 {
    u8 pad_00[0xC];
    unk_func_00252040_0 unk_0C;
} unk_func_00252040_1;

typedef struct unk_func_00252040_2 {
    u8 pad_00[0x4];
    unk_func_00252040_1 *unk_04;
} unk_func_00252040_2;

typedef struct unk_func_00252040_3 {
    u8 pad_00[0x11C];
    unk_func_00252040_0 *unk_11C;
    u8 pad_120[0x94];
    unk_func_00252040_0 unk_1B4;
    u8 pad_1C0[0x68];
    f32 unk_228;
    u8 pad_22C[0x8];
    f32 unk_234;
    f32 unk_238;
    u8 pad_23C[0x4];
    f32 unk_240;
    u8 pad_244[0x64];
    s32 unk_2A8;
    s32 unk_2AC;
} unk_func_00252040_3;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
f32 func_00257A60(unk_func_00252040_0 *, unk_func_00252040_0 *);
extern unk_func_00252040_2 *D_003601D8;

void func_00252040(unk_func_00252040_3 *arg0) {
    unk_func_00252040_0 v;
    unk_func_00252040_0 w;

    if (arg0->unk_2A8 == 0 && arg0->unk_2AC == 0) {
        arg0->unk_234 = arg0->unk_238;
        return;
    }
    if (arg0->unk_238 < arg0->unk_228) {
        v.unk_00 = arg0->unk_11C->unk_00 + D_003601D8->unk_04->unk_0C.unk_00;
        v.unk_04 = arg0->unk_11C->unk_04 + D_003601D8->unk_04->unk_0C.unk_04;
        v.unk_08 = arg0->unk_11C->unk_08 + D_003601D8->unk_04->unk_0C.unk_08;
        v.unk_00 = arg0->unk_1B4.unk_00 - v.unk_00;
        v.unk_04 = arg0->unk_1B4.unk_04 - v.unk_04;
        v.unk_08 = arg0->unk_1B4.unk_08 - v.unk_08;
        if (func_001E60E0(func_00151360(v.unk_00) + func_00151360(v.unk_04) + func_00151360(v.unk_08)) < 0.5f) {
            w.unk_00 = v.unk_00;
            w.unk_04 = v.unk_04;
            w.unk_08 = 0.0f;
            arg0->unk_234 = func_00257A60(&v, &w);
        } else {
            arg0->unk_234 = arg0->unk_240 + arg0->unk_238 - arg0->unk_228;
        }
        if (arg0->unk_234 < 0.2f) {
            arg0->unk_234 = 0.2f;
        }
    } else if (arg0->unk_238 > arg0->unk_240) {
        arg0->unk_234 = arg0->unk_238;
    } else {
        arg0->unk_234 = arg0->unk_240;
    }
    arg0->unk_240 = arg0->unk_234;
}
