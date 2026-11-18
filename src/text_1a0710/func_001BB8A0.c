/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001BB8A0_0 {
    struct unk_func_001BB8A0_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001BB8A0_0;

typedef struct {
    unk_func_001BB8A0_0 *unk_00;
    u8 pad_04[4];
    s32 unk_08;
} unk_func_001BB8A0_1;

s32 func_001BB8A0(unk_func_001BB8A0_1 **arg0, s32 arg1) {
    unk_func_001BB8A0_0 *next;
    unk_func_001BB8A0_0 *p;
    s32 i;

    if (arg0 != NULL && *arg0 != NULL) {
        s32 n;
        unk_func_001BB8A0_0 *first;

        n = (*arg0)->unk_08;
        i = 0;
        p = (*arg0)->unk_00;
        first = p;
        while (p != NULL) {
            if (arg1 == p->unk_0C) {
                return n - i - 1;
            }
            i++;
            next = p = p->unk_00;
            (void)next;
        }
    }
    return -1;
}
