/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002299B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002299B0_0;

typedef struct unk_func_002299B0_1 {
    void *unk_00;
    unk_func_002299B0_0 unk_04;
    unk_func_002299B0_0 unk_10;
    u16 unk_1C;
    s8 unk_1E;
    u8 pad_1F;
    u8 unk_20;
    u8 pad_21[0x3];
} unk_func_002299B0_1;

typedef union unk_func_002299B0_2 {
    s8 unk_00_s8;
    u16 unk_00_u16;
    unk_func_002299B0_0 unk_00;
    u8 pad_00[0x1C];
} unk_func_002299B0_2;

typedef struct unk_func_002299B0_3 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002299B0_3;

unk_func_002299B0_3 *fn_p_stEvalTree(void *, unk_func_002299B0_3 *, unk_func_002299B0_2 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, void *, void **);
unk_func_002299B0_3 *func_001EB720(unk_func_002299B0_3 *);
extern u16 D_003601B8;
extern unk_func_002299B0_1 D_00605970[];

unk_func_002299B0_3 *func_002299B0(void *arg0, unk_func_002299B0_3 *arg1) {
    unk_func_002299B0_1 *temp0;
    s32 temp1 = (arg1 - 1)->unk_00;
    unk_func_002299B0_2 sp30;
    void *sp4C = arg0;

    if (D_003601B8 >= 20) {
        return func_001EB720(arg1);
    }
    temp0 = &D_00605970[D_003601B8];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp1), arg0, &sp4C);
    temp0->unk_00 = sp4C;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp0->unk_1E = sp30.unk_00_s8;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp0->unk_04 = sp30.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp0->unk_10 = sp30.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    temp0->unk_1C = sp30.unk_00_u16;
    temp0->unk_20 = 1;
    D_003601B8++;
    return arg1;
}
