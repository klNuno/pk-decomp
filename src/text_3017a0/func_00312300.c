#include "common.h"

typedef struct unk_func_00312300_1 {
    s32 unk_00;
    struct unk_func_00312300_1 *unk_04;
} unk_func_00312300_1;

typedef struct {
    unk_func_00312300_1 *unk_00;
    unk_func_00312300_1 *unk_04;
} unk_func_00312300_0;

void func_00119548(void *);

s32 func_00312300(unk_func_00312300_0 *arg0, s32 arg1) {
    unk_func_00312300_1 *head;
    unk_func_00312300_1 *p;
    unk_func_00312300_1 *prev;

    p = head = arg0->unk_00;
    prev = NULL;
    while (p != NULL) {
        if (p->unk_00 == arg1) {
            if (p == head) {
                if (p == arg0->unk_04) {
                    func_00119548(head);
                    arg0->unk_04 = NULL;
                    arg0->unk_00 = NULL;
                } else {
                    arg0->unk_00 = head->unk_04;
                    func_00119548(p);
                }
            } else if (p == arg0->unk_04) {
                arg0->unk_04 = prev;
                prev->unk_04 = NULL;
                func_00119548(p);
            } else {
                prev->unk_04 = p->unk_04;
                func_00119548(p);
            }
            return 1;
        }
        prev = p;
        p = p->unk_04;
    }
    return 0;
}
