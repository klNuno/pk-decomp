/* profile: o0 */
#include "common.h"

typedef union {
    f32 unk_00;
    s32 unk_00_s32;
} unk_func_0021D2E0_0;

typedef struct {
    unk_func_0021D2E0_0 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021D2E0_1;

extern u32 D_005AB848[];
extern f32 D_005AB850[];
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0021D2E0_1 *);
s32 func_0019D550(f32);

s32 *func_0021D2E0(s32 arg0, s32 *arg1, unk_func_0021D2E0_1 *arg2) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    s32 temp5;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp0 = arg2->unk_0C == 8 ? arg2->unk_00.unk_00 : (f32)arg2->unk_00.unk_00_s32;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp2 = arg2->unk_0C == 8 ? arg2->unk_00.unk_00 : (f32)arg2->unk_00.unk_00_s32;
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp1 = arg2->unk_0C == 8 ? arg2->unk_00.unk_00 : (f32)arg2->unk_00.unk_00_s32;

    temp5 = func_0019D550(0.5f + (f32)D_005AB848[0] / (1000.0f * D_005AB850[0]));
    switch (temp5) {
    case 1:
        temp3 = temp2;
        break;
    case 2:
        temp3 = temp2 * temp2;
        break;
    case 3:
        temp3 = (temp2 * temp2) * temp2;
        break;
    case 4:
        temp4 = temp2 * temp2;
        temp3 = temp4 * temp4;
        break;
    case 5:
        temp4 = temp2 * temp2;
        temp3 = (temp4 * temp4) * temp2;
        break;
    default:
        temp4 = (temp2 * temp2) * temp2;
        temp3 = temp4 * temp4;
        break;
    }

    temp0 -= temp1;
    temp3 = temp0 * temp3;
    temp3 += temp1;
    arg2->unk_00.unk_00 = temp3;
    arg2->unk_0C = 8;
    return arg1;
}
