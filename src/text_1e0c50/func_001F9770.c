/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F9770_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001F9770_0;

typedef struct unk_func_001F9770_1 {
    u8 pad_00[0x10];
    unk_func_001F9770_0 unk_10;
} unk_func_001F9770_1;

typedef struct unk_func_001F9770_2 {
    unk_func_001F9770_0 unk_00;
    s32 unk_0C;
} unk_func_001F9770_2;

typedef struct unk_func_001F9770_3 {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
    s32 unk_10;
} unk_func_001F9770_3;

unk_func_001F9770_3 *HIE_fn_hGetSuperObjectObject();
void fn_vGetUltraOperatorPerso();
unk_func_001F9770_1 *func_001B8500();
s32 func_00208CC0();

s32 *func_001F9770(s32 arg0, s32 *arg1, unk_func_001F9770_2 *arg2) {
    s32 sp5C;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s1;
    unk_func_001F9770_1 *temp_s0;

    temp_s2 = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s2), arg0, &sp5C);
    temp_s3 = HIE_fn_hGetSuperObjectObject(sp5C)->unk_10;
    temp_s1 = HIE_fn_hGetSuperObjectObject(sp5C)->unk_08;
    if (temp_s1 == 0) {
        return arg1;
    }
    if ((temp_s0 = func_001B8500(temp_s1)) == NULL) {
        return arg1;
    }
    (&arg2->unk_00)->unk_00 = ((unk_func_001F9770_0 *)((u8 *)temp_s0 + 0x10))->unk_00;
    (&arg2->unk_00)->unk_04 = ((unk_func_001F9770_0 *)((u8 *)temp_s0 + 0x10))->unk_04;
    (&arg2->unk_00)->unk_08 = ((unk_func_001F9770_0 *)((u8 *)temp_s0 + 0x10))->unk_08;
    arg2->unk_0C = 0x15;
    return arg1;
}
