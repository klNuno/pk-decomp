#include "common.h"

typedef struct unk_func_00196DD0_0 {
    void *unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    void *unk_0C;
    void *unk_10;
    s32 unk_14;
    u8 pad_18[0x8];
    s16 unk_20;
    s16 unk_22;
    s16 unk_24;
} unk_func_00196DD0_0;

void *HMU_fn_p_vMalloc(s32, s32);
void func_001942F0(unk_func_00196DD0_0 *, s16, s16);
void *memset(void *, s32, u32);

void func_00196DD0(unk_func_00196DD0_0 **arg0, s16 arg1, s16 arg2) {
    unk_func_00196DD0_0 *p;

    p = HMU_fn_p_vMalloc(0x88, 1);
    p->unk_22 = arg2;
    p->unk_20 = arg1;
    p->unk_0C = HMU_fn_p_vMalloc(arg2 * 2, 1);
    p->unk_10 = HMU_fn_p_vMalloc(arg2 * 4, 1);
    p->unk_00 = HMU_fn_p_vMalloc(arg1 * 12, 1);
    memset(p->unk_00, 0, arg1 * 12);
    p->unk_08 = 0;
    p->unk_14 = 0;
    *arg0 = p;
    func_001942F0(*arg0, arg1, arg2);
    (*arg0)->unk_24 = 0;
}
