/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00201920_0;

typedef struct {
    u8 pad_00[0x20];
    f32 unk_20;
} unk_00201920_1;

typedef struct {
    u8 pad_00[0xC];
    unk_00201920_1 *unk_0C;
    u8 pad_10[0x10];
    unk_00201920_0 unk_20;
    unk_00201920_0 unk_2C;
    u8 pad_38[0xC];
    unk_00201920_0 unk_44;
} unk_00201920_2;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
s32 func_001FE560(unk_00201920_0 *, unk_00201920_0 *, f32);
s32 func_00203630(unk_00201920_2 *, unk_00201920_0 *);
extern f32 D_005AD8D4[];
extern f32 D_005AD8D8[];

s32 func_00201920(unk_00201920_2 *arg0, unk_00201920_0 *arg1, f32 arg2, f32 arg3, s8 arg4) {
    unk_00201920_0 sp20;

    sp20.unk_00 = arg1->unk_00 + arg0->unk_44.unk_00;
    sp20.unk_04 = arg1->unk_04 + arg0->unk_44.unk_04;
    sp20.unk_08 = arg1->unk_08 + arg0->unk_44.unk_08;

    if (arg4 & 8) {
        if (!(arg2 < arg3)) {
            return 0;
        }
        arg3 -= arg2;
        if (arg3 < 0.05f) {
            return 0;
        }
        if (!func_00203630(arg0, &sp20)) {
            return 0;
        }
    }
    if (func_001E60E0(func_00151360(arg1->unk_08) + (func_00151360(arg1->unk_00) + func_00151360(arg1->unk_04))) <
        arg0->unk_0C->unk_20 + D_005AD8D8[0]) {
        return 0;
    }
    if (!(arg4 & 4) && func_001FE560(&sp20, &arg0->unk_2C, D_005AD8D4[0])) {
        return 0;
    }
    if ((!(arg4 & 4) || (arg4 & 8)) && func_001FE560(&sp20, &arg0->unk_20, D_005AD8D4[0])) {
        return 0;
    }
    return 1;
}
