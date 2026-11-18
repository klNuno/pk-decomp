/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002011C0_0;

typedef struct {
    u8 pad_00[0x20];
    f32 unk_20;
} unk_func_002011C0_1;

typedef struct {
    u8 pad_00[0xC];
    unk_func_002011C0_1 *unk_0C;
    u8 pad_10[0x10];
    u8 unk_20[0x24];
    unk_func_002011C0_0 unk_44;
} unk_func_002011C0_2;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
s8 func_00200EB0(unk_func_002011C0_2 *, void *, unk_func_002011C0_0 *);
s8 func_00200F10(unk_func_002011C0_2 *, void *, unk_func_002011C0_0 *);
s8 func_00201140(unk_func_002011C0_2 *, void *, unk_func_002011C0_0 *);
extern f32 D_005AD8D8[];

s32 func_002011C0(unk_func_002011C0_2 *arg0, unk_func_002011C0_0 *arg1, s8 arg2) {
    unk_func_002011C0_0 sp40;
    s8 (*var_s1)(unk_func_002011C0_2 *, void *, unk_func_002011C0_0 *);
    s32 var_s0;

    sp40.unk_00 = arg1->unk_00 - arg0->unk_44.unk_00;
    sp40.unk_04 = arg1->unk_04 - arg0->unk_44.unk_04;
    sp40.unk_08 = arg1->unk_08 - arg0->unk_44.unk_08;
    if (func_001E60E0(func_00151360(sp40.unk_00) + func_00151360(sp40.unk_04) + func_00151360(sp40.unk_08)) < arg0->unk_0C->unk_20 + D_005AD8D8[0]) {
        return 1;
    }
    if (arg2 & 1) {
        if (arg2 & 4) {
            var_s1 = func_00200F10;
        } else {
            var_s1 = func_00201140;
        }
        var_s0 = var_s1(arg0, &arg0->unk_44, arg1);
        if (var_s0 != 0) {
            return 1;
        }
    }
    if (arg2 & 2) {
        var_s0 = func_00200EB0(arg0, arg0->unk_20, arg1);
        if (var_s0 != 0) {
            return 1;
        }
    }
    return 0;
}
