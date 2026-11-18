/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001ACFA0_0 {
    u8 pad_00[4];
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[4];
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[0xC];
    s8 unk_2C;
} unk_func_001ACFA0_0;

s32 func_001164E0(s8 *);
extern s32 D_0035FFB4;

s32 func_001ACFA0(unk_func_001ACFA0_0 *arg0, s8 *arg1, s8 *arg2, s8 *arg3) {
    s32 var_s0;

    var_s0 = 1;
    switch (*arg1++) {
    case 'C':
    case 'c':
        arg0->unk_2C = 'c';
        break;
    case 'H':
    case 'h':
        arg0->unk_18 = (f32)func_001164E0(arg1) / 1000.0f;
        break;
    case 'L':
    case 'l':
        *arg2 = 1;
        *arg3 = 1;
        arg0->unk_04 = arg0->unk_0C = 0.0f;
        arg0->unk_08 -= arg0->unk_18;
        break;
    case 'W':
    case 'w':
        arg0->unk_14 = (f32)func_001164E0(arg1) / 1000.0f;
        break;
    case 'Z':
    case 'z':
        arg0->unk_1C = (f32)func_001164E0(arg1) / 1000.0f;
        break;
    case 'o':
    case 'O':
        D_0035FFB4 = func_001164E0(arg1);
        break;
    }
    while (*arg1 != ':') {
        arg1++;
        var_s0++;
    }
    var_s0++;
    return var_s0;
}
