/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00229430_0;

typedef struct {
    unk_00229430_0 unk_00;
    u8 pad_0C[0xC];
} unk_00229430_1;

typedef struct {
    u8 pad_00[0x1C];
    u32 *unk_1C;
} unk_00229430_2;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
} unk_00229430_3;

typedef struct {
    u32 unk_00;
    u8 pad_04[4];
} unk_00229430_4;

unk_00229430_3 *HIE_fn_hGetSuperObjectObject(unk_00229430_2 *);
unk_00229430_4 *fn_p_stEvalTree(void *, unk_00229430_4 *, unk_00229430_1 *);
u32 fn_ucGetProcedureUltraOperator(u32);
void fn_vGetUltraOperatorPerso(u32, void *, unk_00229430_2 **);
void func_0012D550(unk_00229430_2 *);
void func_0012D940(unk_00229430_2 *);
void func_00139A10(void *, unk_00229430_0 *, unk_00229430_0 *, unk_00229430_0 *);
void func_0014F6B0(void *, unk_00229430_0 *, unk_00229430_0 *, unk_00229430_0 *);
void func_0014FDE0(void *, unk_00229430_0 *);
void func_0014FEA0(void *, unk_00229430_0 *);
f32 func_00151360(f32);
void *func_001979A0(unk_00229430_2 *);
void *func_001979C0(unk_00229430_2 *);
void func_0019A230(unk_00229430_2 *);
void *func_001B84B0(void *);
u32 func_001BFB20(unk_00229430_2 *);
f32 func_001E60E0(f32);

unk_00229430_4 *func_00229430(void *arg0, unk_00229430_4 *arg1)
{
    unk_00229430_1 temp0;
    unk_00229430_0 temp1;
    unk_00229430_0 temp2;
    unk_00229430_0 temp3;
    unk_00229430_2 *temp4;
    f32 temp5;
    void *temp6;
    void *temp7;
    void *temp8;
    u32 temp10;
    u32 temp9;

    temp10 = arg1[-1].unk_00;
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp10), arg0, &temp4);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
    temp1 = temp0.unk_00;
    temp7 = func_001979C0(temp4);
    temp8 = func_001979A0(temp4);
    temp6 = HIE_fn_hGetSuperObjectObject(temp4)->unk_08;
    temp1.unk_08 = 0.0f;
    if (0.0f == temp1.unk_00 && 0.0f == temp1.unk_04 && 0.0f == temp1.unk_08) {
        func_0014FEA0(func_001979C0(temp4), &temp1);
        temp1.unk_00 = -temp1.unk_00;
        temp1.unk_04 = -temp1.unk_04;
        temp1.unk_08 = -temp1.unk_08;
        temp1.unk_08 = 0.0f;
        if (0.0f == temp1.unk_00 && 0.0f == temp1.unk_04 && 0.0f == temp1.unk_08) {
            func_0014FDE0(func_001979C0(temp4), &temp1);
        }
    }
    temp5 = func_001E60E0(func_00151360(temp1.unk_08) +
                          (func_00151360(temp1.unk_00) + func_00151360(temp1.unk_04)));
    if (0.0f != temp5) {
        temp5 = 1.0f / temp5;
        temp1.unk_00 = temp5 * temp1.unk_00;
        temp1.unk_04 = temp5 * temp1.unk_04;
        temp1.unk_08 = temp5 * temp1.unk_08;
    } else {
        temp1 = temp1;
    }
    temp2.unk_08 = 0.0f;
    temp3.unk_04 = temp3.unk_00 = 0.0f;
    temp3.unk_08 = 1.0f;
    temp2.unk_04 = temp1.unk_00;
    temp1.unk_00 = -temp1.unk_00;
    temp1.unk_04 = -temp1.unk_04;
    temp2.unk_00 = temp1.unk_04;
    func_0014F6B0(temp7, &temp2, &temp1, &temp3);
    func_0019A230(temp4);
    if (*temp4->unk_1C & 2) {
        func_0012D940(temp4);
    } else {
        func_0014F6B0(temp8, &temp2, &temp1, &temp3);
    }
    if (((temp9 = func_001BFB20(temp4)) & 2) && (temp6 == NULL || (temp9 & 0x8000))) {
        func_0012D550(temp4);
    }
    if (temp6 != NULL) {
        func_00139A10(func_001B84B0(temp6), &temp2, &temp1, &temp3);
    }
    return arg1;
}
