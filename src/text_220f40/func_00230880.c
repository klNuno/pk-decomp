/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00230880_0;

unk_func_00230880_0 *HIE_fn_hGetSuperObjectObject();
s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
void func_001A4B20();
unk_func_00230880_0 *func_001F19D0();

s32 *func_00230880(s32 arg0, s32 *arg1) {
    unk_func_00230880_0 *temp2;
    s32 temp;
    s32 sp3C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp3C);
    switch (temp) {
    case 0x108:
        if (HIE_fn_hGetSuperObjectObject(sp3C)->unk_04 != 0) {
            func_001A4B20(sp3C, 0);
        }
        break;
    case 0x109:
        if ((temp2 = func_001F19D0(sp3C)) != NULL) {
            temp2->unk_04 = 0;
        }
        break;
    }
    return arg1;
}
