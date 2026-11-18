/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00203630_0;

typedef struct {
    u8 pad_00[0x10];
    unk_func_00203630_0 unk_10;
    unk_func_00203630_0 unk_1C;
    u8 pad_28[0x38];
    s32 unk_60;
    u8 pad_64[0xC];
    f32 unk_70;
    u8 pad_74[1];
    u8 unk_75;
} unk_func_00203630_1;

typedef struct {
    u8 pad_00[8];
    unk_func_00203630_1 *unk_08;
} unk_func_00203630_2;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
extern f32 D_005AB850[];
extern s16 D_005AD8E8[];

s32 func_00203630(unk_func_00203630_2 *arg0, unk_func_00203630_0 *arg1) {
    unk_func_00203630_0 sp28;
    unk_func_00203630_0 sp38;
    f32 sp48;
    f32 sp4C;

    if (arg0->unk_08->unk_60 == 0) {
        return 1;
    }
    if (!(arg0->unk_08->unk_70 < 1000.0f * D_005AD8E8[0] * D_005AB850[0])) {
        return 1;
    }
    if (!(arg0->unk_08->unk_75 & 8)) {
        return 1;
    }
    sp28.unk_00 = arg1->unk_00 - arg0->unk_08->unk_10.unk_00;
    sp28.unk_04 = arg1->unk_04 - arg0->unk_08->unk_10.unk_04;
    sp28.unk_08 = arg1->unk_08 - arg0->unk_08->unk_10.unk_08;
    sp48 = func_001E60E0(func_00151360(sp28.unk_00) + func_00151360(sp28.unk_04) + func_00151360(sp28.unk_08));
    sp38.unk_00 = arg0->unk_08->unk_1C.unk_00 - arg0->unk_08->unk_10.unk_00;
    sp38.unk_04 = arg0->unk_08->unk_1C.unk_04 - arg0->unk_08->unk_10.unk_04;
    sp38.unk_08 = arg0->unk_08->unk_1C.unk_08 - arg0->unk_08->unk_10.unk_08;
    sp4C = func_001E60E0(func_00151360(sp38.unk_00) + func_00151360(sp38.unk_04) + func_00151360(sp38.unk_08));
    if (sp48 <= 0.5f + sp4C) {
        return 0;
    }
    return 1;
}
