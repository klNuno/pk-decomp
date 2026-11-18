/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00219270_0 {
    u8 pad_00[0x28];
    s32 unk_28;
} unk_func_00219270_0;

typedef struct unk_func_00219270_1 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_00219270_1;

s32 func_00208CC0(s32);
void fn_vGetUltraOperatorPerso(s32, s32, s32 *);
unk_func_00219270_0 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001BAEE0(s32);
s32 func_001BAF30(s32);
void func_001EDBB0(s32, s32);

s32 *func_00219270(s32 arg0, s32 *arg1, unk_func_00219270_1 *arg2) {
    s32 temp_s0;
    s32 var_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 sp5C;

    temp_s3 = arg1[-2];
    var_s1 = 0;
    fn_vGetUltraOperatorPerso(func_00208CC0(temp_s3), arg0, &sp5C);
    temp_s0 = HIE_fn_hGetSuperObjectObject(sp5C)->unk_28;
    if (temp_s0 != 0) {
        switch (temp_s3) {
        case 0x155:
            temp_s2 = func_001BAEE0(temp_s0);
            var_s1 = temp_s2 >> 16;
            break;
        case 0x156:
            temp_s2 = func_001BAF30(temp_s0);
            var_s1 = temp_s2 >> 16;
            break;
        default:
            func_001EDBB0(0x27, 0);
            break;
        }
    }
    arg2->unk_00 = var_s1;
    arg2->unk_0C = 6;
    return arg1;
}
