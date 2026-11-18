/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002392A0_0 {
    u8 pad_00[0xC];
    s16 *unk_0C;
} unk_func_002392A0_0;

typedef union unk_func_002392A0_1 {
    s32 unk_00;
    f32 unk_00_f;
    u8 pad_00[0x18];
} unk_func_002392A0_1;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
unk_func_002392A0_0 *func_001B0B00(s32, u16, s32);
void func_001DBB40(unk_func_002392A0_0 *, s32, s32, f32);
void func_001EDBB0();

s32 *func_002392A0(s32 arg0, s32 *arg1) {
    unk_func_002392A0_0 *obj;
    s32 temp;
    s32 n;
    unk_func_002392A0_1 sp40;
    s32 sp58;
    f32 sp5C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp58);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    n = sp40.unk_00;
    switch (temp) {
    case 0x210:
        obj = func_001B0B00(1, n - 1, sp58);
        break;
    case 0x211:
        obj = func_001B0B00(0, n - 1, sp58);
        break;
    default:
        func_001EDBB0(0x28, 0);
        return arg1;
    }
    if (obj != 0) {
        switch (temp) {
        case 0x210:
            if ((s16)*obj->unk_0C == 7) {
                arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
                sp5C = sp40.unk_00_f;
                func_001DBB40(obj, 0, 0, sp5C);
            }
            return arg1;
        case 0x211:
            func_001EDBB0(0x27, 0);
            return arg1;
        }
    }
    return arg1;
}
