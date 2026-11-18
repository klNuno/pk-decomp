/* profile: o0_301 */
#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_0022E260_0;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
} unk_0022E260_1;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} unk_0022E260_2;

typedef struct {
    unk_0022E260_0 unk_00;
    u8 pad_0C[0x10];
} unk_0022E260_3;

extern "C" {
unk_0022E260_2 *HIE_fn_hGetSuperObjectObject(void *);
u8 *fn_p_stEvalTree(void *, u8 *, unk_0022E260_3 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, void *, void **);
u8 *func_00138800(unk_0022E260_1 *);
unk_0022E260_1 *func_001388A0(unk_0022E260_1 *);
unk_0022E260_1 *func_001B84B0(void *);

u8 *func_0022E260(void *arg0, u8 *arg1)
{
    unk_0022E260_3 sp60;
    void *sp7C;
    unk_0022E260_1 *temp0;
    unk_0022E260_0 *temp1;
    void *temp2;
    s32 temp3;

    temp3 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp3), arg0, &sp7C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    temp1 = &sp60.unk_00;
    temp2 = HIE_fn_hGetSuperObjectObject(sp7C)->unk_08;
    if (temp2 == 0) {
        return arg1;
    }
    temp0 = func_001B84B0(temp2);
    switch (temp3) {
    case 0xD5:
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFF7FFF);
        temp0->unk_08 = (temp0->unk_08 |= 0x100000);
        temp0->unk_08 = (temp0->unk_08 |= 0x200000);
        temp0->unk_08 = (temp0->unk_08 |= 0x400000);
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x30))->unk_00 = temp1->unk_00;
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x30))->unk_04 = temp1->unk_04;
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x30))->unk_08 = temp1->unk_08;
        break;
    case 0xC9:
        temp0->unk_08 = (temp0->unk_08 &= ~0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x20000);
        temp0->unk_08 = (temp0->unk_08 |= 0x40000);
        temp0->unk_08 = (temp0->unk_08 |= 0x80000);
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x24))->unk_00 = temp1->unk_00;
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x24))->unk_04 = temp1->unk_04;
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x24))->unk_08 = temp1->unk_08;
        break;
    case 0xE2:
        temp0->unk_08 = (temp0->unk_08 &= 0xFFFEFFFF);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x800000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x1000000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x2000000);
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x3C))->unk_00 = temp1->unk_00;
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x3C))->unk_04 = temp1->unk_04;
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x3C))->unk_08 = temp1->unk_08;
        break;
    case 0xDB:
        temp0->unk_08 = (temp0->unk_08 |= 0x8000);
        temp0->unk_08 = (temp0->unk_08 |= 0x100000);
        temp0->unk_08 = (temp0->unk_08 |= 0x200000);
        temp0->unk_08 = (temp0->unk_08 |= 0x400000);
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x30))->unk_00 = temp1->unk_00;
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x30))->unk_04 = temp1->unk_04;
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x30))->unk_08 = temp1->unk_08;
        break;
    case 0xCF:
        temp0->unk_08 = (temp0->unk_08 |= 0x4000);
        temp0->unk_08 = (temp0->unk_08 |= 0x20000);
        temp0->unk_08 = (temp0->unk_08 |= 0x40000);
        temp0->unk_08 = (temp0->unk_08 |= 0x80000);
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x24))->unk_00 = temp1->unk_00;
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x24))->unk_04 = temp1->unk_04;
        ((unk_0022E260_0 *)((u8 *)temp0 + 0x24))->unk_08 = temp1->unk_08;
        break;
    case 0xE8:
        temp0->unk_08 = (temp0->unk_08 |= 0x10000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x800000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x1000000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x2000000);
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x3C))->unk_00 = temp1->unk_00;
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x3C))->unk_04 = temp1->unk_04;
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x3C))->unk_08 = temp1->unk_08;
        break;
    case 0x139:
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x4000000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x8000000);
        temp0->unk_08 = (func_001388A0(temp0)->unk_08 |= 0x10000000);
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x48))->unk_00 = temp1->unk_00;
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x48))->unk_04 = temp1->unk_04;
        ((unk_0022E260_0 *)(func_00138800(temp0) + 0x48))->unk_08 = temp1->unk_08;
        break;
    }
    return arg1;
}
}
