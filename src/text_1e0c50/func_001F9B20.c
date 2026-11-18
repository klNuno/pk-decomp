/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001F9B20_0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_001F9B20_1;

s32 func_00208CC0(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_001F9B20_1 *HIE_fn_hGetSuperObjectObject(s32);
u8 func_001B5FE0(s32);

s32 func_001F9B20(s32 arg0, s32 arg1, unk_func_001F9B20_0 *arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 sp4C;

    temp_s2 = ((s32 *)arg1)[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s2), arg0, &sp4C);
    temp_s0 = HIE_fn_hGetSuperObjectObject(sp4C)->unk_10;
    temp_s1 = func_001B5FE0(temp_s0);
    arg2->unk_00 = temp_s1;
    arg2->unk_0C = 6;
    return arg1;
}
