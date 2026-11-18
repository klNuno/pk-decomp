/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002314D0_0 {
    s8 unk_00;
    u8 pad_01[0x1B];
} unk_func_002314D0_0;

typedef struct unk_func_002314D0_1 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_002314D0_1;

typedef struct unk_func_002314D0_2 {
    u8 pad_00[0x8];
    u32 unk_08;
} unk_func_002314D0_2;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
unk_func_002314D0_1 *HIE_fn_hGetSuperObjectObject();
unk_func_002314D0_2 *func_001B84B0();

s32 *func_002314D0(s32 arg0, s32 *arg1) {
    s32 temp;
    unk_func_002314D0_0 sp60;
    s32 sp7C;
    u8 flag;
    s32 temp_s1;
    unk_func_002314D0_2 *temp_s0;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp7C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp60);
    flag = sp60.unk_00;
    temp_s1 = HIE_fn_hGetSuperObjectObject(sp7C)->unk_08;
    if (temp_s1 == 0) {
        return arg1;
    }
    temp_s0 = func_001B84B0(temp_s1);
    if (temp_s0 == NULL) {
        return arg1;
    }
    temp_s0->unk_08 = flag ? (temp_s0->unk_08 |= 0x40000000) : (temp_s0->unk_08 &= ~0x40000000);
    return arg1;
}
