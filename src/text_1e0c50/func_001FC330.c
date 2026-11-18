/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FC330_0 {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001FC330_0;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_001FC330_0 *HIE_fn_hGetSuperObjectObject();
void func_001B45E0();

s32 *func_001FC330(s32 arg0, s32 *arg1) {
    s32 a;
    s32 temp;
    s32 sp3C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp3C);
    a = HIE_fn_hGetSuperObjectObject(sp3C)->unk_10;
    func_001B45E0(a);
    return arg1;
}
