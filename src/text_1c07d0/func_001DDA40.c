#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_001DDA40_0;

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[0x12];
    unk_func_001DDA40_0 *unk_18;
} unk_func_001DDA40_1;

unk_func_001DDA40_0 *HMU_fn_p_vMalloc(s32, s32);

void func_001DDA40(unk_func_001DDA40_1 *arg0, s16 arg1) {
    s16 i;

    arg0->unk_04 = arg1;
    if (arg0->unk_04 != 0 && arg0->unk_18 == 0) {
        arg0->unk_18 = HMU_fn_p_vMalloc(arg0->unk_04 * sizeof(unk_func_001DDA40_0), 0);
        for (i = 0; i < arg0->unk_04; i++) {
            arg0->unk_18[i].unk_00 = 3.4028220466166163e+38f;
            arg0->unk_18[i].unk_04 = 3.4028220466166163e+38f;
            arg0->unk_18[i].unk_08 = 3.4028220466166163e+38f;
            arg0->unk_18[i].unk_0C = -3.4028220466166163e+38f;
            arg0->unk_18[i].unk_10 = -3.4028220466166163e+38f;
            arg0->unk_18[i].unk_14 = -3.4028220466166163e+38f;
        }
    }
}
