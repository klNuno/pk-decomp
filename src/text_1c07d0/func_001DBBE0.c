#include "common.h"

typedef struct unk_func_001DBBE0_1 {
    void *unk_00;
    s16 unk_04;
    s16 unk_06;
} unk_func_001DBBE0_1;

typedef struct unk_func_001DBBE0_0 {
    u8 pad_00[0x2];
    s16 unk_02;
    u8 pad_04[0x8];
    s16 *unk_0C;
    unk_func_001DBBE0_1 **unk_10;
} unk_func_001DBBE0_0;

void *HMU_fn_p_vMalloc(s32, s32);

void func_001DBBE0(unk_func_001DBBE0_0 *arg0, s16 *arg1, s32 arg2) {
    s16 i;
    unk_func_001DBBE0_1 *temp;

    for (i = 0; i < arg0->unk_02; i++) {
        if (arg0->unk_0C[i] == 0) {
            break;
        }
    }
    if (i != arg0->unk_02) {
        arg0->unk_0C[i] = 7;
        *arg1 = i;
        temp = HMU_fn_p_vMalloc(8, 0);
        temp->unk_00 = HMU_fn_p_vMalloc((s16)arg2 * 12, 0);
        temp->unk_04 = arg2;
        temp->unk_06 = -1;
        arg0->unk_10[i] = temp;
    }
}
