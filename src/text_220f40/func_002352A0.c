/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_002352A0_0;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} unk_002352A0_1;

unk_002352A0_1 *HIE_fn_hGetSuperObjectObject(void *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, void *, void **);
u8 *fn_p_stEvalTree(void *, u8 *, unk_002352A0_0 *);
void func_0012D550(void *);
void func_0012D940(void *);
void func_00139A90(void *, void *);
void func_0014F6B0(void *, unk_002352A0_0 *, unk_002352A0_0 *, unk_002352A0_0 *);
void func_0014FEA0(void *, unk_002352A0_0 *);
f32 func_00151360(f32);
s32 func_001971C0(void *);
void *func_001979C0(void *);
void func_0019A230(void *);
s32 func_0019D550(f32);
void *func_001B84B0(void *);
s32 func_001BFB20(void *);
f32 func_001E60E0(f32);
extern u32 D_005AB848[];
extern f32 D_005AB850[];

u8 *func_002352A0(void *arg0, u8 *arg1)
{
    unk_002352A0_0 sp70;
    unk_002352A0_0 sp80;
    unk_002352A0_0 sp90;
    unk_002352A0_0 spA0;
    unk_002352A0_0 spB0;
    unk_002352A0_0 spC0;
    unk_002352A0_0 spD0;
    unk_002352A0_0 spE0;
    void *spEC;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    void *temp0;
    void *temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;

    temp2 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp2), arg0, &spEC);
    temp0 = func_001979C0(spEC);
    temp1 = HIE_fn_hGetSuperObjectObject(spEC)->unk_08;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    sp80 = sp70;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp70);
    spF0 = sp70.unk_00;
    func_0014FEA0(temp0, &spE0);
    spA0.unk_00 = -spE0.unk_00;
    spA0.unk_04 = -spE0.unk_04;
    spA0.unk_08 = -spE0.unk_08;
    spD0.unk_04 = spD0.unk_00 = 0.0f;
    spD0.unk_08 = 1.0f;
    spF8 = 1.0f - spF0;
    if (0.0f == spF8) {
        spF4 = spF8;
    } else {
        temp4 = func_0019D550(0.5f + (f32)D_005AB848[0] / (1000.0f * D_005AB850[0]));
        switch (temp4) {
        case 1:
            spF4 = spF8;
            break;
        case 2:
            spF4 = spF8 * spF8;
            break;
        case 3:
            spF4 = spF8 * (spF8 * spF8);
            break;
        case 4:
            spF8 = spF8 * spF8;
            spF4 = spF8 * spF8;
            break;
        case 5:
            spF4 = spF8 * spF8;
            spF4 = spF8 * (spF4 * spF4);
            break;
        default:
            spF4 = spF8 * (spF8 * spF8);
            spF4 = spF4 * spF4;
            break;
        }
    }
    sp90.unk_00 = spA0.unk_00 - sp80.unk_00;
    sp90.unk_04 = spA0.unk_04 - sp80.unk_04;
    sp90.unk_08 = spA0.unk_08 - sp80.unk_08;
    sp90.unk_00 = spF4 * sp90.unk_00;
    sp90.unk_04 = spF4 * sp90.unk_04;
    sp90.unk_08 = spF4 * sp90.unk_08;
    spC0.unk_00 = sp90.unk_00 + sp80.unk_00;
    spC0.unk_04 = sp90.unk_04 + sp80.unk_04;
    spC0.unk_08 = sp90.unk_08 + sp80.unk_08;
    spC0.unk_08 = 0.0f;
    spFC = func_001E60E0(func_00151360(spC0.unk_08) +
        (func_00151360(spC0.unk_00) + func_00151360(spC0.unk_04)));
    if (0.0f != spFC) {
        spFC = 1.0f / spFC;
        spC0.unk_00 = spFC * spC0.unk_00;
        spC0.unk_04 = spFC * spC0.unk_04;
        spC0.unk_08 = spFC * spC0.unk_08;
    } else {
        spC0 = spC0;
    }
    spB0.unk_08 = 0.0f;
    spB0.unk_04 = spC0.unk_00;
    spC0.unk_00 = -spC0.unk_00;
    spC0.unk_04 = -spC0.unk_04;
    spB0.unk_00 = spC0.unk_04;
    func_0014F6B0(temp0, &spB0, &spC0, &spD0);
    func_0019A230(spEC);
    func_0012D940(spEC);
    if (func_001971C0(spEC) != 2 ||
        (((temp3 = func_001BFB20(spEC)) & 2) && (temp1 == 0 || (temp3 & 0x8000)))) {
        func_0012D550(spEC);
    }
    if (temp1 != 0) {
        func_00139A90(func_001B84B0(temp1), temp0);
    }
    return arg1;
}
