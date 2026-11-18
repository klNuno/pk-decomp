#include "common.h"

typedef struct unk_func_002CDFC0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    char *unk_0C;
} unk_func_002CDFC0_0;

void *func_002D2BC0(s32);
void *memcpy(void *, const void *, s32);
extern char D_0035F66C;

void func_002CDFC0(unk_func_002CDFC0_0 **arg0, const char *arg1, const char *arg2) {
    s32 n;
    s32 sz;
    unk_func_002CDFC0_0 *p;

    *arg0 = func_002D2BC0(0x10);
    p = *arg0;
    n = arg2 - arg1;
    if (p != NULL) {
        unk_func_002CDFC0_0 *volatile q = p;
        p->unk_04 = (n + 3) - (n & 3);
        q->unk_08 = 1;
        sz = q->unk_04 + 1;
        q->unk_0C = sz != 0 ? func_002D2BC0(sz) : NULL;
    }
    memcpy((*arg0)->unk_0C, arg1, n);
    (*arg0)->unk_00 = n;
    (*arg0)->unk_0C[n] = D_0035F66C;
}
