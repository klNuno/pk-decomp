/* profile: o0 */
#include "common.h"

typedef struct unk_func_00203320_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00203320_1;

typedef struct unk_func_00203320_2 {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[8];
    f32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
} unk_func_00203320_2;

typedef struct unk_func_00203320_0 {
    u8 pad_00[0xC];
    unk_func_00203320_2 *unk_0C;
    u8 pad_10[0x40];
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    u8 pad_5C[0x5C];
    u8 unk_B8[4];
} unk_func_00203320_0;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_001F41C0();
void func_001FE7C0();

void func_00203320(unk_func_00203320_0 *arg0, unk_func_00203320_1 *arg1) {
    unk_func_00203320_1 sp28;
    unk_func_00203320_1 sp38;
    f32 sp44;
    f32 sp48;
    f32 sp4C;

    func_001F41C0(arg0, &sp28);
    sp38.unk_00 = arg1->unk_00 - arg0->unk_50;
    sp38.unk_04 = arg1->unk_04 - arg0->unk_54;
    sp38.unk_08 = arg1->unk_08 - arg0->unk_58;
    sp4C = func_001E60E0(func_00151360(sp38.unk_00) + func_00151360(sp38.unk_04) + func_00151360(sp38.unk_08));
    func_001FE7C0(arg0->unk_0C, &sp28, &sp38, &sp44, &sp48, arg0->unk_B8);
    arg0->unk_0C->unk_18 = sp4C;
    arg0->unk_0C->unk_1C = sp4C;
    arg0->unk_0C->unk_28 = sp44;
    arg0->unk_0C->unk_30 = sp48;
}
