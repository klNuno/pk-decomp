/* profile: o0_301_p */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00212030_0;

s32 func_00208CC0(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
u16 func_001C7210(s32);
void func_001EDBB0(s32, s32);

s32 *func_00212030(s32 arg0, s32 *arg1, unk_func_00212030_0 *arg2) {
    s32 temp;
    s32 sp2C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp), arg0, &sp2C);
    if (temp == 0xC9) {
        arg2->unk_00 = func_001C7210(sp2C);
        arg2->unk_0C = 6;
        return arg1;
    }
    func_001EDBB0(0x27, 0);
    return arg1;
}
