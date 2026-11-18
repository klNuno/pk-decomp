/* profile: o0_p */
#include "common.h"

typedef struct unk_WPARCLST_0 {
    struct unk_WPARCLST_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    s32 unk_10;
} unk_WPARCLST_0;

typedef struct {
    unk_WPARCLST_0 *unk_00;
} unk_WPARCLST_1;

s32 WPARCLST_fn_lGetCapabilities(unk_WPARCLST_1 *arg0, s32 arg1, s32 *arg2) {
    unk_WPARCLST_0 *p;
    s32 i;
    unk_WPARCLST_0 *next;
    unk_WPARCLST_0 *first;

    if (arg0 != NULL && arg1 != 0) {
        for (i = 0, p = arg0->unk_00, first = p; p != NULL; i++, p = p->unk_00, next = p, next = next) {
            if (p->unk_0C == arg1) {
                *arg2 = p->unk_10;
                return 0;
            }
        }
    }
    return -1;
}
