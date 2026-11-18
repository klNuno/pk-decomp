/* profile: o0_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00201450_0;

typedef struct {
    u8 pad_00[0x18];
    f32 unk_18;
    u8 pad_1C[0xC];
    f32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
    u8 pad_34[0x34];
    s32 unk_68;
    s32 unk_6C;
    u8 pad_70[8];
    s8 unk_78;
    u8 pad_79[7];
} unk_func_00201450_1;

typedef struct {
    u8 pad_00[0xC];
    unk_func_00201450_1 *unk_0C;
    u8 pad_10[0x40];
    unk_func_00201450_0 unk_50;
} unk_func_00201450_2;

s32 func_0019D550(f32);
void func_00203320(unk_func_00201450_2 *, unk_func_00201450_0 *);
extern f32 D_006042B8[];
extern f32 D_006042C8[];
extern f32 D_006042D0[];

f32 func_00201450(unk_func_00201450_2 *arg0, unk_func_00201450_0 *arg1) {
    unk_func_00201450_1 temp;
    unk_func_00201450_0 spB0;
    unk_func_00201450_1 *temp_s0;
    f32 spBC, spC0, spC4, spC8, spCC, spD0;

    spB0.unk_00 = arg0->unk_50.unk_00 + arg1->unk_00;
    spB0.unk_04 = arg0->unk_50.unk_04 + arg1->unk_04;
    spB0.unk_08 = arg0->unk_50.unk_08 + arg1->unk_08;
    temp_s0 = arg0->unk_0C;
    temp.unk_68 = arg0->unk_0C->unk_68;
    temp.unk_6C = arg0->unk_0C->unk_6C;
    temp.unk_78 = arg0->unk_0C->unk_78;
    arg0->unk_0C = &temp;
    func_00203320(arg0, &spB0);
    arg0->unk_0C = temp_s0;

    spC0 = D_006042C8[0] > 3.1415927f ? 6.2831855f - D_006042C8[0] : D_006042C8[0];
    spC4 = temp.unk_28 > 3.1415927f ? 6.2831855f - temp.unk_28 : temp.unk_28;
    spC8 = spC0 - spC4 > 0.0f ? spC0 - spC4 : -(spC0 - spC4);
    spC8 = (f32)(func_0019D550(2.0f * (100.0f * spC8)) - func_0019D550(100.0f * spC8));
    spC8 = 0.01f * spC8;

    spC0 = D_006042D0[0] > 3.1415927f ? 6.2831855f - D_006042D0[0] : D_006042D0[0];
    spC4 = temp.unk_30 > 3.1415927f ? temp.unk_30 - 6.2831855f : temp.unk_30;
    spCC = spC0 - spC4 > 0.0f ? spC0 - spC4 : -(spC0 - spC4);
    spCC = (f32)(func_0019D550(2.0f * (100.0f * spCC)) - func_0019D550(100.0f * spCC));
    spCC = 0.1f * spCC;

    spD0 = D_006042B8[0] - temp.unk_18 > 0.0f ? D_006042B8[0] - temp.unk_18 : -(D_006042B8[0] - temp.unk_18);
    spD0 = (f32)(func_0019D550(2.0f * (100.0f * spD0)) - func_0019D550(100.0f * spD0));
    spD0 = 0.01f * spD0;

    spBC = spC8 + spCC;
    spBC = spBC + 0.1f * spD0;
    return spBC;
}
