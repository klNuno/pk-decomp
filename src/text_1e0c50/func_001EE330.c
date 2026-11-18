/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001EE330_0 {
    struct unk_func_001EE330_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    u8 pad_10[8];
    s32 unk_18;
} unk_func_001EE330_0;

s32 func_001EE330(unk_func_001EE330_0 **arg0, s32 arg1, s32 arg2) {
    unk_func_001EE330_0 *first;
    s32 i;
    unk_func_001EE330_0 *q;
    unk_func_001EE330_0 *p;

    if (arg0 != NULL && arg1 != 0) {
        i = 0;
        p = *arg0;
        first = p;
        while (p != NULL) {
            if (p->unk_0C == arg1) {
                p->unk_18 = arg2;
                return 0;
            }
            i++;
            p = p->unk_00;
            q = p;
            q = q;
        }
    }
    return -1;
}
