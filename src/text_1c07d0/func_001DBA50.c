#include "common.h"

typedef struct {
    s32 unk_00;
    s16 unk_04;
    s16 unk_06;
} unk_func_001DBA50_1;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    u8 pad_04[0x8];
    s16 *unk_0C;
    unk_func_001DBA50_1 **unk_10;
} unk_func_001DBA50_0;

void *HMU_fn_p_vMalloc(s32, s32);

void func_001DBA50(unk_func_001DBA50_0 *arg0, s16 *arg1, s16 arg2) {
    s16 i;
    unk_func_001DBA50_1 *p;

    for (i = 0; i < arg0->unk_02; i++) {
        if (arg0->unk_0C[i] == 0) {
            break;
        }
    }
    if (i != arg0->unk_02) {
        arg0->unk_0C[i] = 8;
        *arg1 = i;
        p = HMU_fn_p_vMalloc(8, 0);
        p->unk_00 = (s32)HMU_fn_p_vMalloc(arg2 * 8, 0);
        p->unk_04 = arg2;
        p->unk_06 = -1;
        arg0->unk_10[i] = p;
    }
}
