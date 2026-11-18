/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 *unk_04;
} unk_func_001E9C60_0;

void memcpy(void *, void *, s32);

s32 func_001E9C60(unk_func_001E9C60_0 *arg0, u8 arg1, unk_func_001E9C60_0 **arg2) {
    unk_func_001E9C60_0 *p;
    unk_func_001E9C60_0 *q;
    u8 n;

    q = *arg2;
    p = arg0;
    arg1 = arg1;
    if (q->unk_00 > p->unk_01) {
        n = p->unk_01;
    } else {
        n = q->unk_00;
    }
    p->unk_00 = n;
    memcpy(p->unk_04, q->unk_04, p->unk_00 * 4);
    return 1;
}
