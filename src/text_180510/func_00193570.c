#include "common.h"

typedef struct unk_func_00193570_1 {
    void *unk_00;
    s16 unk_04;
    s16 unk_06;
} unk_func_00193570_1;

typedef struct unk_func_00193570_0 {
    u8 pad_00[0xC];
    s16 *unk_0C;
    unk_func_00193570_1 **unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_func_00193570_0;

void *HMU_fn_p_vMalloc(s32, s32);

void func_00193570(unk_func_00193570_0 *arg0, s16 *arg1, s16 arg2) {
    s16 i;
    unk_func_00193570_1 *p;

    for (i = 0; i < arg0->unk_22; i++) {
        if (arg0->unk_0C[i] == 0) {
            break;
        }
    }
    if (i != arg0->unk_22) {
        arg0->unk_0C[i] = 9;
        *arg1 = i;
        p = HMU_fn_p_vMalloc(8, 0);
        p->unk_00 = HMU_fn_p_vMalloc(arg2 * 0xC, 0);
        p->unk_04 = arg2;
        p->unk_06 = -1;
        arg0->unk_10[i] = p;
    }
}
