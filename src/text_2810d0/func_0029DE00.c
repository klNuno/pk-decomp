/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0029DE00_1 {
    struct unk_func_0029DE00_1 *unk_00;
} unk_func_0029DE00_1;

typedef struct unk_func_0029DE00_2 {
    struct unk_func_0029DE00_2 *unk_00;
    u8 pad_04[8];
    void *unk_0C;
    void *unk_10;
} unk_func_0029DE00_2;

typedef struct {
    u8 pad_00[4];
    unk_func_0029DE00_1 *unk_04;
    u8 pad_08[4];
    unk_func_0029DE00_2 *unk_0C;
} unk_func_0029DE00_0;

extern void (*D_0035F64C)(void *);

void func_0029DE00(unk_func_0029DE00_0 *arg0) {
    unk_func_0029DE00_1 *p;
    unk_func_0029DE00_2 *q;
    void *next;

    if (arg0 != NULL) {
        p = arg0->unk_04;
        q = arg0->unk_0C;
        if (p != NULL) {
            do {
                next = p->unk_00;
                D_0035F64C(p);
                p = next;
            } while (next != NULL);
        }
        arg0->unk_04 = NULL;
        while (q != NULL) {
            next = q->unk_00;
            if (q->unk_0C != NULL) {
                D_0035F64C(q->unk_0C);
                q->unk_0C = NULL;
            }
            if (q->unk_10 != NULL) {
                D_0035F64C(q->unk_10);
                q->unk_10 = NULL;
            }
            q = next;
        }
    }
}
