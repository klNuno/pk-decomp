/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AB960_0 {
    struct unk_func_001AB960_0 *unk_00;
    u8 pad_04[0xD];
    u8 unk_11;
} unk_func_001AB960_0;

extern unk_func_001AB960_0 *D_005AB768[];

u8 func_001AB960(u32 arg0) {
    u32 i;
    unk_func_001AB960_0 *p;
    unk_func_001AB960_0 *q;
    unk_func_001AB960_0 *r;

    i = 0;
    p = D_005AB768[0];
    q = p;
    while (i < arg0) {
        i++;
        p = p->unk_00;
        r = p;
    }
    return p->unk_11;
}
