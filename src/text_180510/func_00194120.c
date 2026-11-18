#include "common.h"

typedef struct unk_func_00194120_0 {
    void *unk_00;
    void *unk_04;
    s32 unk_08;
    s16 *unk_0C;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s16 unk_20;
    s16 unk_22;
    s16 unk_24;
    s16 unk_26;
    u8 pad_28[0x4C];
    s32 unk_74;
    s32 unk_78;
    u8 pad_7C[0x4];
    s32 unk_80;
    s32 unk_84;
} unk_func_00194120_0;

void *HMU_fn_p_vMalloc(s32, s32);

void func_00194120(unk_func_00194120_0 **arg0, s16 arg1, s16 arg2) {
    unk_func_00194120_0 *temp;
    s16 i;
    unk_func_00194120_0 *temp2;

    temp = HMU_fn_p_vMalloc(0x88, 0);
    temp->unk_22 = arg2;
    temp->unk_20 = arg1;
    temp->unk_0C = HMU_fn_p_vMalloc(arg2 * 2, 0);
    temp->unk_10 = HMU_fn_p_vMalloc(arg2 * 4, 0);
    temp->unk_00 = HMU_fn_p_vMalloc(arg1 * 12, 0);
    temp->unk_04 = HMU_fn_p_vMalloc(arg1 * 12, 0);
    temp->unk_14 = 0;
    temp->unk_80 = 0;
    temp->unk_84 = 0;
    *arg0 = temp;
    temp2 = *arg0;
    for (i = 0; i < arg2; i++) {
        temp2->unk_0C[i] = 0;
    }
    temp2->unk_26 = 0;
    temp2->unk_18 = 0;
    temp2->unk_1C = 0;
    temp2->unk_08 = 0;
    temp2->unk_74 = 1;
    temp2->unk_78 = 1;
    temp2->unk_80 = 0;
    temp2->unk_84 = 0;
    (*arg0)->unk_24 = 0;
}
