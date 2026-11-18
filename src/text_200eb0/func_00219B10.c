/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00219B10_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00219B10_0;

typedef struct unk_func_00219B10_1 {
    u8 pad_00[0x24];
    s32 unk_24;
} unk_func_00219B10_1;

s32 func_00208CC0();
void fn_vGetUltraOperatorPerso();
s32 *func_00155EE0(s32);

s32 *func_00219B10(s32 arg0, s32 *arg1, unk_func_00219B10_0 *arg2) {
    unk_func_00219B10_1 *sp2C;
    s32 temp_s0;

    temp_s0 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s0), arg0, &sp2C);
    arg2->unk_00 = func_00155EE0(sp2C->unk_24)[0];
    arg2->unk_04 = func_00155EE0(sp2C->unk_24)[1];
    arg2->unk_08 = func_00155EE0(sp2C->unk_24)[2];
    arg2->unk_0C = 0x15;
    return arg1;
}
