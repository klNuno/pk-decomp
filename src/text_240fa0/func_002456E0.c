/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_002456E0_0 {
    u8 pad_00[0x1C];
    u8 unk_1C;
} unk_func_002456E0_0;

typedef struct unk_func_002456E0_1 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002456E0_1;

s32 func_00208CC0();
void fn_vGetUltraOperatorPerso();
unk_func_002456E0_0 *func_00246280(s32);

s32 *func_002456E0(s32 arg0, s32 *arg1, unk_func_002456E0_1 *arg2) {
    unk_func_002456E0_0 *p;
    u16 val;
    s32 temp;
    s32 sp4C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &sp4C);
    p = func_00246280(sp4C);
    if (p != NULL) {
        val = p->unk_1C;
    } else {
        val = 0;
    }
    arg2->unk_00 = val;
    arg2->unk_0C = 6;
    return arg1;
}
