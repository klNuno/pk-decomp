#include "common.h"

typedef struct unk_func_00193BA0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
} unk_func_00193BA0_0;

typedef struct unk_func_00193BA0_1 {
    u8 pad_00[0x18];
    unk_func_00193BA0_0 *unk_18;
    u8 pad_1C[0xA];
    s16 unk_26;
} unk_func_00193BA0_1;

void *HMU_fn_p_vMalloc(s32, s32);

void func_00193BA0(unk_func_00193BA0_1 *arg0, s16 arg1) {
    s16 i;

    arg0->unk_26 = arg1;
    if (arg0->unk_26 != 0 && arg0->unk_18 == 0) {
        arg0->unk_18 = HMU_fn_p_vMalloc(arg0->unk_26 * 0x18, 0);
        for (i = 0; i < arg0->unk_26; i++) {
            arg0->unk_18[i].unk_00 = 3.402822e38f;
            arg0->unk_18[i].unk_04 = 3.402822e38f;
            arg0->unk_18[i].unk_08 = 3.402822e38f;
            arg0->unk_18[i].unk_0C = -3.402822e38f;
            arg0->unk_18[i].unk_10 = -3.402822e38f;
            arg0->unk_18[i].unk_14 = -3.402822e38f;
        }
    }
}
