/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_002494A0_0;

typedef struct {
    unk_002494A0_0 unk_00;
    u8 pad_0C[0x28];
} unk_002494A0_1;

extern f32 D_00605FE0[];
extern f32 D_00605FE4[];
extern f32 D_00605FE8[];
extern f32 D_00605FEC[];

f32 *func_002494A0(unk_002494A0_1 *arg0, u16 arg1, u16 arg2)
{
    unk_002494A0_0 sp40;
    unk_002494A0_0 sp50;
    unk_002494A0_0 sp60;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    unk_002494A0_0 *temp0;
    unk_002494A0_0 *temp1;
    unk_002494A0_0 *temp2;
    unk_002494A0_0 *temp3;

    temp0 = (unk_002494A0_0 *)((u8 *)&arg0[(u16)arg1] + 0x34);
    temp2 = (unk_002494A0_0 *)((u8 *)&arg0[(u16)arg1 + 1] + 0x34);
    temp1 = (unk_002494A0_0 *)((u8 *)&arg0[(u16)arg2] + 0x34);
    temp3 = (unk_002494A0_0 *)((u8 *)&arg0[(u16)arg2 + 1] + 0x34);

    sp40.unk_00 = temp2->unk_00 - temp0->unk_00;
    sp40.unk_04 = temp2->unk_04 - temp0->unk_04;
    sp40.unk_08 = temp2->unk_08 - temp0->unk_08;
    sp50.unk_00 = temp3->unk_00 - temp1->unk_00;
    sp50.unk_04 = temp3->unk_04 - temp1->unk_04;
    sp50.unk_08 = temp3->unk_08 - temp1->unk_08;
    sp60.unk_00 = temp0->unk_00 - temp1->unk_00;
    sp60.unk_04 = temp0->unk_04 - temp1->unk_04;
    sp60.unk_08 = temp0->unk_08 - temp1->unk_08;

    sp74 = sp40.unk_08 * sp40.unk_08 +
           (sp40.unk_00 * sp40.unk_00 + sp40.unk_04 * sp40.unk_04);
    sp78 = -(sp40.unk_08 * sp50.unk_08 +
            (sp40.unk_00 * sp50.unk_00 + sp40.unk_04 * sp50.unk_04));
    sp7C = sp50.unk_08 * sp50.unk_08 +
           (sp50.unk_00 * sp50.unk_00 + sp50.unk_04 * sp50.unk_04);
    sp80 = sp40.unk_08 * sp60.unk_08 +
           (sp40.unk_00 * sp60.unk_00 + sp40.unk_04 * sp60.unk_04);
    sp84 = -(sp50.unk_08 * sp60.unk_08 +
            (sp50.unk_00 * sp60.unk_00 + sp50.unk_04 * sp60.unk_04));
    sp88 = sp60.unk_08 * sp60.unk_08 +
           (sp60.unk_00 * sp60.unk_00 + sp60.unk_04 * sp60.unk_04);
    sp8C = sp74 * sp7C - sp78 * sp78;

    if (!(sp8C <= 0.0f)) {
        sp6C = (sp78 * sp84 - sp7C * sp80) / sp8C;
        sp70 = (sp78 * sp80 - sp74 * sp84) / sp8C;
        if (!(sp6C < 0.0f) && sp6C <= 1.0f && !(sp70 < 0.0f) && sp70 <= 1.0f) {
            D_00605FE0[0] = sp88 + (sp70 * (sp7C * sp70) +
                (sp6C * (sp74 * sp6C) + 2.0f * (sp84 * sp70 +
                (sp70 * (sp78 * sp6C) + sp80 * sp6C))));
            sp40.unk_00 = sp6C * sp40.unk_00;
            sp40.unk_04 = sp6C * sp40.unk_04;
            sp40.unk_08 = sp6C * sp40.unk_08;
            sp50.unk_00 = sp70 * sp50.unk_00;
            sp50.unk_04 = sp70 * sp50.unk_04;
            sp50.unk_08 = sp70 * sp50.unk_08;
            sp40.unk_00 = temp0->unk_00 + sp40.unk_00;
            sp40.unk_04 = temp0->unk_04 + sp40.unk_04;
            sp40.unk_08 = temp0->unk_08 + sp40.unk_08;
            sp50.unk_00 = temp1->unk_00 + sp50.unk_00;
            sp50.unk_04 = temp1->unk_04 + sp50.unk_04;
            sp50.unk_08 = temp1->unk_08 + sp50.unk_08;
            D_00605FE4[0] = sp40.unk_00 + sp50.unk_00;
            D_00605FE8[0] = sp40.unk_04 + sp50.unk_04;
            D_00605FEC[0] = sp40.unk_08 + sp50.unk_08;
            D_00605FE4[0] = 0.5f * D_00605FE4[0];
            D_00605FE8[0] = 0.5f * D_00605FE8[0];
            D_00605FEC[0] = 0.5f * D_00605FEC[0];
        } else {
            D_00605FE0[0] = -1.0f;
        }
    } else {
        D_00605FE0[0] = -1.0f;
    }
    return D_00605FE0;
}
