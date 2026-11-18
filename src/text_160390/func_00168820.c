#include "common.h"

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[2];
    s32 *unk_08;
    s32 *unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_00168820_0;

void *HMU_fn_p_vMalloc(s32, s32);

unk_func_00168820_0 *func_00168820(s32 arg0) {
    unk_func_00168820_0 *p;
    s16 i;

    p = HMU_fn_p_vMalloc(0x18, 1);
    if (p == NULL) {
        return NULL;
    }
    p->unk_08 = HMU_fn_p_vMalloc(arg0 * 4, 1);
    if (p->unk_08 == NULL) {
        return NULL;
    }
    p->unk_0C = HMU_fn_p_vMalloc(arg0 * 4, 1);
    if (p->unk_0C == NULL) {
        return NULL;
    }
    p->unk_04 = arg0;
    for (i = 0; i < arg0; i++) {
        p->unk_08[i] = 0;
        p->unk_0C[i] = 0;
    }
    p->unk_14 = 0;
    p->unk_10 = 0;
    return p;
}
