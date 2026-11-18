/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00227CB0_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_00227CB0_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_00227CB0_0 *HIE_fn_hGetSuperObjectObject();
void func_001B6910();
void func_001B68E0();
void func_001B69D0(s32, s16, s32);
void func_001B6940(s32, s16, f32 *);
void func_001B6A40(s32, s16, f32);

s32 *func_00227CB0(s32 arg0, s32 *arg1) {
    s32 temp;
    s32 obj;
    s16 i;
    f32 vec[3];
    s32 sp4C;

    sp4C = arg0;
    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp4C);
    obj = HIE_fn_hGetSuperObjectObject(sp4C)->unk_14;
    func_001B6910(obj, 0);
    func_001B68E0(obj, 0);
    for (i = 0; i < 2; i++) {
        func_001B69D0(obj, i, 0);
    }
    for (i = 0; i < 2; i++) {
        vec[2] = vec[1] = vec[0] = 0.0f;
        func_001B6940(obj, i, vec);
    }
    for (i = 0; i < 2; i++) {
        func_001B6A40(obj, i, 0.0f);
    }
    return arg1;
}
