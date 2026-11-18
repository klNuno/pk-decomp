/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0012FA10_0 {
    struct unk_func_0012FA10_0 *unk_00;
    struct unk_func_0012FA10_0 *unk_04;
} unk_func_0012FA10_0;

typedef struct unk_func_0012FA10_1 {
    u8 pad_00[0x20];
    unk_func_0012FA10_0 *unk_20;
    s32 unk_24;
} unk_func_0012FA10_1;

void func_00198140();

void func_0012FA10(unk_func_0012FA10_1 *arg0, unk_func_0012FA10_1 *arg1) {
    s16 j;
    unk_func_0012FA10_0 *n;
    s16 i;
    unk_func_0012FA10_0 *q;
    unk_func_0012FA10_0 *a;
    unk_func_0012FA10_0 *p;
    unk_func_0012FA10_0 *b;

    p = arg0->unk_20;
    for (i = 0; i < arg0->unk_24; i++) {
        a = p->unk_04->unk_04;
        if (a != NULL && a != (unk_func_0012FA10_0 *)arg1) {
            q = arg1->unk_20;
            for (j = 0; j < arg1->unk_24; j++) {
                b = q->unk_04->unk_04;
                if (b != NULL && a == b) {
                    break;
                }
                q++;
            }
            if (a != NULL && a != b) {
                for (n = a->unk_00; n != NULL; n = n->unk_04) {
                    func_00198140(n->unk_00->unk_04);
                }
            }
        }
        p++;
    }
}
