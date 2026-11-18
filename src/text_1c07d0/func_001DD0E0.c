#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    u8 pad_06[0x2];
    void *unk_08;
    s16 *unk_0C;
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
} unk_Q_0;

void *HMU_fn_p_vMalloc(s32, s32);

static inline void func_inl_0(unk_Q_0 *p) {
    s16 i;
    s16 n;

    n = p->unk_02;
    for (i = 0; i < n; i++) {
        p->unk_0C[i] = 0;
    }
    p->unk_14 = 0;
    p->unk_04 = 0;
    p->unk_18 = 0;
    p->unk_1C = 0;
    p->unk_20 = 0;
    p->unk_24 = 0;
    p->unk_28 = 0;
}

void func_001DD0E0(unk_Q_0 **arg0, s16 arg1, s16 arg2) {
    unk_Q_0 *p;

    p = HMU_fn_p_vMalloc(0x2C, 0);
    p->unk_02 = arg2;
    p->unk_00 = arg1;
    p->unk_0C = HMU_fn_p_vMalloc(arg2 * 2, 0);
    p->unk_10 = HMU_fn_p_vMalloc(arg2 * 4, 0);
    p->unk_08 = HMU_fn_p_vMalloc(arg1 * 12, 0);
    *arg0 = p;
    func_inl_0(*arg0);
}
