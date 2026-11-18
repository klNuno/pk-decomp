/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FBC60_0 {
    s32 unk_00[4];
} unk_func_001FBC60_0;

typedef struct unk_func_001FBC60_1 {
    u8 pad_00[0x75];
    u8 unk_75;
} unk_func_001FBC60_1;

typedef struct unk_func_001FBC60_2 {
    u8 pad_00[0x10];
    unk_func_001FBC60_1 *unk_10;
} unk_func_001FBC60_2;

unk_func_001FBC60_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_001FBC60_0 *);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);

s32 *func_001FBC60(s32 arg0, s32 *arg1) {
    unk_func_001FBC60_0 sp40;
    s32 sp5C;
    unk_func_001FBC60_1 *temp_s0;
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s2), arg0, &sp5C);
    temp_s0 = HIE_fn_hGetSuperObjectObject(sp5C)->unk_10;
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    temp_s1 = sp40.unk_00[0];
    switch (temp_s1) {
    case 0:
        temp_s0->unk_75 &= 0xFE;
        break;
    case 1:
        temp_s0->unk_75 |= 1;
        break;
    }
    return arg1;
}
