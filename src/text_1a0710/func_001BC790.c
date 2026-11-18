/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001BC790_0 {
    struct unk_func_001BC790_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    s32 unk_10;
} unk_func_001BC790_0;

extern unk_func_001BC790_0 *D_005AD930[];

s32 func_001BC790(s32 arg0) {
    unk_func_001BC790_0 *p;
    unk_func_001BC790_0 *q;
    s32 i;
    unk_func_001BC790_0 *first;

    for (i = 0, p = D_005AD930[0], first = p; p != NULL; i++, q = p = p->unk_00, (void)q) {
        if (p->unk_0C == arg0) {
            return p->unk_10;
        }
    }
    return 0;
}
