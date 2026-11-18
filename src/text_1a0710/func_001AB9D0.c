/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AB9D0_0 {
    struct unk_func_001AB9D0_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001AB9D0_0;

extern unk_func_001AB9D0_0 *D_005AB768[];

s32 func_001AB9D0(u32 arg0) {
    u32 i;
    unk_func_001AB9D0_0 *p;
    unk_func_001AB9D0_0 *q;
    unk_func_001AB9D0_0 *head;

    i = 0;
    p = D_005AB768[0];
    head = p;
    while (i < arg0) {
        i++;
        p = p->unk_00;
        q = p;
    }
    if (p != NULL) {
        return p->unk_0C;
    }
    return 0;
}
