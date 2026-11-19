/* profile: o0_301_p */
#include "common.h"

typedef struct unk_WPARCLST_fn_lGetWeight_0 {
    struct unk_WPARCLST_fn_lGetWeight_0 *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
    u8 pad_10[0x8];
    s32 unk_18;
} unk_WPARCLST_fn_lGetWeight_0;

s32 WPARCLST_fn_lGetWeight(unk_WPARCLST_fn_lGetWeight_0 **arg0, s32 arg1, s32 *arg2) {
    unk_WPARCLST_fn_lGetWeight_0 *first;
    unk_WPARCLST_fn_lGetWeight_0 *next;
    s32 i;
    unk_WPARCLST_fn_lGetWeight_0 *p;

    if (arg0 != NULL && arg1 != 0) {
        for (i = 0, first = p = *arg0; p != NULL; i++, next = p = p->unk_00, (void)next) {
            if (p->unk_0C == arg1) {
                *arg2 = p->unk_18;
                return 0;
            }
        }
    }
    return -1;
}
