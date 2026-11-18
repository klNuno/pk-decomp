/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[0x10];
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    u8 unk_40;
    u8 unk_41;
    u8 pad_42[0x2B];
    u8 unk_6D;
    u8 pad_6E[2];
} unk_func_001B61D0_0;

unk_func_001B61D0_0 *HMU_fn_p_vMalloc();

unk_func_001B61D0_0 *func_001B61D0(void) {
    unk_func_001B61D0_0 *p;

    p = 0;
    p = HMU_fn_p_vMalloc(0x70, 0);
    p->unk_41 = 0;
    p->unk_00 = 0;
    p->unk_04 = 0;
    p->unk_08 = 0;
    p->unk_0C = 0;
    p->unk_10 = 0;
    p->unk_14 = 0;
    p->unk_18 = 0;
    p->unk_1C = 0;
    p->unk_6D = 0;
    p->unk_30 = 0;
    p->unk_34 = 0;
    p->unk_38 = 0;
    p->unk_3C = 0;
    p->unk_40 = 1;
    return p;
}
