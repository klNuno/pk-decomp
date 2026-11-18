/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F9320_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001F9320_0;

typedef struct unk_func_001F9320_1 {
    u8 pad_00[0x20];
    s32 unk_20;
} unk_func_001F9320_1;

unk_func_001F9320_1 *HIE_fn_hGetSuperObjectObject();
void fn_vGetUltraOperatorPerso();
s8 func_00131CD0();
s32 func_001BE470();
s32 func_00208CC0();

s32 *func_001F9320(s32 arg0, s32 *arg1, unk_func_001F9320_0 *arg2) {
    s32 sp5C;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;

    temp_s1 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s1), arg0, &sp5C);
    temp_s2 = HIE_fn_hGetSuperObjectObject(sp5C)->unk_20;
    temp_s3 = func_001BE470(temp_s2);
    temp_s0 = func_00131CD0(temp_s3);
    arg2->unk_00 = temp_s0;
    arg2->unk_0C = 6;
    return arg1;
}
