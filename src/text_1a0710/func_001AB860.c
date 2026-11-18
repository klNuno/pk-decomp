/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AB860_0 {
    struct unk_func_001AB860_0 *unk_00;
    u8 pad_04[0xD];
    u8 unk_11;
} unk_func_001AB860_0;

extern unk_func_001AB860_0 *D_005AB750[];

u8 func_001AB860(u32 arg0) {
    u32 i;
    unk_func_001AB860_0 *p;
    unk_func_001AB860_0 *a;
    unk_func_001AB860_0 *b;

    i = 0;
    p = D_005AB750[0];
    a = p;
    while (i < arg0) {
        i++;
        p = p->unk_00;
        b = p;
    }
    return p->unk_11;
}
