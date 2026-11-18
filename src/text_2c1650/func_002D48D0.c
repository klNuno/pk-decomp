/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002D48D0_0 {
    s32 unk_00;
    s32 unk_04;
    volatile s32 unk_08;
    char *unk_0C;
} unk_func_002D48D0_0;

void *func_002D2BC0(s32);
void *memcpy(void *, const void *, u32);

unk_func_002D48D0_0 *func_002D48D0(unk_func_002D48D0_0 *arg0) {
    unk_func_002D48D0_0 *p;
    unk_func_002D48D0_0 *volatile r;
    unk_func_002D48D0_0 *q;
    s32 n;
    unk_func_002D48D0_0 *ret;

    if (arg0->unk_08 != 0) {
        arg0->unk_08++;
        return arg0;
    }
    p = func_002D2BC0(0x10);
    ret = p;
    if (p != NULL) {
        r = p;
        p->unk_00 = arg0->unk_00;
        r->unk_04 = arg0->unk_00 + 3 - (arg0->unk_00 & 3);
        r->unk_08 = 1;
        n = r->unk_04 + 1;
        r->unk_0C = (n != 0) ? (char *)func_002D2BC0(n) : NULL;
        q = r;
        memcpy(q->unk_0C, arg0->unk_0C, q->unk_00 + 1);
        ret = p;
    }
    return ret;
}
