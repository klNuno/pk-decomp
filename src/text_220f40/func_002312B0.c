/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_002312B0_0 {
    s8 unk_00;
    u8 pad_01[0x1B];
} unk_func_002312B0_0;

typedef struct unk_func_002312B0_1 {
    s32 unk_00;
    u8 pad_04[0x10];
    s32 unk_14;
} unk_func_002312B0_1;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_002312B0_1 *HIE_fn_hGetSuperObjectObject();
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002312B0_0 *);
void func_001D4780(s32, u8);
void func_001B70D0(s32, u8);
void func_001D48F0(s32, u8);
void func_001EDBB0(s32, s32);

s32 *func_002312B0(s32 arg0, s32 *arg1) {
    u8 val;
    s32 type;
    unk_func_002312B0_0 sp30;
    s32 sp4C;

    type = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(type), arg0, &sp4C);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
    val = sp30.unk_00;
    switch (type) {
    case 0x178:
        func_001D4780(HIE_fn_hGetSuperObjectObject(sp4C)->unk_00, val);
        break;
    case 0x177:
        func_001B70D0(HIE_fn_hGetSuperObjectObject(sp4C)->unk_14, val);
        break;
    case 0x179:
        func_001D48F0(HIE_fn_hGetSuperObjectObject(sp4C)->unk_00, val);
        break;
    default:
        func_001EDBB0(0x28, 0);
        return arg1;
    }
    return arg1;
}
