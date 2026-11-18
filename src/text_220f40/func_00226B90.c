/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00226B90_0 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00226B90_0;

typedef struct unk_func_00226B90_1 {
    union {
        s32 unk_00;
        f32 unk_00_f;
    } u;
    u8 pad_04[0x8];
    s32 unk_0C;
    u8 pad_10[0x4];
} unk_func_00226B90_1;

extern u32 D_005AB848[];
s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
s32 *fn_p_stEvalTree();
unk_func_00226B90_0 *HIE_fn_hGetSuperObjectObject();
s32 func_001B84B0();
void func_00139560(s32, f32);

s32 *func_00226B90(s32 arg0, s32 *arg1) {
    s32 obj;
    s32 temp;
    s32 b;
    unk_func_00226B90_1 sp40;
    f32 f;
    s32 sp58;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp58);
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp40);
    f = (sp40.unk_0C == 8) ? sp40.u.unk_00_f : (f32)sp40.u.unk_00;
    b = HIE_fn_hGetSuperObjectObject(sp58)->unk_08;
    if (b != 0) {
        obj = func_001B84B0(b);
        if (obj != 0) {
            switch (temp) {
            case 0x92:
                f = 0.017453292f * f;
                f *= 0.001f * D_005AB848[0];
                func_00139560(obj, f);
                break;
            case 0x93:
                f = 0.017453292f * f;
                func_00139560(obj, f);
                break;
            }
        }
    }
    return arg1;
}
